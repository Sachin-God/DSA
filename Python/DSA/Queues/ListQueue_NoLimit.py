class Queue:
    def __init__(self):
        self.list = []

    def __str__(self):
        values = [str(x) for x in self.list]
        return ' '.join(values)
    
    def isEmpty(self):
        if self.list == []:
            return True
        return False
    
    def enqueue(self, value):
        self.list.append(value)

    def dequeue(self):
        if self.isEmpty():
            return 'Empty Queue'
        else:
            self.list.pop(0)
        
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