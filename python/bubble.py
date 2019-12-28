#!/usr/bin/python3

print("Enter number of elements to sort")
n = int(input())

print("Enter elements to sort as space delimited line ex. '1 4 2 3'")
v     = str(input())
vList = v.split(' ')

# Output unsorted 
print(vList)

# Bubble sort
for i in range(n):
    for j in range(0,n-i-1):
        if int(vList[j]) > int(vList[j+1]):
            vList[j], vList[j+1] = vList[j+1], vList[j]

# Output sorted
print(vList)
