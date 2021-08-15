class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

class CalHight:
    def __init__(self):
        self.hight = 0


def is_balanced(root,calHight):
    left_hight = CalHight()
    right_hight = CalHight()
    # print(left_hight.hight)
    if root is None:
        return True

    left = is_balanced(root.left,left_hight)
    right = is_balanced(root.right,right_hight)

    
    calHight.hight = max(left_hight.hight,right_hight.hight) + 1

    print(calHight.hight)

    if abs(left_hight.hight - right_hight.hight) <= 1:
        return left and right

    return False

root = Node(1)

root.left = Node(2)
root.right = Node(3)

root.left.left = Node(4)
root.left.right = Node(5)

root.left.right.left = Node(6) #commenting this will give true

calHight = CalHight()

print(is_balanced(root,calHight))
