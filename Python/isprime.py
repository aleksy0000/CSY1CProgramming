num = int(input("Enter Number"))
i = 2
prime = 1

while i <= int((num / 2)):
    if num % i == 0:
        prime = 0
    i = i + 1

if prime == 1:
    print(num, "is prime")
else:
    print(num, "is not prime")


