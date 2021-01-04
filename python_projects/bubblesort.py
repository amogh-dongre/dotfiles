#!/usr/bin/env python3
# this is a python implementation of bubblesorting an array :)
def Bubble_sorter(arr):
    for i in range(0, len(arr) - 1):
        if arr[i] < arr[i + 1]:
            temp = arr[i]
            arr[i] = arr[i + 1]
            arr[i + 1] = temp

    for i in range(0, len(arr) - 1):
        return arr[i]
