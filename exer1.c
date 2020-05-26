#include <stdio.h>
void inverser(float t[], int n)
{
    int i = 0;
    float x;
    while(i < n/2)
    {
        x = t[i];
        t[i]=t[n-i-1];
        t[n-i-1]=x;
        i++;
    }
}

int main()
{
    int n;
    printf("Entrez la longueur de votre tableau : ");
    scanf("%d",&n);
    float *t = (float*)malloc(n*(sizeof(float)));
    printf("Entrez les valeurs de votre tableau une à une :\n");
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%f",&t[i]);
    }
    inverser(t,n);
    for(int i = 0; i < n; i++)
    {
        printf("%f ",t[i]);
    }
    return 0;
}