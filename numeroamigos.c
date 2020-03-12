#include <stdio.h>
#include <stdlib.h>

//funcao amigos
int amigos(int a, int b) {
//implementar, verificar se os numero sao amigos:
//retornar 1 se forem amigos ou 0 se nao forem.

//soma dos divisores proprios de "a"
int soma_divisores_a=0;

//soma dos divisores proprios de "b"
int soma_divisores_b=0;


    printf("Numeros divisores de a\n");
    for (int i=1; i<a; i++) {
        if (a%i == 0) {//calcular se é divisor
          soma_divisores_a = soma_divisores_a+i;
          printf("\n");
          printf("%d", i);
        }
    }
    printf("\n");
    printf("Numeros divisores de b\n");
    for (int i=1; i<b; i++) {
        if (b%i == 0l) {//calcular se é divisor
          soma_divisores_b = soma_divisores_b+i;
          printf("\n");
          printf("%d", i);
        }
}

    if (soma_divisores_a == b && soma_divisores_b ==a)
        return 1;
    else
        return 0;

}


int main()
    {
     int a=0;
     int b=0;
     int eh_amigo=0;

      printf("Digite o valor do primeiro numero :");
      scanf("%d",&a);
      printf("\n");

      printf("Digite o valor do segundo numero :");
      scanf("%d",&b);
      printf("\n");

      eh_amigo = amigos(a,b);

      printf("\n");


      if (eh_amigo==1) {
        printf("Os numeros sao amigos");
      } else {
        printf("Os numeros nao sao amigos");
      }

      return 0;
}


