#!/usr/bin/env python3
class Insertion_Sort:
     i=0
     n=0
     t=0
     arr=0
     def __init__(self,i,n,ele,arr):
        self.i=i
        self.n=n
        self.arr=arr[6]
        self.t=t
     def user_input():
        n= int(input("kindly enter the number of elements to be entered into the database"))
        for i in n:
            arr[i]=int(input(f"kindly enter {n} elements"))
     def sort():
         for i in n:
             j=1
             while(j>=i):
                 if(arr[j]<arr[j-1]):
                     t=arr[j]
                     arr[j]=arr[j-1]
                     arr[j-1]=t
     def display():
         print("sorted array in ascending order ")
         for i in n:
          int(print(arr[i]))
     self = Insertion_Sort
     self.user_input()
     self.sort()
     self.display()
