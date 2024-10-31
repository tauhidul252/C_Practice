#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);

    int matrix[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
            
        }
    }

    int isMatrix = 1; 

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            { 
                if (matrix[i][j] != 1)
                {
                    isMatrix = 0; 
                    break;
                    
                }
            }

            else
            { 
                if (matrix[i][j] != 0)
                {
                    isMatrix = 0; 
                    break;
                    
                }
            }
        }


       if(isMatrix == 0)
       {
             break;
        } 
    }

    if (isMatrix)
    {
        printf("YES\n");
    }

    
    else
    {
        printf("NO\n");
    }




    return 0;
}
