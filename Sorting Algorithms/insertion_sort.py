
def insertion_sort(arr):
    for j in range(1, len(arr)):
        key = arr[j]
        i = j-1
        while i>=0 and arr[i]>key:
            arr[i+1] = arr[i]
            i -= 1
        arr[i+1] = key


arr = [3, 7, 5, 4, 8, 1, 9]
insertion_sort(arr)
print ("Sorted array is:")
for i in range(len(arr)):
    print ("{}".format(arr[i]), end = " ")