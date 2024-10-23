#include <stdio.h>
#include <limits.h>


int main(){

    int M;
    scanf("%d", &M);

    int arr[M];

    for (int i = 0; i < M; i++)
    {
        scanf("%d",&arr[i]);
    }

    int min=INT_MAX, max=INT_MIN;

    for (int i = 0; i < M; i++)
    {
        if (arr[i]<min)
        {
           min=arr[i];
        }
        
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
    }
    
    printf("Minimum : %d Maximum :%d", min, max);




    return 0;
}