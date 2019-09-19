#include<stdio.h>

int main(void)

{
    int resto;
    int quociente;
    int posicao =0;
    int resultado[100];

    printf("Digite um numero de 4 digitos:\n");
    scanf("%d", &quociente);

    if (quociente<2){
        resultado[posicao] = quociente;
    }



    while (quociente>=2) {
        resto = quociente%2;
        quociente = quociente/2;

        resultado[posicao]=resto;


        posicao++;
    }

    resultado[posicao]=quociente;

    for(int i=posicao; i>=0; i--){
    printf("%d", resultado[i]);
    }



   return 0;

    }
