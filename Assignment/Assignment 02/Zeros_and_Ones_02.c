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


     if (A[X] == 0)
        {
            A[X] = 1;
        }
        
        else if(A[X] == 1)
        {
            A[X] = 0;
        }


    for (int i = 1; i <= N; i++)
    {

       
        printf("%d ", A[i]);
    }

    printf("\n");





    return 0;
}