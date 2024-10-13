#include <stdio.h>

int main(){

    int N;
    scanf("%d",&N);
    int A[N];



    for (int i = 1; i <=N; i++)
    {
        scanf("%d",&A[i]);
    }

    int X;
    scanf("%d",&X);
    int B[X];

    for (int i = 1; i <=N; i++)
    {
       
            if (B[X]==0)
        {
            printf("1");
        }
       else if(B[X]==1){
            printf("0");
         }

         printf("%d ",A[i] );
        }
        
    
    
 printf("\n");

    
    return 0;
}