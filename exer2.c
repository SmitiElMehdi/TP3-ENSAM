#include <stdio.h>
#include <stdlib.h>
int inclusion(int *A, int n , int *B , int m)
{
    int k = 0;
    for(int i = 0; i <n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(A[i]==B[j])
            {
                k = 1;
                break;
            }
            else
            {
                k = 0;
            }   
        }
        if(k==0)
        {
            break;
        }
    }
    return k;
}
int main()
{
    int n;
    printf("Entrez la longueur de votre tableau : ");
    scanf("%d",&n);
    int *A = (int*)malloc(n*(sizeof(int)));
    printf("Entrez les valeurs de votre tableau une a une :\n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&A[i]);
    }
    int m;
    printf("Entrez la longueur de votre tableau : ");
    scanf("%d",&m);
    int *B = (int*)malloc(m*(sizeof(int)));
    printf("Entrez les valeurs de votre tableau une a une :\n");
    for(int i = 0 ; i < m ; i++)
    {
        scanf("%d",&B[i]);
    }
    printf("%d",inclusion(A,n,B,m));
    return 0;
}
