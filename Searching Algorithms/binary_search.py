
#best - O(1)
#avg - O(log n)
#worst - O(log n)


def b_search(data, key, low, high):

    if low > high:
        return -1
    
    else:
        mid = (high - low) // 2

        if data[mid] == key:
            return mid
        elif data[mid] > key:
            return b_search(data, key, low, mid-1)
        else:
            return b_search(data, key, mid+1, high)


data = [10, 20, 30, 40, 50, 60, 70, 80]

key = 50

low = 0

high = len(data)

result = b_search(data, key, low, high)

if result != -1:
    print("element found at index " + str(result))

else:
    print("element not found")