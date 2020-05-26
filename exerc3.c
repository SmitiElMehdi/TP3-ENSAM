#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inversion(int *T, int n)
{
    int k = 0;
    for(int i = 0; i < n ; i++)
    {
        for(int j = i ; j < n ; j++)
        {
            if(T[i]>T[j])
            {
                k++;
            }
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
    printf("Le nombre d'inversion est : %d", inversion(A,n));
    return 0; 
}