#include<stdio.h>

int a[100000],b[100000];

int main(){
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }


    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }

  printf("\n");


    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",b[i]);
    }
    



    return 0;
}