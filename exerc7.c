#include <stdio.h>
#include <stdlib.h>

int suppression(int *T,int n, int a)
{
    for(int i =0 ; i < n ; i++)
    {
        if(T[i]==a)
        {
            for(int j = i ; j < n-1; j++)
            {
                T[j]=T[j+1];
            }
            n--;  
            i--;
            T = (int*)realloc(T,(n)*sizeof(int));
        }
    }
    return n;
}

int main()
{
    int n,a;
    printf("Entrer la largeur de votre tableau  : ");
    scanf("%d",&n);
    int *T = (int*)malloc(n*sizeof(int));
    printf("Entrer les nombres de votre tableau un a un : \n");
    for(int i = 0; i < n ; i++)
    {
        scanf("%d",&T[i]);
    }
    printf("Entrer le nombre que vous voudriez supprimer de votre tableau :");
    scanf("%d",&a);
    int l = suppression(T,n,a);
    for(int i = 0 ; i < l; i++)
    {
        printf("%d \n",T[i]);
    }
}