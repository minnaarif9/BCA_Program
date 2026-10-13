#include<stdio.h>
int main(){
    int firstnumber;
    int secondnumber;
    int choice;
    int result;
do
{    
printf("----welcome to my calculator---\n");
printf("1.addition\n");
printf("2.substraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("5.exit\n");
printf("enter your choice: ");
scanf("%d",&choice);
printf("enter the firstnumber:");
scanf("%d",&firstnumber);
printf("enter the secondnumber");
scanf("%d",&secondnumber);
if (choice==1)
{
    result=firstnumber+secondnumber;
    printf("the difference between %d and %d is %d\n",firstnumber,secondnumber,result);/* code */
}
else if (choice==2)
{
    result=firstnumber-secondnumber;
    printf("the difference between %d and %d is %d\n",firstnumber,secondnumber,result);/* code */
}
else if (choice==3)
{
    result=firstnumber*secondnumber;
    printf("the difference between %d and %d is %d\n",firstnumber,secondnumber,result);/* code */
}
else if (choice==4)
{
    result=firstnumber/secondnumber;
    printf("the difference between %d and %d is %d\n",firstnumber,secondnumber,result);/* code */
}
else
{
printf("not defined\n");
}
printf("----end--\n");
}while(choice==5);
return 0;
}
