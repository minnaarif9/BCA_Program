//if else

//program to determine wheather given no is below 100 or not
#include<stdio.h>
int main(){

int mynumber;
int checknumber=100;

 printf("enter any number");  //prints at terminal
 scanf("%d",&mynumber);  //reads an integer from keyboard and stores it in my number

 if (mynumber>100){ //if blocks execute whenever condition return true
    //output string:500 is greater then 100
    printf("%d greater than %d",mynumber, checknumber);         
 }
 else{
   printf("%d greater than %d",mynumber, checknumber);  
      