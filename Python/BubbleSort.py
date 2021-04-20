def bubbleSort(arr,n):
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]
arr = [5,4,8,2,1,7,6,10,3]
print("Before Sort: ")
for x in range(len(arr)):
    print(arr[x])
bubbleSort(arr,len(arr))
print("After Sort: ")
for x in range(len(arr)):
    print(arr[x])