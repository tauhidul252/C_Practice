#include <stdio.h>


int main(){

    int N;

    scanf("%d",&N);
    int a[N];

    for (int i = 1; i <=N; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 1; i <=N; i++)
    {
        if (a[i] <1)
        {
            printf("Entry-level candidate\n");
        }
        
        else if (1 <= a[i] && a[i] <= 3)
        {
            printf("Junior candidate\n");
        }
        
        else if (4 <= a[i] && a[i] <= 7)
        {
            printf("Mid-level candidate\n");
        }

        else// if (7<a[i] && a[i] <= 20)
        
        {
            printf("Senior candidate\n");
        }
    }
    
    



    return 0;
}