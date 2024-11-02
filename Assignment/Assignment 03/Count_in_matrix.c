#include <stdio.h>

int main() {

    int N, M, X;

    scanf("%d %d %d", &N, &M, &X);

    int m[N][M];

    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            scanf("%d", &m[i][j]);

        }
    }

    int n[X];

    for (int i = 0; i < X; i++) 
    {
        scanf("%d", &n[i]);

    }

    for (int k = 0; k < X; k++) 
    {
        int count = 0;

        for (int i = 0; i < N; i++) 
        {
            for (int j = 0; j < M; j++) 
            {
                if ( m[i][j] == n[k] ) 
                {
                    count++;
                }
            }
        }



        printf("%d\n", count);


    }



    return 0;


}
