#include<stdio.h> 
int main(){
     int n,category; 
     int regular = 0,premium = 0,recliner = 0;
     int total = 0, final;
     printf("enter number of tickets: ");
     scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            printf("enter category for ticket %d (1/2/3): ", i);
            scanf("%d" , &category);

        if  (category == 1){
          total = total + 150;
          regular = regular + 1;
        }  
        else if  (category == 2){
          total = total + 250;
          premium = premium + 1;
        }
        else if  (category == 3) {
          total = total + 400;
          recliner = recliner + 1;
        } 
    }     
    printf("\n--- final bill ---\n");
    printf("regular tickets: %d\n", regular);
    printf("premium tickets: %d\n", premium);
    printf("recliner tickets: %d\n", recliner);
    printf("total (before discount): %d\n", total);

        if (n >= 5) {
           final =  total - (total * 10/100);
           printf("discount applied: yes\n");
        }   
        else {
            final = total;
            printf("discount applied: no\n");
        }
        printf("final amount: %d\n", final);
        return 0;
}         
