#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    
    printf("Digite o caractere: ");
    scanf("%c", &ch);
    
    printf("Formato decimal: %i\nFormato hexadecimal: 0X%x", ch, ch);
    
    system("pause");
    return(0);
}