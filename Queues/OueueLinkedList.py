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
    
class Queue:
    def __init__(self):
        self.linkedlist = LinkedList()

    def __str__(self):
        values = [str(x.value) for x in self.linkedlist]  #This line creates a list values by converting each element x in the linked list to a string using str(x).
        return ' '.join(values)
    
    def enqueue(self, value):
        new_node = Node(value)
        if self.linkedlist.head is None:
            self.linkedlist.head = new_node
        else:
            curr = self.linkedlist.head
            while curr.next:
                curr = curr.next
            curr.next = new_node

    def isEmpty(self):
        if self.linkedlist.head is None:
            return True
        return False

    def dequeue(self):
        if self.isEmpty():
            return 'Empty Queue'
        else:
            curr = self.linkedlist.head
            self.linkedlist.head = self.linkedlist.head.next
            curr.next = None

    def peek(self):
        if self.isEmpty():
            return 'Empty Queue'
        else:
            return self.linkedlist.head
        
    def delete(self):
        self.linkedlist.head = None

new = Queue()
new.enqueue(1)
print(new)
new.enqueue(2)
new.dequeue()
print(new)