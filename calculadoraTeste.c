#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void){

    int dec;
    float a, b, c;

    printf ("------------ CALCULADORA ----------- \n")
;    printf ("Escolha um numero de 1 a 4: \n");
    printf ("1 - Soma \n");
    printf ("2 - Subtracao \n");
    printf ("3 - Divisao \n");
    printf ("4 - Multiplicacao \n");
    scanf ("%d", &dec);

        switch (dec){

            case 1:
            printf ("-------Soma------ \n \n");
            printf ("Digite um numero: \n");
            scanf ("%f", &a);
            printf ("Digite outro numero: \n");
            scanf ("%f", &b);
            system ("cls");
            c = a + b;
            printf ("Seu resultado e: %f", c);
            break;

            case 2:
            printf ("-------Subtracao------ \n \n");
            printf ("Digite um numero: \n");
            scanf ("%f", &a);
            printf ("Digite outro numero: \n");
            scanf ("%f", &b);
            system ("cls");
            c = a - b;
            printf ("Seu resultado e: %f", c);
            break;

            case 3:
            printf ("-------Divisao------ \n \n");
            printf ("Digite um numero: \n");
            scanf ("%f", &a);
            printf ("Digite outro numero: \n");
            scanf ("%f", &b);
            system ("cls");

                if (b == 0){
                   printf ("Divisao por zero.");
                         } else {
                                c = a / b;
                                printf ("Seu resultado e: %.2f", c);
                                }
            
            break;

            case 4:
            printf ("-------Multiplicacao------ \n \n");
            printf ("Digite um numero: \n");
            scanf ("%f", &a);
            printf ("Digite outro numero: \n");
            scanf ("%f", &b);
            system ("cls");
            c = a * b;
            printf ("Seu resultado e: %.0f", c);
            break;

            default:
                printf ("Comando nao reconhecido");
                break;
    }
}