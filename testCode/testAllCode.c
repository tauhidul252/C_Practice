#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N);  // Read the number N for each test case
        
        // Print increasing sequence from 1 to N
        for (int i = 1; i <= N; i++) {
            printf("%d ", i);
        }
        
        // Print decreasing sequence from N-1 to 1
        for (int i = N - 1; i >= 1; i--) {
            printf("%d ", i);
        }
        
        printf("\n");  // Move to the next line after each test case output
    }
    
    return 0;
}
