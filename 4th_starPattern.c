#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the number 0 for trangular star pattern\n");
    printf("Enter the number 1 for reversetrangular star pattern\n");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("you choosed trangular pattern\n");
        printf("Enter the number you want the size pattern of\n");
        scanf("%d", &b);
        for (int i = 0; i < b; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (a == 1)
    {
        printf("you have choosen reverse trangular pattern\n");
        printf("Enter the number you want the size pattern of\n");
        scanf("%d", &c);
        for (int I = 0; I < c; I++)
        {
            for (int J = 0; J <= c - I - 1; J++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else
    {
        printf(" plese enter a valid input");
    }

    return 0;
}
