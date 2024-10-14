#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &A[i]);
    }

    int X;
    scanf("%d", &X);

    for (int i = 1; i <= N; i++)
    {
        if (i == X)
        {
            if (A[i] == 0)
            {
               printf("1 ");
            }
            else if (A[i] == 1)
            {
                printf("0 ");
            }
        }
        else
           printf("%d ",A[i]);


    }
    
        
     return 0;
}