class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None
    
    def __iter__(self):
        currNode = self.head
        while currNode:
            yield currNode # yield currNode: The yield keyword is used to return each currNode as the next item in the iteration. This makes the __iter__ method a generator, allowing it to pause and resume execution, returning a node each time it's called
            currNode = currNode.next

class Stack:
    def __init__(self):
        self.LinkedList = LinkedList()
    
    def __str__(self):
        values = [str(x.value) for x in self.LinkedList]  #This line creates a list values by converting each element x in the linked list to a string using str(x).
        return '\n'.join(values)
    
    def isEmpty(self):
        if self.LinkedList.head is None:
            return True
        return False
    
    def push(self, value):
        node = Node(value)
        node.next = self.LinkedList.head
        self.LinkedList.head = node

    def pop(self):
        if self.isEmpty():
            return 'Empty Stack'
        else:
            temp = self.LinkedList.head.value
            self.LinkedList.head = self.LinkedList.head.next
            return temp

    def peek(self):
        if self.isEmpty():
            return 'Empty Stack'
        else:
            nodeValue = self.LinkedList.head.value
            return nodeValue
        
    def delete(self):
        self.LinkedList.head = None

new = Stack()
new.push(5)
new.push(8)
new.push(9)
print(new.peek())
new.pop()
print(new)