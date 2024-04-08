class Stack:
    def __init__(self,maxSize):
        self.maxSize = maxSize
        self.list = []

    def __str__(self):
        values = self.list.copy()  # Copy the list to avoid modifying the original
        values.reverse()  # Reverse the copied list
        return '\n'.join(str(x) for x in values)  # Convert each element to a string and join with newline
    
    def isEmpty(self):
        if self.list == []:
            return True
        return False
    
    def isFull(self):
        if len(self.list) == self.maxSize:
            return True
        return False
    
    def push(self, value):
        if self.isFull():
            return 'Full Stack'
        else:
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