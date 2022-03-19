#include <stdio.h>
#include <locale.h>

int main()
{
    // este programa é o exercicio da pag 29 do manual
    setlocale(LC_ALL,"Portuguese");
    
    printf ("Olá Mundo!\n");
    printf("sizeof(char): %d\n", sizeof(char));
    printf("sizeof(short): %d\n", sizeof(short));
    printf("sizeof(int): %d\n", sizeof(int));
    printf("sizeof(long): %d\n", sizeof(long));
    printf("sizeof(long long): %d\n", sizeof(long long));
    printf("sizeof(float): %d\n", sizeof(float));
    printf("sizeof(double): %d\n", sizeof(double));
    printf("sizeof(long double): %d\n", sizeof(long double));
}