#include <stdio.h>
#include <stdlib.h>

void adder(int *T,int l, int a)
{
    int temp;
    for(int i = 0; i < l ; i++)
    {
        if(T[i]>a)
        {
            T = (int*)realloc(T,(l+1)*sizeof(int));
            for(int j = i; j < l+1;j++)
            {
                temp = T[j];
                T[j]=a;
                a = temp;
            }
            break;
        }
    }
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
    printf("Entrer le nombre que vous voudriez ajouter a votre tableau :");
    scanf("%d",&a);
    adder(T,n,a);
    for(int i = 0 ; i < n+1; i++)
    {
        printf("%d \n",T[i]);
    }
}