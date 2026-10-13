/*pgm to store and display 5 subject mark
for student*/
#include<stdio.h>
int main(){
    int my_marks[5];       //  integer array with size 5
    int sub_marks [5]; //declares an array 'sub_marks' with size 5 of 'int' type
        // storing data/ array initialization - array_name[index]=data/value;
      sub_marks[0]= 80; // stores  '80' in an array position whose index is '0'
      sub_marks[1]=78;
      sub_marks[2]=68;
      sub_marks[3]=58;
      sub_marks[4]=88;  //static array initialization
    //   fetch first array element from sub_marks
    printf("first subject marks: %d\n",sub_marks[0]);
    printf("second subject marks: %d\n",sub_marks[1]);
    printf("third subject marks: %d\n",sub_marks[2]);
    printf("fourth subject marks: %d\n",sub_marks[3]);
    printf("fifth subject marks: %d\n",sub_marks[4]);
    //dynamic initialization of 'my_marks'

    for (int i = 0; i<5; i++){
          printf("enter %d subject mark:[int data]",i+1);
    scanf("%d",&my_marks[i]);
  }
     
   /* printf("enter first subject mark:[int data]");
    scanf("%d\n",&my_marks[0]); //stored in first location
    printf("enter second subject mark:[int data]");
    scanf("%d\n",&my_marks[1]);
    printf("enter third subject mark:[int data]");
    scanf("%d\n",&my_marks[2]);
    printf("enter fourth subject mark:[int data]");
    scanf("%d\n",&my_marks[3]);
    printf("enter fifth subject mark:[int data]");
     scanf("%d\n",&my_marks[4]);*/
    printf("my_sub1 mark: %d\n",my_marks[0]);
    printf("my_sub2 mark: %d\n",my_marks[1]);
    printf("my_sub3 mark: %d\n",my_marks[2]);
    printf("my_sub4 mark: %d\n",my_marks[3]);
    printf("my_sub5 mark: %d\n",my_marks[4]);

    return 0;
    
    

  
    
}