#include <stdio.h>
int main()
{
    char a, b;
    printf("Harf kirgizin ");
    scanf("%c", &a);
    b = a + 5;
    printf("'%c'->%d\n", a, a);
    printf("%d+5=%d\n", a, b);
    printf("Javob->%c ", b);
}