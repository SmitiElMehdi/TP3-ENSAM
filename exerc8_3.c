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
        }
    }
}
void divider(int *T,int n)
{
    for(int i = 0; i < n/2; i++)
    {
        for(int j=0; j < n ; j+=2*pow(2,i))
        {
            int k,v;
            if(i == 0)
            {
                k=j+1;
                v=j+1;

            }
            else
            {
                k=j+pow(2,i);
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
            fusion(T,j,k,v);
        }
        
}
}

int main()
{
    int n;
    printf("Entrez la longueur de votre tableau :");
    scanf("%d",&n);
    int *T = (int*)malloc(n*sizeof(int));
    printf("Entrez les valeurs de votre tableau une a une : ");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&T[i]);
    }
    divider(T,n);
    for(int i = 0; i < n ; i++)
    {
        printf("%d ",T[i]);
    }
    return 0;
}