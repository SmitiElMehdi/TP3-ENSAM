#include <stdlib.h>
#include <stdio.h>

void mixing(int *A,int *B,int *R,int a,int b)
{
    int i = 0;
    int j = 0;
    for(int k=0; k < a+b;k++)
    {
        if((A[i]<=B[j] && i < a)|| j >= b)
        {
            R[k]=A[i];
            i++;
        }
        else if ((B[j]<A[i] && j < b)|| i >= a )
        {
            R[k]=B[j];
            j++;
        }      
    } 
}

int main()
{
    int n,m;
    printf("Entrer la largeur de votre premier tableau  : ");
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int));
    printf("Entrer les nombres de votre premier tableau d une maniere ordonnee un a un : \n");
    for(int i = 0; i < n ; i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Entrer la largeur de votre deuxieme tableau tableau  : ");
    scanf("%d",&m);
    int *B = (int*)malloc(m*sizeof(int));
    printf("Entrer les nombres de votre deuxieme tableau d une maniere ordonnee un a un : \n");
    for(int i = 0; i < m ; i++)
    {
        scanf("%d",&B[i]);
    }
    int *R = (int*)malloc((n+m)*sizeof(int));
    mixing(A,B,R,n,m);
    for(int i = 0; i <n+m;i++)
    {
        printf("%d ",R[i]);
    }
    return 0;
}