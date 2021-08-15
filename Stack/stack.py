class Stack:
    def __init__(self):
        self.stack = []
    
    def push(self, data):
        self.stack.append(data)
        return True
    
    def pop(self):
        return self.stack.pop()
    
    def peek(self):
        return self.stack[-1]
    
    def is_empty(self):
        return len(self.stack) == 0
    

st = Stack()

## checking is_empty method -> true
print(st.is_empty())

## pushing the elements
st.push(1)
st.push(2)
st.push(3)
st.push(4)
st.push(5)

## again checking is_empty method -> false
print(st.is_empty())

## printing the topmost element of the stack -> 5
print(st.peek())

## popping the topmost element -> 5
st.pop()

## checking the topmost element using peek method -> 4
print(st.peek())

## popping all the elements
st.pop()
st.pop() 
st.pop() 
st.pop() 

## checking the is_empty method for the last time -> true
print(st.is_empty())