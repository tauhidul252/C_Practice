#include <stdio.h>

int main()

{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int N;
        scanf("%d", &N);

        for (int i = 1; i <= N; i++)
        {
            printf("%d ", i);
        }

        for (int i = N - 1; i >= 1; i--)
        {
            printf("%d ", i);
        }
    

    printf("\n");
    
    }


return 0;
}