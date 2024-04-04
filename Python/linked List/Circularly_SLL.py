class Node:
    def __init__(self,value):
        self.value = value
        self.next = None

class CSLL:
    def __init__(self):
        self.head = None
        self.tail = None
        self.length = 0

    def __str__(self):
        result = ''
        temp = self.head
        while temp:
            result += str(temp.value)
            if temp.next:
                result += ' -> '
            temp = temp.next
        return result
    
    def append(self,value):
        new_node = Node(value)
        if self.length == 0:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            self.tail = new_node
        new_node.next = self.head
        self.length += 1        
        return 'Success append'
    
    def prepend(self,value):
        new_node = Node(value)
        if self.length == 0:
            self.head = new_node
            self.tail = new_node
            new_node.next = new_node
        else:
            new_node.next = self.head
            self.head = new_node
            self.tail.next = new_node

        self.length += 1        
        return 'Success Prepend'
    
    def insert(self,index,value):
        new_node = Node(value)
        if index >= self.length or index < -1:
            return 'Check Index'
        elif index == 0:
            self.prepend(value)
        elif index == -1 or index == self.length - 1:
            self.append(value)
        else:
            temp = self.head
            for _ in range(index - 1):
                temp = temp.next
            new_node.next = temp.next
            temp.next = new_node
            
        self.length += 1
        return 'Success Insert'
    
    def search(self,target):
        curr = self.head
        index += 0
        while curr:
            if curr.value == target:
                return index
            index += 1
            curr = curr.next
        return 'Not Found'
    
    def get(self, index):
        if index >= self.length or index < -1:
            return 'Check Index'
        elif index == 0:
            return self.head
        elif index == -1 or index == self.length - 1:
            return self.tail
        else:
            curr = self.head
            for _ in range(index):
                curr = curr.next
            return curr
        
    def set(self,index,value):
        temp = self.get(index)
        if temp:
            temp.value = value
            return True
        return False
    
    def pop_first(self):
        if self.length == 0:
            return 'Empty Linekd List'
        elif self.length == 1:
            self.head = None
            self.tail = None
        else:
            temp = self.head
            self.head = self.head.next
            temp.next = None
            self.tail.next = self.head

        self.length -= 1
        return True
        
    def pop(self):
        if self.length == 0:
            return 'Empty Linekd List'
        elif self.length == 1:
            self.head = None
            self.tail = None
        else:
            temp = self.head
            for _ in range(self.length - 1):
                temp = temp.next

            self.tail = temp
            temp.next = None
            self.tail.next = self.head
        
        self.length - 1
        return True
    
    def delete(self):
        self.head = None
        self.tail = None
        self.length = 0

    def remove(self,index):
        if self.length == 0:
            return 'Empty Linekd List'
        elif index < -1 or index >= self.length:
            return 'Index Error'
        
        popped = self.get(index)
        prev = self.get(index - 1)
        if self.head == self.tail:
            self.head = None
            self.tail = None
        elif index == -1 or index == self.length -1:
            self.pop()
        elif index == 0:
            self.pop_first()
        else:
            prev.next = popped.next
            popped.next = None
        
        self.length -= 1
        return True