#include<stdio.h>
//get_array_sum()definition
// int number[]=mynumber
   int get_array_sum(int number[]){
    int i,total=0;
    for(int i=0;i<5;i++)
    {
        total=total+number[i];
        printf("the sum is %d\n",total);
    
    
}
    return total;

}  

 

int main(){ 
    int mynumber[5];
   //array intialization  
     for(int i=0;i<5;i++){
     printf("enter the %d number:",i+1);
     scanf("%d,",&mynumber[i]);
}
//calculate the sum and returns susm
int sum=get_array_sum(mynumber);
printf("the sum is %d",sum);

}


