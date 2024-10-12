#include<stdio.h>

int main(){

    for (int i=1; i<=5; i++){
        printf("%d iner \n", i);

        for (int j = 0; j <=7; j++)
        {
            printf("%d Outer \n",j);
        }
        printf(" \n");

    }

    return 0;
}
