#include "stdio.h"

int main(){

    int n = 5,k=0;
    for(int i=1;i<=2*n;i++){
        k+= i<=n ? 1 : i>n+1 ? -1: 0;
        for(int j=1;j<=n;j++){
            if(j<=n-k+1){
                printf("*");
            }else {
                printf(" ");
            }
        }
         for(int j=1;j<=n-k+1;j++){
            
                printf("*");
            
        }

        printf("\n");
    }
    



    return 0;
}