divisor = int(input("Enter Divisor"))
Hdigit = int(input("Enter Highest Digit"))
Mdigit = int(input("Enter Middle Digit"))
Sdigit = int(input("Enter Smallest Digit"))

print("You have entered:\n")
print(divisor,"/",Hdigit,Mdigit,Sdigit,"\n")



if Hdigit < divisor:
    HQ = 0
    rem = Hdigit * 10
else:
    HQ = Hdigit / divisor
    rem = (Hdigit % divisor) * 10

Mdigit = (Mdigit + rem)

if Mdigit < divisor:
    MQ = 0
    rem = Mdigit * 10
else:
    MQ = Mdigit / divisor
    rem = (Mdigit % divisor) * 10

Sdigit = (Sdigit + rem)

if Sdigit < divisor:
    SQ = 0
    rem = Sdigit
else:
    SQ = Sdigit / divisor
    rem = Sdigit % divisor

print("=",int(HQ),int(MQ),int(SQ),"rem=",rem)