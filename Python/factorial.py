
def factorial(n):
    fact = 1
    i = 1
    while i <= n:
        fact = fact * i
        i = i + 1
    return fact

f = factorial(4)

print(f)

print("Hello")