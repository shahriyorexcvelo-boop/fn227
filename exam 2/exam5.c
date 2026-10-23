#include <stdio.h>
int main()
{
    int sum = 0, sum1 = 0;
    int arr[10] = {10, 5, 4, 1, 2, 20, 8, 2, 5, 3};
    for (int i = 0; i < 5; i++)
    {

        sum += arr[i];
    }

    for (int i = 5; i < 10; i++)
    {

        sum1 += arr[i];
    }

    int natija = (sum1 - sum);
    printf("chap tomon %d\n", sum);
    printf("ong tomon %d\n", sum1);
    printf("Farq %d ga teng", natija);
}