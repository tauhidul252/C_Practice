#include <stdio.h>

int main()
{
    int M, N;

    scanf("%d %d", &M, &N);

    int A[101][101];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    
    for (int i = 0; i < M; i++)
    {
        int temp = A[i][0];
        A[i][0] = A[i][N - 1];
        A[i][N - 1] = temp;
    }
    

    for (int j = 0; j < N; j++)
    {
        int temp = A[0][j];
        A[0][j] = A[M - 1][j];
        A[M - 1][j] = temp;
    }
    
    

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", A[i][j]);
        }
        
        
        printf("\n");
    }

    
    
    return 0;
    
    
}