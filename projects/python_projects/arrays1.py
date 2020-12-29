#!/usr/bin/env python3
def bubblesort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


arr = [5, 3, 8, 4, 9, 12, 2, 1, 98, 16]
n = len(arr)
bubblesort(arr)
print("The Sorted array is:")
for i in range(n):
    print("%d" % arr[i], end=" ")
