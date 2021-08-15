var = [10,20,30,40,50]

class BST:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None


    def add_data(self,data):
        
        if data == self.data:
            return

        if data < self.data:
            if self.left:
                 self.left.add_data(data)
            else:
                self.left = BST(data)
        else:
            if self.right:
                 self.right.add_data(data)
            else:
                self.right = BST(data)

    def preorder(self):
        final_list = [self.data]

        if self.left:
            final_list += (self.left.preorder())

        if self.right:
            final_list += (self.right.preorder())

        return final_list

root = BST(var[0])


for i in range(1,len(var)):
    root.add_data(var[i])


print(root.preorder())



