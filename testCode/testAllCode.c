#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    if (N != M)
    {
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int Input;
            scanf("%d", &Input);

            if ((i == j || i + j == N - 1))
            {
                if (Input != 1)
                {
                    printf("NO\n");
                    return 0;
                }
            }
            else
            {
                if (Input != 0)
                {

                    printf("NO\n");
                    return 0;
                }
            }
        }
    }

    printf("YES\n");


    return 0;


}
