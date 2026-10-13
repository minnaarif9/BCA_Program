#include<stdio.h>
 int total;
 int rollno;
 int m1,m2,m3,m4,m4,m5;
 int total;
float average,cgpa; 
   void getstudentdata(){
    printf("enter rollno:");
    scanf("%d",&rollno);
    printf("marks of subject 1");
    scanf("%d",&m1);
     printf("marks of subject 2");
    scanf("%d",&m2);
     printf("marks of subject 3");
    scanf("%d",&m3);
     printf("marks of subject 4");
    scanf("%d",&m4);
     printf("marks of subject 5");
    scanf("%d",&m5);
    
    
   }
   int gettotal(){
      total=m1+m2+m3+m4+m5;
      printf("total mark:%d\n",total);
      return total;
   }

  float getaverage(){
      average=total/5;
      printf("average marks :%f\n",average);
      return average;
  }
   
   float getcgpa(){
      cgpa=average/9.5;
      printf("cgpa:%f\n",cgpa);
      return cgpa;

   }
   void displaystudentdetails(){
      printf("rollno:%d\n",rollno);
   }   

 int main(){

    getstudentdata();
    int sum=gettotal();
    float avg=getaverage();
   float CGPA= getcgpa();  
   displaystudentdetails();

   
   printf("the total is: %d",sum);
   printf("the average is: %f",avg);
   printf("the cgpa is:%f",CGPA);
   

 }