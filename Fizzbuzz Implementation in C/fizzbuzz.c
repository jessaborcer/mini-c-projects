#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int i, n;

    printf("\nEnter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 15 == 0)
        {
            printf("{FIZZBUZZ}\n");
        }

        else if (i % 5 == 0)
        {
            printf("{FIZZ}\n");
        }
        else if (i % 3 == 0)
        {
            printf("{BUZZ}\n");
        }
        else
            printf("%d\n", i);
    }

    return 0;
}
