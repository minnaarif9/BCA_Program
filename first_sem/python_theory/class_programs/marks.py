#global variable
rollno=0
name=''
sub1_mark,sub2_mark,sub3_mark0  #sir 
#function to read the data     
def read_data():
  global sub1_mark,sub2_mark,sub3_mark
  name=input("enter your name:")
 #reads  the 'str'typedata from keyboard
  sub1_mark=input("enter first subject mark")
#convert into int
  sub1_mark=int(sub1_mark)
  sub2_mark=input("enter second subject mark")
#convert into int
  sub2_mark=int(sub2_mark)
  sub3_mark=input("enter third subject mark")
 #convert into int
  sub3_mark=int(sub3_mark)
  pass                                 #sir
  rollno=int(input("enter rollno"))
  m1=int(input("enter mark1"))
  m2=int(input("enter mark2"))
  m3=int(input("enter mark3"))
  total=m1+m2+m3
  average = total/3
  percentage=(total/300)/100
  print("enter rollno",rollno)
  print(" enter mark1", m1)
  print("enter mark2" ,m2)
  print("enter mark3", m3)
  pass
#to calculate totalmark
  def gettotal():
   global sum
   sum=sub1_mark + sub2_mark
   pass

#To calculate average mark in 3subject
  def getaverage():
   print(sum)
   pass


#to determine studentgrade
  def findgrade():
   if percentage>=80:
    print("distinction")
   elif percentage>=70:
    print("firstclass")
   elif percentage>=50:
    print("secondclass")
   elif percentage>=30:
    print("thirdclass") 
    pass
   
#to display student result
  def displaystudent():

   print("enter total marks",total)
   print("enter average",average)
   print("enter percentage",percentage)
   pass
  

  
     
