#include <stdlib.h>
#include <stdio.h>

void function(char *T, int l)
{
    int k=0;
    for(int i = 0 ; i < l;i++)
    {
        if(T[i]=='R')
        {
            char temp = T[k];
            T[k]= T[i];
            T[i]=temp;
            k++;
        }
    }
    for(int i = k; i < l ;i++ )
    {
        if(T[i]=='W')
        {
            char temp = T[k];
            T[k]=T[i];
            T[i]=temp;
            k++;
        }
    }
}

int main()
{
    int n;
    printf("Entrer le nombre de lettre de votre tableau :");
    scanf("%d",&n);
    char *T = (char*)malloc(n*(sizeof(char)));
    printf("Entrez les lettres R,W et B dans l'ordre que vous voulez(majuscule uniquement):\n");
    for(int i = 0; i < n ; i++)
    {

        this : fflush(stdin);
        scanf("%c",&T[i]);
        if(T[i]!='R'&&T[i]!='W'&&T[i]!='B')
        {
            printf("Caractère invalide veuillez resaisir ce dernier a nouveau \n");
            goto this;
        }
    }
    function(T,n);
    for(int i = 0; i < n; i++)
    {
        printf("%c",T[i]);
    }
    return 0;
}