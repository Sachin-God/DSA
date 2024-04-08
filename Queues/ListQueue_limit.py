class Queue:
    def __init__(self, size):
        self.list = [None] * size
        self.size = size
        self.start = -1
        self.top = -1

    def __str__(self):
        values = [str(x) for x in self.list]
        return ' '.join(values)
    
    def isFull(self):
        if self.top + 1 == self.start:
            return True
        elif self.start == 0 and self.top +1 == self.size:
            return True
        else:
            return False
    
    def isEmpty(self):
        if self.top == -1:
            return True
        return False
    
    def enqueue(self, value):
        if self.isFull():
            return 'Full Queue'
        else:
            if self.top + 1 == self.size:
                self.top = 0
            else:
                self.top += 1
                if self.start == -1:
                    self.start = 0
        self.list[self.top] = value

    def dequeue(self):
        if self.isEmpty():
            return 'Empty Queue'
        else:
            first = self.list[self.start]
            start = self.start
            if self.start == self.top:
                self.start = -1
                self.top = -1    
            elif self.start + 1 == self.size:
                self.start = 0
            else:
                self.start += 1
            self.list[start] = None
            return first            
        
    def peek(self):
        if self.isEmpty():
            return 'Empty Queue'
        else:
            return self.list[0]

    def delete(self):
        self.list = []

new = Queue()
new.enqueue(1)
new.enqueue(2)
new.enqueue(3)
print(new)
new.dequeue()
print(new)
print(new.peek())
new.delete()
print(new)