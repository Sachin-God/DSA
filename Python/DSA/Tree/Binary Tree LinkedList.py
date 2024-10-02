import QueueLinkedList as queue

class TreeNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

    def __str__(self):
        return str(self.value)
    
rootN = TreeNode("brandi Love")
rootN.left = TreeNode('Eva Elfie')
rootN.right = TreeNode('Mia Khalifa')
rootN.right.left = TreeNode('Sachin')
rootN.right.right = TreeNode('Sachin')

# DEPTH FIRST SEARCH

#preOrder Traversal => root -> left -> right    
def preOrderTraversal(rootNode):
    if not rootNode:
        return
    print(rootNode)
    preOrderTraversal(rootNode.left)
    preOrderTraversal(rootNode.right)

#inOrder Traversal => left -> root ->  right   
def inOrderTraversal(rootNode):
    if not rootNode:
        return
    inOrderTraversal(rootNode.left)
    print(rootNode)
    inOrderTraversal(rootNode.right)

#postOrder Traversal => left -> right -> root
def postOrderTraversal(rootNode):
    if not rootNode:
        return
    postOrderTraversal(rootNode.left)
    postOrderTraversal(rootNode.right)
    print(rootNode)

# BREADTH FIRST SEARCH
# level order Traversal -> traverse at Levels
def levelOrderTraversal(rootNode):
    if not rootNode:
        return
    else:
        customqueue = queue.Queue()
        customqueue.enqueue(rootNode)
        while not (customqueue.isEmpty()):
            root = customqueue.dequeue()
            print(root.value.data)
            if root.value.left:
                customqueue.enqueue(root.value.left)
            if root.value.right:
                customqueue.enqueue(root.value.right)

def search(rootNode, nodeValue):
    if not rootNode:
        return
    else:
        customqueue = queue.Queue()
        customqueue.enqueue(rootNode)
        while not (customqueue.isEmpty()):
            root = customqueue.dequeue()
            if root.value.data == nodeValue:
                return True
            else:
                if root.value.left:
                    customqueue.enqueue(root.value.left)
                if root.value.right:
                    customqueue.enqueue(root.value.right)
        return False
    
def insert(rootNode, value):
    if not rootNode:
        rootNode = TreeNode(value)
    else:
        customqueue = queue.Queue()
        customqueue.enqueue(rootNode)
        while not customqueue.isEmpty():
            root = customqueue.dequeue()
            if root.value.left:
                customqueue.enqueue(root.value.left)
            else:
                root.value.left = TreeNode(value)
                return True
            if root.value.right:
                customqueue.enqueue(root.value.right)
            else:
                root.value.right = TreeNode(value)
                return True

# insert(rootN,'dillon harper')
levelOrderTraversal(rootN)

def deletetree(rootNode):
    rootNode.data = None
    rootNode.left = None
    rootNode.right = None
    return 'Success'

# print(deletetree(rootN))
# levelOrderTraversal(rootN)

# Deletion in BTree is done by copying the value of deepest node to the node which we wanna delete and removing the deepest Node

# Step 1 : Get Deepest Node
def getDeepestNode(rootNode):
    if not rootNode:
        return
    else:
        customqueue = queue.Queue()
        customqueue.enqueue(rootNode)
        while not (customqueue.isEmpty()):
            root = customqueue.dequeue()
            if root.value.left:
                customqueue.enqueue(root.value.left)
            if root.value.right:
                customqueue.enqueue(root.value.right)

        deepest = root.value
        return deepest
    
# Step 2 : Delete Deepest Node
def deleteDeepestNode(rootNode, dNode): # dNode -> Deepest Node
    if not rootNode:
        return
    else:
        customqueue = queue.Queue()
        customqueue.enqueue(rootNode)
        while not (customqueue.isEmpty()):
            root = customqueue.dequeue()
            if root.value is dNode:
                root.value = None
                return
            if root.value.right:
                if root.value.right is dNode:
                    root.value.right = None
                    return
                else:
                    customqueue.enqueue(root.value.right)
            if root.value.left:
                if root.value.left is dNode:
                    root.value.left = None
                    return
                else:
                    customqueue.enqueue(root.value.rleft)

# Step 3 : Delete Tree Node
def deleteBTNode(rootNode,nodeValue):
    if not rootNode:
        return
    else:
        customqueue = queue.Queue()
        customqueue.enqueue(rootNode)
        while not (customqueue.isEmpty()):
            root = customqueue.dequeue()
            if root.value.data == nodeValue:
                dNode = getDeepestNode(rootNode)
                root.value.data = dNode.data
                deleteDeepestNode(rootNode,dNode)
                return 'Success'
            if root.value.left is not None:
                customqueue.enqueue(root.value.left)
            if root.value.right is not None:
                customqueue.enqueue(root.value.right)
        return 'No Such Node'