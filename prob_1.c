#include <stdio.h>

int main()
{

    int T, n;
    //printf("Enter how times your you want to know your inputted number is even or ood:");
    scanf("%d", &T);
    while (T--)
    {
        //printf("Enter your number (Integer Value):");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }

    return 0;
}