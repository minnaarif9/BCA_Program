raw_data = """
naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

lines = raw_data.strip().splitlines()

name = " ".join(lines[0].split()).title()
email = lines[1].lower()
phone = lines[2]

parts = name.split()
initials = parts[0][0] + parts[1][0]
domain = email.split("@")[1]

digits = phone.replace("+", "").replace("-", "")
masked = "*" * 8 + digits[-4:]

valid = "@" in email and "." in domain and len(digits) == 12

print("Name    :", name)
print("Initials:", initials)
print("Email   :", email)
print("Domain  :", domain)
print("Phone   :", masked)
print("Valid   :", valid)