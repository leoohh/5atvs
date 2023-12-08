#include <stdlib.h>
#include <stdio.h>



int main () { 

char nome [5] [200];
int idade [5][2];
float peso [5][2];
float altura[5][2];
int i;
int j;
int maiori = 0;
int menori = 999;
float maiora = 0;
float menora = 999;
float menorp = 999, maiorp = 0;


for ( i = 0; i < 5; i++)
{
   printf ("Digite seu nome:");
   gets (nome[i]);

   fflush (stdin);


   for ( j = 0; j < 1; j++)
   {
    printf ("Digite sua idade:\n");
    scanf ("%d", &idade[i][j]);
    fflush (stdin);

    printf ("Digite seu peso:\n");
    scanf ("%f", &peso[i][j]);
    fflush (stdin);

    printf ("Digite seua altura:\n");
    scanf ("%f", &altura[i][j]);

    fflush (stdin);

   if (idade[i][j] > maiori)
            {
                maiori = idade[i][j];
            }

            if (idade[i][j] < menori)
            {
                menori = idade[i][j];
            }

            if (peso[i][j] > maiorp)
            {
                maiorp = peso[i][j];
            }

            if (peso[i][j] < menorp)
            {
                menorp= peso[i][j];
            }

            if (altura[i][j] > maiora)
            {
                maiora = altura[i][j];
            }

            if (altura[i][j] < menora)
            {
                menora = altura[i][j];
            }


   }
   
}

 printf("\n Maior idade: %d", maiori);
    printf("\n Menor idade: %d", menori);
    printf("\n Maior peso: %f", maiorp);
    printf("\n Menor peso: %f", menorp);
    printf("\n Maior altura: %.2f", maiora);
    printf("\n Menor altura: %.2f", menora);



return 0;
}