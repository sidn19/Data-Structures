#time complexity O(n)
#space complexity O(1)

def linear_search(data, n, ele_find):
    for i in range(0, n):
        if data[i] == ele_find:
            return i
    return -1

data = [10, 20, 3, 5, 6, 7]

ele_find = 10

n = len(data)

result = linear_search(data, n, ele_find)

if result == -1:
    print("ele not found")
else:
    print("ele found at index " + str(result))