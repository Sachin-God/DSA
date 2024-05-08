# A Binary Search Tree is a Type of Binary Tree where left SubTree contains the data smaller than RootNode and right SubTree contains data greater than rootNode
import QueueLinkedList as queue

class BSTNode:
    def __init__(self,data):
        self.data = data
        self.left = None
        self.right = None

def insert(rootNode, nodeValue):
    if not rootNode:
        rootNode.data = nodeValue
    elif nodeValue <= rootNode.data:
        if not rootNode.left:
            rootNode.left = BSTNode(nodeValue)
        else:
            insert(rootNode.left, nodeValue)
    else:
        if not rootNode.right:
            rootNode.right = BSTNode(nodeValue)
        else:
            insert(rootNode.right, nodeValue)
    return True

# Traversals
# Preorder Traversal
def preOrderTraversal(rootNode):
    if not rootNode:
        return
    print(rootNode.data)
    preOrderTraversal(rootNode.left)
    preOrderTraversal(rootNode.right)

# inorder Traversal
def inOrderTraversal(rootNode):
    if not rootNode:
        return
    inOrderTraversal(rootNode.left)
    print(rootNode.data)
    inOrderTraversal(rootNode.right)

# Preorder Traversal
def postOrderTraversal(rootNode):
    if not rootNode:
        return
    postOrderTraversal(rootNode.left)
    postOrderTraversal(rootNode.right)
    print(rootNode.data)

#level Order Traversal
def levelOrderTraversal(rootNode):
    if not rootNode:
        return
    else:
        customqueue = queue.Queue()
        customqueue.enqueue(rootNode)
        while not customqueue.isEmpty():
            root = customqueue.dequeue()
            print(root.value.data)
            if root.value.left:
                customqueue.enqueue(root.value.left)
            if root.value.right:
                customqueue.enqueue(root.value.right)

def search(rootNode, nodeValue):
    if rootNode.data == nodeValue:
        return True
    elif nodeValue < rootNode.data:
        if rootNode.left.data == nodeValue:
            return True
        else:
            search(rootNode.left,nodeValue)
    else:
        if rootNode.right.data == nodeValue:
            return True
        else:
            search(rootNode.right,nodeValue)
    return False

def deleteTree(rootNode):
    rootNode.data = None
    rootNode.left = None
    rootNode.right = None
    return True

def minValue(rootNode):
    curr = rootNode
    while curr.left is not None:
        curr = curr.left
    return curr

def deleteNode(rootNode, nodeValue):
    if not rootNode:
        return
    if nodeValue < rootNode.data:
        rootNode.left = deleteNode(rootNode.left, nodeValue) 
    elif nodeValue > rootNode.data:
        rootNode.right = deleteNode(rootNode.right, nodeValue) 
    else:
        if rootNode.left is None:
            temp = rootNode.right
            rootNode = None
            return temp
        if rootNode.right is None:
            temp = rootNode.left
            rootNode = None
            return temp
        temp = minValue(rootNode.right)
        rootNode.data = temp.data
        rootNode.right = deleteNode(rootNode.right, nodeValue) 
        return rootNode