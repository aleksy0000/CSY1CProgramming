
def power(x,y):
    ans=x
    i = 1
    if y==1:
        return 1
    else:
        while i < y:
            i = i + 1
            ans = ans * x
        return ans
    

powered = power(4,4)

print(powered)
