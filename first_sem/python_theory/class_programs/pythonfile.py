# single student data with name, roll, mobile ,email , 5 subj mark and get the subject total.
# must be implemented using nested list
#process a single student data
# name,roll no, phone no,email,5 subject mark and get the subject total 
# must be implemented using nested list
student_data = []
student_list = []
def read_data():
    name=input("Enter name: ")
    rollno=int(input("Enter roll no:"))
    phone=input("Enter phone no:")
    email=input("Enter email:")

    marks = []
    marks.append(int(input("Enter first subject mark: ")))
    marks.append(int(input("Enter second subject mark: ")))
    marks.append(int(input("Enter third subject mark: ")))
    marks.append(int(input("Enter fourth subject mark: ")))
    marks.append(int(input("Enter fifth subject mark: ")))
    student_data.append([ rollno, phone, email, marks])
    print("student data= ",student_data)
def calculate_data():
    total=sum(student_data[0][4])
    print("TOTAL:",total)
    
    
    
read_data()
calculate_data()
