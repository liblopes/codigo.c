#include<stdio.h>
#include <math.h>

int main (void)
{

 int binario_0, binario_1, binario_2, binario_3;
 int decimal_0, decimal_1, decimal_2, decimal_3;
 int decimal;



 printf("Digite um numero binario de ate 4 digitos:\n");
    scanf("%d", &binario_0);scanf("%d", &binario_1);scanf("%d", &binario_2);scanf("%d", &binario_3);

    decimal_0 = binario_0 * pow(2,3);
    decimal_1 = binario_1 * pow(2,2);
    decimal_2 = binario_2 * pow(2,1);
    decimal_3 = binario_3 * pow(2,0);

    decimal = decimal_0+decimal_1+decimal_2+decimal_3;


    printf("O decimal e: %d\n", decimal);





return 0;
}


