def mergeSort(array):
    if len(array) > 1:

        #  mid is the point where the array is divided into two subarrays
        mid = len(array)//2
        L = array[:mid]
        R = array[mid:]

        # Sort the two halves
        mergeSort(L)
        mergeSort(R)

        i = j = k = 0

        # Until we reach either end of either L or M, pick larger among
        # elements L and M and place them in the correct position at A[p..mid]
        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                array[k] = L[i]
                i += 1
            else:
                array[k] = R[j]
                j += 1
            k += 1

        # When we run out of elements in either L or R, pick up the remaining elements and put in A[p..mid]
        while i < len(L):
            array[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            array[k] = R[j]
            j += 1
            k += 1


# Print the array
def printList(array):
    for i in range(len(array)):
        print(array[i], end=" ")
    print()


array = [6, 5, 12, 10, 9, 1]
mergeSort(array)

print("Sorted array is: ")
printList(array)