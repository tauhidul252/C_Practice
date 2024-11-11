#include <stdio.h>

int I[100][100];

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);
    
    if (M == N)
    {

       

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                scanf("%d", &I[i][j]);
            }
        }

        int flage = 1;

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (i == j || j == M - i - 1)
                {
                    if (I[i][j] != 1)
                    {
                        flage = 0;
                        break;
                    }
                }
                else
                {
                    if (I[i][j] != 0)
                    {
                        flage = 0;
                        break;
                    }
                }
            }

            if (!I)
            {
                break;
            }
        }

        if (flage == 1)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    else
    {
        printf("NO");
    }
    return 0;
}