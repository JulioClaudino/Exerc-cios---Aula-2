#include <stdio.h>
#include <math.h>

int main(void) 
{
    float hipotenusa,cateto1,cateto2 = 0.0;

    printf("Informe o tamanho do primeiro cateto ");
    scanf("%f",&cateto1);

    printf("Informe o tamanho do segundo cateto ");
    scanf("%f",&cateto2);

    hipotenusa = sqrt( cateto1*cateto1 + cateto2*cateto2);
    printf("O valor da hipotenusa é %4.2f \n",hipotenusa);

    system("PAUSE");
    return 0;
}