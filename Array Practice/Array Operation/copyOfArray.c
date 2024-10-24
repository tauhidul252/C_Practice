#include <stdio.h>

int a[100000],b[100000];

int main(){

    int lenth=0 , lenth2=0;
    scanf("%d",&lenth);


    for (int i = 0; i <lenth; i++)
    {
        scanf("%d",&a[i]);
    }

    for (int i = 0; i <lenth; i++)
    {
        printf("%d ",a[i]);

    }

    printf("\n");

    for (int i = 0; i <lenth; i++)
    {
        printf("%d ",b[i]);

    }
    
    //copy array

    for (int i = 0; i < lenth; i++)
    {
        b[i]=a[i];  
    }

    //a[2]=100;

      printf("\n \n");
    
    for (int i = 0; i <lenth; i++)
    {
        printf("%d ",a[i]);

    }
   // b[2]=100; // array valu changes using index number

    lenth2=lenth;

    printf("\n");

    for (int i = 0; i <lenth2; i++)
    {
        printf("%d ",b[i]);

    }
    
  


    return 0;
}