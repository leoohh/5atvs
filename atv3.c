#include <stdlib.h>
#include <locale.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "portuguese");


char numeros [100] [100];
char nome [100] [100];
int resposta;
int cont = 0;
int i;

for ( i = 0; i < 100; i++)
{
    fflush (stdin);

    printf ("Deseja inserir um contato?\n");
    printf ("1 = SIM\n");
    printf ("2 = NAO\n");
    scanf ("%d", &resposta);

    if (resposta == 1)
    {
       cont++;
       fflush (stdin);


       printf ("Insira o nome:");
       gets (nome[i]);
       fflush(stdin);
       printf ("Insira o numero:");
       gets (numeros[i]);
    } else
    cont++;
    {
        for ( i = 0; i < cont; i++)
        {
            printf ("Nome:%s \n Numero:%s \n", nome[i], numeros[i]);
        }
        
    }

}



return 0;
}