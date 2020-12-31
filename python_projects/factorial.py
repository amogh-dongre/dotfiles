#!/usr/bin/env python3

num = int(input("Enter a number to calculate its factorial "))
fact=1
if(num < 0):
    print("Sorry cannot calculate the factorial of a negative integer :(")
elif(num==0):
    print("the factorial of your input 0 is 1 :)")
elif(num>0):
    for i in range(1,num+1):
     fact*=i
msg=f"your input {num} has a factorial value equal to {fact}"
print(msg)
