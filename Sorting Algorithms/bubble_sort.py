def bubbleSort(arr):
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1):
            if(arr[j] > arr[j+1]):
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp

arr = [3, 7, 5, 4, 8, 1, 9]
bubbleSort(arr)
print ("Sorted array is:")
for i in range(len(arr)):
    print ("{}".format(arr[i]), end = " ")