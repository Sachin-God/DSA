class BinaryTree:
    def __init__(self,size):
        self.list = [None]*size
        self.lastUsedIndex = 0
        self.size = size
    
    def insert(self,value):
        if self.lastUsedIndex + 1 == self.size:
            return 'No Space'
        self.list[self.lastUsedIndex] = value
        self.lastUsedIndex += 1
        return 'Success'
    
    def search(self, nodeValue):
        for i in range(len(self.list)):
            if self.list[i] == nodeValue:
                return True
        return False

    def preorderTraversal(self,index):
        if index > self.lastUsedIndex:
            return
        print(self.list[index])
        self.preorderTraversal(2 * index) # left Child
        self.preorderTraversal(2 * index + 1) # RIght Child

    def inorderTraversal(self,index):
        if index > self.lastUsedIndex:
            return
        self.inorderTraversal(2 * index) # left Child
        print(self.list[index])
        self.inorderTraversal(2 * index + 1) # RIght Child

    def postorderTraversal(self,index):
        if index > self.lastUsedIndex:
            return
        self.postorderTraversal(2 * index) # left Child
        self.postorderTraversal(2 * index + 1) # RIght Child
        print(self.list[index])
    
    def levelorderTraversal(self,index):
        for i in range(self.lastUsedIndex + 1):
            print(self.list[i])

    def deleteTree(self):
        self.list = None
        self.lastUsedIndex = 0

    def deleteNode(self,nodeValue):
        if self.lastUsedIndex == 0:
            return 'Already Empty'
        
        for i in range(1,self.lastUsedIndex + 1):
            if self.list[i] == nodeValue:
                self.list[i] = self.list[self.lastUsedIndex]
                self.list[self.lastUsedIndex] = None
                self.lastUsedIndex -= 1
                return 'Success'
        return 'No Such Node'