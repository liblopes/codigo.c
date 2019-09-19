#include<stdio.h>

int main(void)

{
    int resto;
    int quociente;
    int posicao =0;
    int resultado[100];

    printf("Digite um numero de ate 4 digitos:\n");
    scanf("%d", &quociente);

    if (quociente<2){ // Quociente <2 guarda ele mesmo na posiçao, sempre sera 1 ou 0
        resultado[posicao] = quociente;
    }



    while (quociente>=2) { //Enquanto o quociente for >=2 ele vai fazer a divisão
        resto = quociente%2; // Acha o resto da divisao, sempre sera o zero ou 1
        quociente = quociente/2; // Acha o novo quociente e guarda na propria variavel quociente

        resultado[posicao]=resto; // guarda o resto na posicao


        posicao++; //Acrescenta uma nova posicao a ser guardada
    }

    resultado[posicao]=quociente; // guarda o ultimo resultado na posicao

    for(int i=posicao; i>=0; i--){ //imprime o resultado invertido posicao a posicao, da direita para a esquerda
    printf("%d", resultado[i]); // imprime a posicao
    }



   return 0;

    }
