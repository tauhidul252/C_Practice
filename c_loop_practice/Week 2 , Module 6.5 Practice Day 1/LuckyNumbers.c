#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);

    int a=N%10;
    int b=N/10;

    if (10 <= 99)
    {

        if (a % b == 0 || b % a == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
        }

    

    return 0;
}