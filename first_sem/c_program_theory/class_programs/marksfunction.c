#include<stdio.h>
 int total;
 float average,cgpa;
 int rollno;
 int m1,m2,m3,m4,m4,m5;
   void getstudentdata(){
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
   void gettotal(){
      total=m1+m2+m3+m4+m5;
      printf("total mark:%d\n",total);
   }

  void getaverage(){
      average=total/5;
      printf("average marks :%f\n",average);
  }
   
   void getcgpa(){
      cgpa=average/9.5;
      printf("cgpa:%f\n",cgpa);

   }
   void displaystudentdetails(){
      printf("rollno:%d\n",rollno);
   }   

 int main(){

    getstudentdata();
    gettotal();
    getaverage();
    getcgpa();  
   displaystudentdetails();
 }