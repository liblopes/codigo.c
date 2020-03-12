#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0, n=0;
    int divisores =0;

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    divisores = mdc(m,n);


  return 0;
}

int mdc (int m, int n)
{
    int maximo =0;
    int i, j;

    if(n == 0)
        maximo = m;


    for(i=1; i<=m; i++){

        for(j=1; j<=n; j++)

            if(m%i == 0)
                printf("%d", i);
            if(n%j == 0)
                printf("%d", j);

        maximo = i*j+maximo;
    }

    return 0;
}
