#include <stdio.h>

int main()
{

    int N;
    long long int X, Y;

    scanf("%d %lld %lld", &N, &X, &Y);

    long long int p[N];

    for (int i = 0; i < N; i++)

    {
        scanf("%lld", &p[i]);
    }

      int phoneCount = 0;

    for (int i = 0; i < N; i++)

    {
        if (X <= p[i] && p[i] <= Y)
        {
            phoneCount++;
        }
    }

    printf("%d", phoneCount);


    return 0;
}