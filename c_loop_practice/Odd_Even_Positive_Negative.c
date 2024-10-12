#include <stdio.h>

int main()
{
    printf("Give Me The Number : ");
    int n;
    scanf("%d", &n);

    int EvCount = 0, oddCount = 0, poCount = 0, Necount = 0;

    for (int i = 1; i <= n; i++)
    {

        int x;
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            EvCount++;
        }
        else
        {
            oddCount++;
        }

        if (x > 0)
        {
            poCount++;
        }
        else if (x < 0)
        {
            Necount++;
        }
    }

    printf("EvCount %d\n", EvCount);
    printf("oddCount %d\n", oddCount);
    printf("poCount %d\n", poCount);
    printf("Necount %d\n", Necount);

    return 0;
}

//6.4 no video