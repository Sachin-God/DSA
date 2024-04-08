class Stack:
    def __init__(self):
        self.list = []
    
    # def __str__(self):
    #     values = self.list.reverse() #This line attempts to reverse the order of elements in the self.list attribute of the Stack object. However, the reverse() method in Python does not return the reversed list; instead, it reverses the list in place and returns None. So, values ends up being assigned None.
    #     values = [str(x) for x in self.list]
    #     return '\n'.join(values)

    def __str__(self):
        values = self.list.copy()  # Copy the list to avoid modifying the original
        values.reverse()  # Reverse the copied list
        return '\n'.join(str(x) for x in values)  # Convert each element to a string and join with newline
    
    def isEmpty(self):
        if self.list == []:
            return True
        return False
    
    def push(self, value):
        self.list.append(value)

    def pop(self):
        if not self.isEmpty():
            self.list.pop()
        else:
            return 'Empty Stack'
        
    def peek(self):
        if self.isEmpty():
            return 'Empty Stack'
        return self.list[len(self.list) - 1]
    
    def delete(self):
        self.list = []
    
new = Stack()
new.push(3)
new.push(4)
new.push(5)
new.isEmpty()
print(new.peek())