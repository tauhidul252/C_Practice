#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    if (N == M)
    {
        int I[N][M];
        int flage = 1;

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {


                scanf("%d", &I[i][j]);
                

                if ((i == j || i + j == N - 1))
                {
                    if (I[i][j] != 1)
                    {
                        flage = 0;
                    }
                }


                else
                {
                    if (I[i][j] != 0)
                    {
                        flage = 0;
                    }
                }
            }
        }


        if (flage)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    else
    {
        printf("NO");
    }


    return 0;

}
