#include <stdio.h>

int main()
{
    int n;
    printf("Nechta son kiritasan? ");
    scanf("%d", &n);

    int sonlar[n]; // Barcha sonlarni saqlash uchun massiv

    // 1-SIKL: Barcha sonlarni birin-ketin kiritib olish
    for (int i = 0; i < n; i++)
    {
        printf("%d-chi sonni kiriting: ", i + 1);
        scanf("%d", &sonlar[i]);
    }

    // 2-SIKL: Hamma son kiritib bo'lingach, faqat musbatlarini chiqarish
    printf("\nKiritilgan musbat sonlar:\n");
    for (int i = 0; i < n; i++)
    {
        if (sonlar[i] > 0)
        {
            printf("%d ", sonlar[i]);
        }
    }
    printf("\n");

    return 0;
}