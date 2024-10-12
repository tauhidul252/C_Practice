#include <stdio.h>
 int main(){

/*
    for (int i = 1; i < 6; i++)
    {

        for (int j = 1; j <=10; j++)
        {
             printf("%d * %d = %d \n",i,j, j*i);
        }

        printf("\n");
        
    }
    */


    int A;
    scanf("%d",&A);


  for (int i = 1; i <=A; i++)
  {
    for (int j = 1; j <=5; j++)
    {
        printf("%d * %d = %d \n", i, j, i*j);
    }
    printf("\n\n");

  }
    


    return 0;
 }