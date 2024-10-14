#include <stdio.h>

int main(){
    char A;
    scanf("%c",&A);

    if (A<'z')
    {
       printf("%c", A=A+1);
    }

    else if (A=='z')
    {
       printf("a");
    }


    return 0;
}