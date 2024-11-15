import random

a = int(input("Enter start of range"))
b = int(input("Enter end of range"))

c = random.randint(a,b)
print(c)

d = int(input("Geuss the number"))

while d != c:
    if d < c:
        print("Too Low!")
    elif d > c:
        print("Too High!")
    else:
        print("No!")

    d = int(input("try again. Guess the number:"))

print("You geussed correct!")