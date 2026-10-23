#include <stdio.h>
#include <string.h>

int main()
{
    char email[50];

    printf("Emailingizni kiriting: ");
    scanf("%s", email);

    if (strstr(email, "@mail.ru"))
    {
        printf("RUSSIA");
    }
    else if (strstr(email, "@yahoo.com"))
    {
        printf("USA");
    }
    else
    {
        printf("Boshqa ");
    }
}
