#include <stdio.h>

int main()
{

    int N;
    long long int T;

    scanf("%d %lld", &N, &T);

    int time[N];
    for (int i = 0; i <= N; i++)
    {
        scanf("%d", &time[i]);
    }

    int count = 0;
    long long int timeCount = 0;

    for (int i = 0; i < N; i++)
    {

        timeCount += time[i];

        if (timeCount <= T)
        {
            
            count++;
        }
        else
        {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}