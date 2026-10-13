#include<stdio.h>
int main(){
    int i;
    int j;
    for(i=1; i<=6; i++)
    {   
       for(j=1; j<=i; j++)
    {
       printf("%d",j);
    }
       printf("\n");
    }
   
    for(i=6; i<=1; i--)
    {   
       for(j=1; j<=i; j--)
    {
       printf("%d",j);
    }
       printf("\n");
    }
    
 return 0;      
}