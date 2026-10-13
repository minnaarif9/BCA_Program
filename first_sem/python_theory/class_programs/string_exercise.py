#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.COM
+91-98765-43210"""

name,email,phone,=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3],

name=name.strip().replace('  ',' ').title()
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
email=email.lower()
phone=phone.replace('-','','+4')
valid=value.true



print("==============================")
print(" PROFILE CARD")
print("==============================")
print("Name: ", name)
print("Initials: ",initials)
print("email: ",email)
print("Phone: ", phone)
print("valid: ",valid)
print("==============================")