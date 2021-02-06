#!/usr/bin/env python3

# python3 program of subtraction of
# two numbers using 2's complement .

# function to subtract two values
# using 2's complement method
def Subtract(a, b):

    # ~b is the 1's Complement of b
    # adding 1 to it make it 2's Complement
    c = a + (~b + 1)
    return c


# Driver code
if __name__ == "__main__":

    # multiple assignments
    a, b = 56, 22
    print(Subtract(a, b))

    # a, b = 9, 7
    # print(Subtract(a, b))
