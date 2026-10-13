#include<stdio.h>

int main(){
    int arraysize=read_array_size(); //calling method & stores returned value
    int isvalid=validate_array_size(arraysize); //passing arraysize; int array_size=arraysize
     if (isvalid == 0) {
        printf("array size is not valid");
    
     }
       
}
//reads array size from kb
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