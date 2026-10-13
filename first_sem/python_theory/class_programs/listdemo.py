marks = ['sachin',50,55,60,65,70]
 # declares an list 'marks' to store marks of 'sachin's
my_mark=[]
#dynamic initialization
for number in range(5):
    newmark=int(input("enter the mark: "))
    my_mark.append(newmark)
    
print("list elements are:")
for i in range(len(my_mark)):
 print(""the",i=1,"element is", myMARK[i]")