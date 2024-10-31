#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int m[n+5][n+5];
    for(int i =0; i< n; i++){
        for(int j =0;j< n ; j++){
            scanf("%d",&m[i][j]);
        }
    }

    int elimant = m[0][0];
    int flage = 1;

    for(int i = 0; i < n; i++){
        for(int j =0; j < n; j++){
            if(i==j){
                if(m[i][j] != elimant){
                    flage = 0;
                    break;
                }
                }
                else{
                    if(m[i][j] != 0){
                        flage =0;
                        break;
                    }
            }
        }
        
    }

    if(flage== 1){
        printf("scaler");
    }
    else{
        printf("No Scaler");
    }

    return 0;
}