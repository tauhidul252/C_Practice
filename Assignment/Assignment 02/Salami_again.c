#include <stdio.h>
#include <limits.h>

int main(){

    int N;
    scanf("%d", &N);

 int A[N];

    for (int i = 1; i <=N; i++)
    {
        scanf("%d", &A[i]);

    }

 int  max = INT_MIN;

    for (int i = 1; i <=N; i++)
    {
        if (A[i]>max)
        {
            max = A[i];
            
        }

        
    }

    for (int i = 1; i <=N; i++)
    {
        
        printf("%d ", max - A[i]);
        
    }




    return 0;
}