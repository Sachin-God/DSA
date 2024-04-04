class Node:
    def __init__(self,value):
        self.value = value
        self.next = None
        self.prev = None

class DLL:
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
                result += ' <-> '
            temp = temp.next
        return result
    
    def append(self,value):
        new_node = Node(value)
        if self.length == 0:
            self.head = new_node
            self.tail = new_node
        else:
            self.tail.next = new_node
            new_node.prev = self.tail
            self.tail = new_node
        self.length += 1

    def prepend(self,value):
        new_node = Node(value)
        if self.length == 0:
            self.head = new_node
            self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node
        self.length += 1

    def search(self,target):
        temp = self.head
        while temp:
            if temp.value == target:
                return temp
            temp = temp.next
        return False
    
    def get(self,index):
        if index < -1 or index >= self.length:
            return 'Index Invalid'
        elif index == 0:
            return self.head
        elif index == -1 or index == self.length - 1:
            return self.tail
        if index < self.length // 2:
            temp = self.head
            for _ in range(index):
                temp = temp.next
            return temp
        else:
            temp = self.tail
            for _ in range(self.length - 1, index, -1):
                temp = temp.prev
            return temp
        
    def set(self,index,value):
        if index < -1 or index >= self.length:
            return 'Index Invalid'
        else:
            curr = self.get(index)
            curr.value = value
            return True
        
    def insert(self,index,value):
        if index < -1 or index >= self.length:
            return 'Index Invalid'
        elif index == 0:
            self.prepend(value)
        elif index == -1 or index == self.length - 1:
            self.append(value)
        else:
            new_node = Node(value)
            temp = self.get(index - 1)
            new_node.next = temp.next
            temp.next = new_node
            new_node.prev = temp
            new_node.next.prev = new_node
        self.length += 1

    def pop_first(self):
        if self.length == 0:
            return 'Empty Dll'
        elif self.length == 1:
            self.head = None
            self.tail = None
        else:
            curr = self.head
            self.head = self.head.next
            curr.next = None
            self.head.prev = None

        self.length -= 1

    def pop(self):
        if self.length == 0:
            return 'Empty Dll'
        elif self.length == 1:
            self.head = None
            self.tail = None
        else:
            curr = self.tail
            self.tail = self.tail.prev
            curr.prev = None
            self.tail.next = None
        self.length -= 1

    def remove(self,index):
        if index < -1 or index >= self.length:
            return 'Index Invalid'
        elif index == 0:
            self.pop_first()
        elif index == -1 or index == self.length - 1:
            self.pop()
        else:
            removed_node = self.get(index)
            removed_node.prev.next = removed_node.next
            removed_node.next.prev = removed_node.prev
            removed_node.prev = None
            removed_node.next = None
            self.length -= 1
            return removed_node
