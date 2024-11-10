#include <stdio.h>

int main()
{

    int M,N;

    scanf("%d %d",&M,&N);

    if (M!=N)
    {
        printf("NO");
       
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            int I;

            scanf("%d",&I);

            if (i == j || i + j == N - 1)
            {
                if (I != 1)
                {
                    printf("NO\n");
                    return 0;
                
                }
            }

            else
            {
                if (I != 1)
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