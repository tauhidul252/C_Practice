#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;


    scanf("%d", &N);

    int *arr = (int *)malloc(1 * sizeof(int));

    for (int i = 0; i < N; i++)
    {
        int n;
        scanf("%d", &n);
        arr = (int *)realloc(arr,(i+1) * sizeof(int));
        arr[i]=n;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d", arr[i]);

        if (i < N - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    free(arr);



    return 0;



}
