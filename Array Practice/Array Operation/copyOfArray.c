#include <stdio.h>

int a[100000],b[100000];

int main(){

    int lenth=0;
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

      printf("\n \n");
    
    for (int i = 0; i <lenth; i++)
    {
        printf("%d ",a[i]);

    }

    printf("\n");

    for (int i = 0; i <lenth; i++)
    {
        printf("%d ",b[i]);

    }
    
  


    return 0;
}