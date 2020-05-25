#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fusion(int *T, int d,int m,int f)
{
    for(int i = d; i < m; i++)
    {
        int k = m;
        if(T[i] > T[m])
        {
            int temp = T[m];
            T[m] = T[i];
            T[i] = temp;
            while(T[k]>T[k+1] && k < f-1)
            {
                int temp = T[k];
                T[k] = T[k+1];
                T[k+1] = temp;
                k++;
            }
            /*for(int i = 0 ; i < 10; i++)
    {
        printf("%d ",T[i]);
    }
    printf("\n");*/
        }
    }
}
void divider(int *T,int n)
{
    for(int i = 0; i < ceil(n/2)-1; i++)
    {
        for(int j=0; j < n ; j+=2*pow(2,i))
        {
            printf("j :%d i : %d\n",j,i);
            int k,v;
            if(i == 0)
            {
                k=j+1;
                v=j+1;

            }
            else
            {
                k=j+2*i;
                v=j+(4*i);
                if(k >= n)
                {
                    k=n-1;
                    v=n-1;
                }
                if(v>n)
                {
                    v=n-1;
                }
                
            }
            printf("K : %d V : %d\n",k,v);
            
            
            fusion(T,j,k,v);
        }
        for(int i = 0 ; i < 12; i++)
    {
        printf("%d ",T[i]);
    }
    printf("\n");
        
}
}

int main()
{
    int T[12]={4,2,2,1,10,5,9,2,6,2,6,3};
    divider(T,12);
    /*for(int i = 0 ; i < 10; i++)
    {
        printf("%d ",T[i]);
    }*/
}