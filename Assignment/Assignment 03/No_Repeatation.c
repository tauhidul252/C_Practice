#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    int fe[100001] = {0};

    for (int i = 0; i < N; i++)
    {
        int num;

        scanf("%d", &num);
        fe[num]++;
    }

    int count = 0;

    for (int i = 1; i <= 100000; i++)
    {
        if (fe[i] == 1)
        {
            count++;
        }
    }



    printf("%d\n", count);



    return 0;
    
}