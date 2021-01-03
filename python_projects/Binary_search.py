#!/usr/bin/env python3
# This is the python implementation of Binary search
def Binary_searcher(arr, l, f, num):
    while f <= l:
        mid_index = (l + f) / 2
        if num == arr[mid_index]:
            return mid_index
        elif num < arr[mid_index]:
            f = mid_index + 1
        else:
            l = mid_index - 1
    return -1


arr = []
print("Enter 10 number to be added into the array")
for i in range(0, 9, 1):
    ele = int(input())
    arr.append(ele)
print("Enter a number to be searched in the array")
num = int(input())
result = Binary_searcher(arr, 0, len(arr) - 1, num)
if result != -1:
    print(f"the value is present at index {result}")
else:
    print("the value you entered is not present")
