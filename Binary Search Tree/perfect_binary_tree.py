class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def cal_depth(root):
    counter = 0
    while root is not None:
        counter += 1
        root = root.left
    return counter


def is_perfect(root,depth,level = 0):
    if root is None:
        return True

    if root.left is None and root.right is None:
        return (depth == level + 1)

    return is_perfect(root.left,depth,level + 1) and is_perfect(root.right,depth,level+1)



root = Node(10)

root.left = Node(20)
root.right = Node(30)

root.left.left = Node(40)
root.left.right = Node(50)

root.right.left = Node(60)
root.right.right = Node(70)


if (is_perfect(root,cal_depth(root))):
    print("given tree is perfect tree")
else:
    print("given tree is not perfect tree")