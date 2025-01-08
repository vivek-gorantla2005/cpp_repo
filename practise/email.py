email = input("enter a email")

domainname = email[email.index("@")+1 : ]

username  = email[:email.index("@")]

print(f'domainname: {domainname} \n usernamme :  {username}')

