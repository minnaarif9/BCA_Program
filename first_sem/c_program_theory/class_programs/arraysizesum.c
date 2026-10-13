#include<stdio.h>
    
 int read_array_size(){
    int size;//local variable
    printf("enter the size of the array:[>4] ");
    scanf("%d",&size); //reading array and defining
    return size; //returning something asked in q.            
}
 int validate_array_size(int array_size){
       if(array_size >5){
           return 1;
       }
       return 0;       

    }
int main(){
    int isvalid =1;
    int arraysize=0;
     //calling method & stores returned value
     //passing arraysize; int array_size=arraysiz
   while(isvalid==1){  

      int arraysize=read_array_size();
      int validated=validate_array_size(arraysize);
      if (validated == 1){
      break;

     }
      printf("arraysize is not valid..pls try again later");
      }
    int myarray[arraysize];  
    for (int i=0;i<=arraysize;i++){
         
    }
    
