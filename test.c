#include <stdio.h>


int main()
{
    int N,count=0;
    scanf("%d", &N);

    for (int i = 2; i <=N; i+=2)
    {
        count+=i;
    }
    

    

    printf("%d", count);


    return 0;


}
