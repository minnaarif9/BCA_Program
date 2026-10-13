#include<stdio.h>
int main(){
    for(int j=0;j<=5;j++){
        printf("loop started");
        for(int i=0;i<5;i++){
            printf("from inside the loop\n");
            break;
            printf("from inner loop\n");

        }   
        printf("from outer loop\n");
        break;

    }  
    printf("program terminated..");
}    