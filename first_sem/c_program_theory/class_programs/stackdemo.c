#include<stdio.h>  //in order to perform standard input out function = printf & scanf

//method definition 
void push(int newdata,int size){
     if(top=size -1)

}


int main()
{
    int size=5;
    //declares an with size 5
    int stack[size];
    int option=0;
    int mydata;
    int top=-1; //to represent stack top. initially contains '-1' 
    do{
        printf("1.enter push data");
        printf("2.enter pop data");
        printf("3.enter dispaly stack");
        printf("4.exit");
        printf("enter your choice:");
        scanf("%d",&option);
        switch(option){
            case 1:printf("enter the stack data");
            scanf("%d",&mydata);
            push(mydata);
            break;
            case 2:printf("enter"); 
            scanf("%d",mydata);
            pop(mydata);
            break;
            case 3: printf("enter"); 
            scanf("%d",mydata);
            displaystack(mydata);
            break;
            case 4:printf("enter"); 
            scanf("%d",mydata);
            exit(mydata);
            break;
        }
    
}while (option < 4);
        

  }    











