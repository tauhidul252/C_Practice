#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);
    
    int Count_0=0, Count_1=0;

    for (int i = 1; i <=N; i++)
    {
        int a;
        scanf("%d", &a);

        if (a==0)
        {
            Count_0++;
        }
        
        else if (a==1)
        {
            Count_1++;
        }
        

        
    }
    printf("%d %d",Count_0, Count_1);


    return 0;
}