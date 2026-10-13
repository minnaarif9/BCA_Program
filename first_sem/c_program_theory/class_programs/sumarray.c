#include<stdio.h>
int i;
int read_array_size()
{
    int size; //local variable
    printf("enter array size >4:");
    scanf("%d",&size); 
    return size;
}
int validate_array_size(int size)
{
    if (size<4)
    {
        printf("array invalid.re-enter the value");
        scanf("%d",&size);
        return 0; //invalid
    }  
    return 1;//valid
}
void get_elements(int array[],int size)
{
    int i;
    for(i=0;i<=size;i++){
        if (i==0){
            printf("enter 1 array element:");    
        }
        else{
            printf("enter the %d array element",i+1);
        }
        scanf("%d",&array[i]);
    }   
    
}
int sum_array(int array[i],int size)
{
    int i,total=0;
    for(i=0;i<size;i++){
    total=total+array[i];
    printf("the sum is:%d",total);
    }
    return total;
}
int main(){
    int isvalid=1;
    
    while(isvalid==1)
    {
        int arraysize=read_array_size();
        int validated=validate_array_size(arraysize);
        if(validated==1){
            break;
        }
    }

    int read_array_size();
    int validate_array_size(int size);
    void get_elements(int *array, int size);
    int sum_array(int *array,int size);
    

}