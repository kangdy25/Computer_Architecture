#include <stdio.h>

int main()
{
    int value = 47;

    printf("Decimal : %d \n", value);
    printf("Octal : %o \n", value);
    printf("Hexadecimal(small) : %x \n", value);
    printf("Hexadecimal(capital) : %X \n", value);

    printf("Binary: ");
    for (unsigned int i = 1<<31; i > 0; i = i / 2)
        (value & i) ? printf("1") : printf("0");

    return 0;
}

