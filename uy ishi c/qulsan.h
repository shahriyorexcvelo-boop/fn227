#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ongasur(int arr[], int n)
{
    int c = arr[n - 1];
    for (int i = arr[n - 2]; i >= 0; i--)
    {
        arr[n + 1] = arr[i];
    }
    arr[0] = c;
}
void secan(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void PrintArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // printf("%d"arr[i]);
        printf("%d", *(arr + i));
    }
}
void multiarr(int q, int u, int arr[q][u])
{
    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
        }
    }
}
void hisobla(int q, int u, int arr[q][u])
{
    int sum = 0, sum2 = 0;
    int count80 = 0;
    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
        }
    }

    int max = arr[0][0];
    int min = arr[0][0];
    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            sum += arr[i][x];
            if (arr[i][x] > max)
            {
                max = arr[i][x];
            }
            if (arr[i][x] < min)
            {
                min = arr[i][x];
            }
            if (arr[i][x] > 80)
            {
                count80++;
            }
        }
        float natija = sum / u;
        printf("%d-chi guruh: %g ortachasi\n", i + 1, natija);
    }
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("80 dan yuqori: %d\n", count80);
}
void qavat(int q, int u, int arr[q][u])
{
    int band = 0, bosh = 0;

    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
            if (arr[i][x] == 1)
            {
                band++;
            }
            if (arr[i][x] == 0)
            {
                bosh++;
            }
        }
    }
    printf("%d-band\n", band);
    printf("%d-bosh", bosh);
}
void market(int q, int u, int arr[q][u])
{
    int sum = 0, count10 = 0;

    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
        }
    }
    int max = arr[0][0];
    for (int i = 0; i < q; i++)
    {

        for (int x = 0; x < u; x++)
        {
            sum += arr[i][x];
            if (arr[i][x] > max)
            {
                max = arr[i][x];
            }
            if (arr[i][x] < 10)
            {
                count10++;
            }
        }
    }
    printf("%d-jami\n", sum);
    printf("%d-max\n", max);
    printf("%d-10 dan kam", count10);
}
void basketbol(int q, int u, int arr[q][u])
{

    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
        }
    }
    int max = arr[0][0];
    for (int i = 0; i < q; i++)
    {
        int sum = 0;
        for (int x = 0; x < u; x++)
        {
            sum += arr[i][x];
            if (arr[i][x] > max)
            {
                max = arr[i][x];
            }
        }

        printf("%d-chi oyinchi %d ball\n", i + 1, sum);
    }
    printf("%d-max\n", max);
}
void ombor(int q, int u, int arr[q][u])
{
    int sum = 0;
    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
        }
    }
    int max = arr[0][0];
    int count = 0;
    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            sum += arr[i][x];
            if (arr[i][x] > max)
            {
                max = arr[i][x];
            }
            if (arr[i][x] < 5)
            {
                count++;
            }
        }
    }
    printf("%d-jami\n", sum);
    printf("%d-max\n", max);
    printf("%d-5 dan kam", count);
}
void ish(int q, int u, int arr[q][u])
{
    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
        }
    }
    int count = 0;

    for (int i = 0; i < q; i++)
    {
        int sum = 0;

        for (int x = 0; x < u; x++)
        {
            sum += arr[i][x];
            if (arr[i][x] > 40)
            {
                count++;
            }
        }

        printf("%d-chi hodim %d soat ishladi\n", i + 1, sum);
    }
    printf("%d-40 dan kop ishlaganla\n", count);
}
void internet(int q, int u, int arr[q][u])
{
    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
        }
    }
    int sum1 = 0;
    int max = 0;
    int kun = 0;
    for (int i = 0; i < q; i++)
    {
        int sum = 0;
        for (int x = 0; x < u; x++)
        {
            sum += arr[i][x];
            sum1 += arr[i][x];
        }
        printf("%d-kun %d GB sarfland\n", i + 1, sum);
        if (sum > max)
        {
            max = sum;
            kun++;
        }
    }
    printf("%d-jami\n", sum1);
    printf("%d-kun eng kop sarifland", kun);
}
void bekat(int q, int u, int arr[q][u])
{
    for (int i = 0; i < q; i++)
    {
        int sum = 0;
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
        }
    }
    int sum1 = 0;
    int max = arr[0][0];
    int min = arr[0][0];
    int count = 0;
    for (int i = 0; i < q; i++)
    {
        int sum = 0;
        for (int x = 0; x < u; x++)
        {
            sum += arr[i][x];
            sum1 += arr[i][x];
            if (arr[i][x] > max)
            {
                max = arr[i][x];
            }
            else if (arr[i][x] < min)
            {
                min = arr[i][x];
            }
            if (arr[i][x] > 200)
            {
                count++;
            }
        }
        printf("%d-bekat %d yolovchi\n", i + 1, sum);
    }
    printf("%d-jami\n", sum1);
    printf("%d-max\n", max);
    printf("%d-min", min);
}
void spare(int q, int u, int arr[q][u])
{
    int nol = 0;
    int son = 0;
    for (int i = 0; i < q; i++)
    {
        for (int x = 0; x < u; x++)
        {
            scanf("%d", &arr[i][x]);
            if (arr[i][x] == 0)
            {
                nol++;
            }
            else
            {
                son++;
            }
        }
    }
    if (nol > son)
    {
        puts("Spare ");
    }
    else
    {
        puts("Not spare ");
    }
}
void diagonallar(int n, int arr[n][n])
{
    int diogonal = 0;
    int teskari = 0;

    for (int i = 0; i < n; i++)
    {
        diogonal += arr[i][i];
        teskari += arr[i][n - 1 - i];
    }

    printf("Output:\n");
    printf("Diogonal: %d\n", diogonal);
    printf("Teskari: %d\n", teskari);
}

void almashtir(int n, int arr[n][n])
{
    int max_i = 0, max_j = 0;
    int min_i = 0, min_j = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > arr[max_i][max_j])
            {
                max_i = i;
                max_j = j;
            }
            if (arr[i][j] < arr[min_i][min_j])
            {
                min_i = i;
                min_j = j;
            }
        }
    }

    int temp = arr[max_i][max_j];
    arr[max_i][max_j] = arr[min_i][min_j];
    arr[min_i][min_j] = temp;

    printf("Output:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
