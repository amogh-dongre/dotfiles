#!/usr/bin/env python3
# this is a python implementation of  finding the largest number
from bubblesort import *

arr = []
print("Enter the numbers to be added to the list ")
for i in range(0, 9):
    ele = int(input())
    arr.append(ele)

for i in range(0, 9):
    arr.Bubble_sorter()
result = arr[len(arr) - 1]
print(f"the largest number in the list of inputed values is {result}")
