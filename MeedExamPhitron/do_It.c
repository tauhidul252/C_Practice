#include <stdio.h>

int main(){

    int N,K;
    scanf("%d %d",&N,&K);


    if (N<=100 && K<=100)
    
    {
         for (int i = 1; i <=N; i++)
     {
        for (int j = 1; j <=K; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
     }

    }
    



   


    return 0;
}