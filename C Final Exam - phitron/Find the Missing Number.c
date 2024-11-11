#include <stdio.h>

long long int M, A, B, C;

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long int ABC_Multiply = A * B * C;

        if (ABC_Multiply != 0 && M % ABC_Multiply == 0)
        {
            printf("%lld\n", M / ABC_Multiply);
        }


        else if (M == 0)
        {
            printf("0\n");
        }


        else
        {
            printf("-1\n");
        }




    }

    

    return 0;



}
