#include <stdlib.h>
#include <stdio.h>


int main () {


    int numero [5];
    int impar = 0,par = 0,negativo = 0,maior = 0,menor = 999;
    float media = 0, mediapar = 0;
    int somapar = 0;
    int soma = 0;
    int i;


    for ( i = 0; i < 5; i++)
    {

        printf ("Digite um numero:");
        scanf ("%d", &numero[i]);

        soma += numero[i];

        if (numero[i] %2 == 0)
        {
           somapar += numero[i];
           par++;
        } 
        else { 
            impar++;
        }

        if (numero [i] < 0)
        {
           negativo++;
        }

        if (numero[i] > maior)
        {
           maior = numero[i];
        }
        if (numero[i] < menor )
        {
         menor = numero[i];
        }
      

    }
    media = soma / i;
    mediapar = somapar / par;



    printf ("Numeros impares:%d\n", impar);
    printf ("numeros pares:%d\n", par);
    printf ("numeros negativos:%d\n", negativo);
    printf ("maior numero:%d\n", maior);
    printf ("media:%.1f\n", media);
    printf ("Media de pares:%.1f", mediapar);



    return 0;
}