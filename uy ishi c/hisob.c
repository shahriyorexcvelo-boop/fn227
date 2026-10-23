#include <stab.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// typedef struct
// {
//     char ism[50];
//     int narx;
// } market;
//============================----------------------
// typedef struct
// {
//     char ism[50];
//     char brend[50];
//     float reyting;
//     int son;
// } driver;
//============================----------------------
// typedef struct
// {
//     char ism[50];
//     char cate[50];
//     int narx;
//     int calori;
// } cafe;
//============================----------------------
// typedef struct
// {
//     char ism[50];
//     char muallif[50];
//     int yil;
//     int turi;
// } kitob;
//============================----------------------
// typedef struct
// {
//     int id;
//     char nom[50];
//     int narx;
//     bool turi;

// } hotel;
//============================----------------------
// typedef struct
// {
//     char ism[50];
//     char tarif[50];
//     int balans;
//     bool turi;
// } inter;
//============================----------------------
// typedef struct
// {
//     char ism[50];
//     int b;
//     int s;
// } kurs;
//============================----------------------
// typedef struct
// {
//     char id[50];
//     char loc[50];
//     int joy;
//     int b;

// } train;
//============================----------------------
// typedef struct {
//   char ism[50];
//   char turi[50];
//   int oy;
//   bool tur;
// } sport;
// //============================----------------------
// typedef struct {
//   char nomi[50];
//   char turi[50];
//   int narx;
//   int cheg;
// } dokon;
typedef struct
{
    char name[50];
    char surename[50];
    int age;

} test;
int main()
{
    // int n;
    // printf("nechta odam >> ");
    // scanf("%d", &n);
    // market arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d-chi Ism: ", i + 1);
    //     scanf("%s", arr[i].ism);
    //     printf("narx: ");
    //     scanf("%d", &arr[i].narx);
    // }
    // for (int i = 0; i < n + 1; i++)
    // {
    //     for (int x = 0; x < n - 1 - i; x++)
    //     {
    //         if (arr[x].narx < arr[x + 1].narx)
    //         {
    //             market c = arr[x];
    //             arr[x] = arr[x + 1];
    //             arr[x + 1] = c;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%s %d\n", arr[i].ism, arr[i].narx);
    // }
    //============================----------------------
    // int n = 10;

    // driver arr[10] = {
    //     {"Akmal", "Chevrolet Spark", 4.7, 120},
    //     {"Bekzod", "Nexia 3", 4.2, 90},
    //     {"Javohir", "Cobalt", 4.8, 250},
    //     {"Dilshod", "Lacetti", 4.5, 180},
    //     {"Farrux", "Malibu", 4.9, 300},
    //     {"Zafar", "Matiz", 4.1, 50},
    //     {"Umid", "Captiva", 4.6, 220},
    //     {"Sardor", "Spark", 4.3, 80},
    //     {"Azamat", "Nexia 2", 4.7, 150},
    //     {"Nodir", "Malibu 2", 5.0, 400}};

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int x = 0; x < n - 1 - i; x++)
    //     {
    //         if (arr[x].reyting < arr[x + 1].reyting)
    //         {
    //             driver c = arr[x];
    //             arr[x] = arr[x + 1];
    //             arr[x + 1] = c;
    //         }
    //     }
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i].reyting >= 4.5 && arr[i].son > 100)
    //     {
    //         printf("(%s) (%s) (%g) (%d)\n", arr[i].ism, arr[i].brend,
    //         arr[i].reyting, arr[i].son);
    //     }
    // }
    //============================----------------------
    // int n = 10;
    // cafe menu[10] = {
    //     {"Olivye", "Salat", 25000, 320},
    //     {"Norin", "Asosiy", 45000, 700},
    //     {"Mastava", "Sho'rva", 30000, 400},
    //     {"Lag'mon", "Asosiy", 35000, 600},
    //     {"Somsa", "Fast-food", 10000, 280},
    //     {"Shashlik", "Asosiy", 40000, 550},
    //     {"Choy", "Ichimlik", 5000, 0},
    //     {"Pitsa", "Fast-food", 55000, 480},
    //     {"Napoleon", "Shirinlik", 20000, 450},
    //     {"Tabaka", "Asosiy", 42000, 490}};
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int x = 0; x < n - 1 - i; x++)
    //     {
    //         if (menu[x].narx > menu[x + 1].narx)
    //         {
    //             cafe c = menu[x + 1];
    //             menu[x + 1] = menu[x];
    //             menu[x] = c;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (menu[i].calori <= 500)
    //     {
    //         printf("%s %s %d %d\n", menu[i].ism, menu[i].cate, menu[i].narx,
    //         menu[i].calori);
    //     }
    // }
    //============================----------------------
    // int n = 10;
    // kitob arr[10] = {
    //     {"Alkimyogar", "Paulo Coelho", 1988, 0},
    //     {"Ikki eshik orasi", "O'tkir Hoshimov", 1989, 1},
    //     {"1984", "George Orwell", 1949, 0},
    //     {"Urush va tinchlik", "Lev Tolstoy", 1869, 1},
    //     {"Harry Potter", "J.K. Rowling", 1997, 0},
    //     {"Qorako‘z Majnun", "Abdulla Qodiriy", 1926, 0},
    //     {"Shum bola", "G‘afur G‘ulom", 1936, 1},
    //     {"Otamdan qolgan dalalar", "O‘tkir Hoshimov", 1993, 0},
    //     {"Don Kixot", "Migel de Servantes", 1605, 0},
    //     {"Mehrobdan chayon", "Abdulla Qodiriy", 1929, 1}};
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int x = 0; x < n - 1 - i; x++)
    //     {
    //         if (arr[x].yil < arr[x + 1].yil)
    //         {
    //             kitob c = arr[x];
    //             arr[x] = arr[x + 1];
    //             arr[x + 1] = c;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i].turi == 0)
    //     {
    //         printf("%s %s %d %d\n", arr[i].ism, arr[i].muallif, arr[i].yil,
    //         arr[i].turi);
    //     }
    // }
    //============================----------------------
    // int n = 10;
    // hotel arr[10] = {
    //     {101, "Single", 200000, true},
    //     {102, "Double", 350000, false},
    //     {103, "Suite", 500000, true},
    //     {104, "Single", 220000, true},
    //     {105, "Double", 370000, true},
    //     {106, "Suite", 600000, false},
    //     {107, "Single", 210000, true},
    //     {108, "Double", 400000, true},
    //     {109, "Suite", 650000, true},
    //     {110, "Single", 230000, false}};
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int x = 0; x - 1 - i; x++)
    //     {
    //         if (arr[x].narx > arr[x + 1].narx)
    //         {
    //             hotel c = arr[x + 1];
    //             arr[x + 1] = arr[x];
    //             arr[x] = c;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i].turi == true)
    //     {
    //         printf("%d %s %d %d\n", arr[i].id, arr[i].nom, arr[i].narx,
    //         arr[i].turi);
    //     }
    // }
    //============================----------------------
    // int n = 10;
    // inter arr[10] = {
    //     {"Akmal", "Premium", -50000, true},
    //     {"Dilshod", "Standard", 25000, true},
    //     {"Umida", "Econom", -10000, false},
    //     {"Sardor", "Premium", -70000, true},
    //     {"Madina", "Standard", 30000, true},
    //     {"Rustam", "Econom", -20000, true},
    //     {"Zarina", "Premium", -150000, false},
    //     {"Bekzod", "Econom", 5000, true},
    //     {"Javohir", "Standard", -40000, true},
    //     {"Aziza", "Premium", -80000, true}};
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int x = 0; x < n - 1 - i; x++)
    //     {
    //         if (arr[x].balans < arr[x + 1].balans)
    //         {
    //             inter c = arr[x];
    //             arr[x] = arr[x + 1];
    //             arr[x + 1] = c;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i].balans < 0)
    //     {
    //         printf("%s %s %d %d\n", arr[i].ism, arr[i].tarif, arr[i].balans,
    //         arr[i].turi);
    //     }
    // }
    //============================----------------------
    // int n = 10;
    // kurs arr[10] = {
    //     {"Ali", 85, 120},
    //     {"Vali", 65, 80},
    //     {"Dilnoza", 90, 150},
    //     {"Sanjar", 70, 60},
    //     {"Madina", 95, 200},
    //     {"Rustam", 55, 40},
    //     {"Aziza", 75, 180},
    //     {"Jasur", 82, 130},
    //     {"Umid", 60, 90},
    //     {"Nodira", 88, 170}};
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int x = 0; x < n - 1 - i; x++)
    //     {
    //         if (arr[x].s < arr[x + 1].s)
    //         {
    //             kurs c = arr[x];
    //             arr[x] = arr[x + 1];
    //             arr[x + 1] = c;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i].b >= 70)
    //     {
    //         printf("%s %d %d\n", arr[i].ism, arr[i].b, arr[i].s);
    //     }
    // }
    //============================----------------------
    // int n = 10;
    // train arr[10] = {
    //     {"HY-101", "Moskva", 180, 20},
    //     {"HY-202", "Istanbul", 200, 0},
    //     {"HY-303", "London", 220, 15},
    //     {"HY-404", "Berlin", 150, 10},
    //     {"HY-505", "Parij", 170, 25},
    //     {"HY-606", "Dubay", 250, 0},
    //     {"HY-707", "Nyu-York", 300, 50},
    //     {"HY-808", "Seul", 210, 5},
    //     {"HY-909", "Tokio", 240, 30},
    //     {"HY-010", "Pekin", 260, 0}};
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int x = 0; x < n - 1 - i; x++)
    //     {
    //         if (arr[x].joy < arr[x + 1].joy)
    //         {
    //             train c = arr[x];
    //             arr[x] = arr[x + 1];
    //             arr[x + 1] = c;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i].b > 0)
    //     {
    //         printf("%s %s %d %d\n", arr[i].id, arr[i].loc, arr[i].joy,
    //         arr[i].b);
    //     }
    // }
    //============================----------------------
    // int n = 10;
    // sport arr[10] = {
    //     {"Akmal", "Monthly", 2, true},
    //     {"Dilnoza", "Yearly", 12, true},
    //     {"Sanjar", "Premium", 6, false},
    //     {"Umida", "Monthly", 0, true},
    //     {"Sardor", "Yearly", 8, true},
    //     {"Madina", "Premium", 10, true},
    //     {"Jasur", "Monthly", 1, false},
    //     {"Aziza", "Yearly", 5, true},
    //     {"Nodir", "Premium", 7, true},
    //     {"Rustam", "Monthly", 3, true}};
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int x = 0; x < n - 1 - i; x++)
    //     {
    //         if (arr[x].oy < arr[x + 1].oy)
    //         {
    //             sport c = arr[x];
    //             arr[x] = arr[x + 1];
    //             arr[x + 1] = c;
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i].oy > 0 && arr[i].tur == true)
    //     {
    //         printf("%s %s %d %d\n", arr[i].ism, arr[i].turi, arr[i].oy,
    //         arr[i].tur);
    //     }
    // }
    //============================----------------------
    //   int n = 10;
    //   dokon arr[10] = {{"Smartfon", "Elektronika", 3500000, 25},
    //                    {"Noutbuk", "Elektronika", 7000000, 15},
    //                    {"Kiyim", "Moda", 250000, 30},
    //                    {"Soat", "Aksessuar", 500000, 20},
    //                    {"Krossovka", "Sport", 400000, 40},
    //                    {"Televizor", "Elektronika", 5500000, 22},
    //                    {"Sumka", "Moda", 300000, 35},
    //                    {"Planshet", "Elektronika", 2800000, 18},
    //                    {"Naushnik", "Elektronika", 150000, 50},
    //                    {"Shampun", "Kosmetika", 50000, 20}};
    //   for (int i = 0; i < n - 1; i++) {
    //     for (int x = 0; x < n - 1 - i; x++) {
    //       if (arr[x].cheg < arr[x + 1].cheg) {
    //         dokon c = arr[x];
    //         arr[x] = arr[x + 1];
    //         arr[x + 1] = c;
    //       }
    //     }
    //   }
    //   for (int i = 0; i < n; i++) {
    //     if (arr[i].cheg >= 20) {
    //       printf("%s %s %d %d\n", arr[i].nomi, arr[i].turi, arr[i].narx,
    //              arr[i].cheg);
    //     }
    //   }
    int n;
    scanf("%d", &n);
    test test[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", test[i].surename);
        scanf("%s", test[i].name);
        scanf("%d", &test[i].age);
    }
    for (int i = 0; i < n; i++)
    {
        // 1. Familiyadagi barcha harflarni kattalashtiramiz
        for (int j = 0; test[i].surename[j] != '\0'; j++)
        {
            test[i].surename[j] = toupper(test[i].surename[j]);
        }

        // 2. Ismdagi barcha harflarni kattalashtiramiz
        for (int j = 0; test[i].name[j] != '\0'; j++)
        {
            test[i].name[j] = toupper(test[i].name[j]);
        }

        // 3. Ekranga chiqaramiz
        printf("%s %s %d\n", test[i].surename, test[i].name, test[i].age);
    }
}
