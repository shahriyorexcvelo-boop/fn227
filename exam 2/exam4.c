#include <stdio.h>
typedef struct
{
    char name[50];
    char type[50];
    int narx;
    int soni;

} car;
int main()
{
    int n = 8;
    car arr[8] = {
        {"Cobalt", "Sedan", 12500, 15},
        {"Spark", "Hatchback", 9000, 3},
        {"Gentra", "Sedan", 14000, 8},
        {"Malibu", "Sedan", 32000, 2},
        {"Tracker", "SUV", 21000, 6},
        {"Tahoe", "SUV", 80000, 4},
        {"Damas", "Van", 8500, 20},
        {"Onix", "Sedan", 16000, 12}};
    for (int i = 0; i < n - 1; i++)
    {
        for (int x = 0; x < n - 1 - i; x++)
        {
            if (arr[x].narx > arr[x + 1].narx)
            {
                int c = arr[x].narx;
                arr[x].narx = arr[x + 1].narx;
                arr[x + 1].narx = c;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i].soni >= 5)
        {
            printf("%s %s %d %d\n", arr[i].name, arr[i].type, arr[i].narx, arr[i].soni);
        }
    }
}
