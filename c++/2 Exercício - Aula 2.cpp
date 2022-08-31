#include <stdio.h>
#include<stdlib.h>

int main(void) 
{
  float distancia,volume,consumo;

  printf("Distancia percorrida eh de (km): \n");
  scanf("%f", &distancia);

  printf("Volume gasto de combustivel (l): \n");
  scanf("%f", &volume);

  consumo = distancia/volume;
  
  printf("Seu consumo medio eh de: \n");
  printf("%.3f km/l\n", consumo);

  system("pause");
  return(0);
}