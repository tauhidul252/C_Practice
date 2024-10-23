#include <stdio.h>
int main()
{

    int N;
    scanf("%d", &N);

    int a[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    int sum = 0;

    for (int i = 0; i < N; i++)
    {

        sum += a[i];
    }

    printf("%d \n", sum);

    double vag = (double)sum / N; // type casting

    printf("%lf", vag);

    return 0;
}