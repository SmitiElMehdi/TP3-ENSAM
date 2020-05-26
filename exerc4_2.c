#include <stdio.h>
#include <stdlib.h>

float C2_Polynome(float *T, int n, float x)
{
    float s= 0;
    for(int i = n ; i > 0; i--)
    {
        s=(T[i]+s)*x;
    }
    s+=T[0];
    return s;
}

int main()
{
    int n;
    float x;
    printf("Entrez l'ordre de vote polynome : ");
    scanf("%d",&n);
    float *t = (float*)malloc(n*(sizeof(float)));
    printf("Entrez les valeurs de votre polynome:\n");
    for(int i = 0 ; i < n+1 ; i++)
    {
        scanf("%f",&t[i]);
    }
    printf("Entrez le coefficient : ");
    scanf("%f",&x);
    printf("le calcul donne : %f", C2_Polynome(t,n+1,x));
    return 0;
}