#include <stdio.h>
int main(){
    for (int i = 1;  i<=5; i=i+1){
        for(int j=1; j<=i; j=j+1)
        {
            printf("*");
        }
        printf("\n");
    }
}