#include <stdio.h>
#include <stdlib.h>

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
int main()
{
    int n,d,m,f;
    printf("Entrez la longueur de votre tableau :");
    scanf("%d",&n);
    printf("Entrez la valeur de d :");
    scanf("%d",&d);
    printf("Entrez la valeur de m :");
    scanf("%d",&m);
    printf("Entrez la valeur de f :");
    scanf("%d",&f);
    int *T = (int*)malloc(n*sizeof(int));
    printf("Entrez les valeurs de votre tableau une a une : ");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&T[i]);
    }
    fusion(T,d,m,f);
    for(int i = 0; i < n ; i++)
    {
        printf("%d ",T[i]);
    }
    return 0;
}