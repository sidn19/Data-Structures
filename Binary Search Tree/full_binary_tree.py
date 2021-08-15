class Node:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def  is_full_b_tree(root):
    if root is None:
        return True

    if root.left is None and root.right is None:
        return True

    if root.left is not None and root.right is not None:
        return is_full_b_tree(root.left) and is_full_b_tree(root.right)
    
    return False

root = Node(10)

root.left = Node(20)
root.right = Node(30)

root.left.left = Node(40)
root.left.right = Node(50)

root.right.left = Node(60)
root.right.right = Node(70)


if is_full_b_tree(root):
    print("given tree is full binary tree")
else:
    print("given tree is not full binary tree")
