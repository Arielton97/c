#include <stdio.h>
#include <stdlib.h>

// CASTING
// abs() é uma função da lib <stdlib>. É para definir o número absoluto

int main()
{
    int a = abs(3);
    int b = abs(-3);

    int c = abs(a * b);

    printf("%d %d %d\n", a, b, c);
    
}