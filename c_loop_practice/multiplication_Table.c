#include <stdio.h>
 int main(){

    for (int i = 1; i < 6; i++)
    {

        for (int j = 1; j <=10; j++)
        {
             printf("%d * %d = %d \n",i,j, j*i);
        }

        printf("\n");
        
    }
    


    return 0;
 }