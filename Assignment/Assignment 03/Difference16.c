#include <stdio.h>

int main() {
    int A, B;                   
    int *p1 = &A;
    int *p2 = &B;

    scanf("%d %d", p1, p2);

    int M;

    if (*p1 > *p2) 
    {
        M = *p1 - *p2;
    } 
    
    else 
    {
        M = *p2 - *p1;
    }

    printf("%d\n", M);

    return 0;
}