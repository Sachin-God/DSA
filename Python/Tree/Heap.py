class Heap:
    def __init__(self, size):
        self.customList = (size + 1)*[None]
        self.heapSize = 0
        self.maxSize = size + 1

def peekheap(rootNode):
    if not rootNode:
        return
    return rootNode.customList[1]

def heapSize(rootNode):
    if not rootNode:
        return 
    return rootNode.heapSize

def levelOrderTraversal(rootNode):
    if not rootNode:
        return
    for i in range(1, rootNode.hearSize + 1):
        print(rootNode.customList[i])

# insert Method

def insertHeapify(rootNode, index, heapType):
    parent = int(index // 2)
    if index < 0:
        return
    if heapType == 'min':
        if rootNode.customList[index] < rootNode.customList[parent]:
            rootNode.customList[index] , rootNode.customList[parent] = rootNode.customList[parent] , rootNode.customList[index]
        insertHeapify(rootNode, parent, heapType)
    if heapType == 'max':
        if rootNode.customList[index] > rootNode.customList[parent]:
            rootNode.customList[index] , rootNode.customList[parent] = rootNode.customList[parent] , rootNode.customList[index]
        insertHeapify(rootNode, parent, heapType)

def insert(rootNode, nodeValue, heapType):
    if rootNode.heapSize + 1 == rootNode.maxSize:
        return
    rootNode.customList[rootNode.heapSize + 1] = nodeValue
    rootNode.heapSize += 1
    insertHeapify(rootNode, rootNode.heapSize, heapType)
    return 'Success'

def delete(rootNode):
    rootNode.customList = None

# Extract a Node Form a Heap
def extractHeapify(rootNode, index, heapType):
    leftIndex = 2 * index
    rightIndex = 2 * index + 1
    swapChild = 0

    if rootNode.heapSize < leftIndex:  # no child
        return 
    elif rootNode.heapSize == leftIndex: # only One Child
        if heapType == "min":
            if rootNode.customList[index] > rootNode.customList[leftIndex]:
                rootNode.customList[index] , rootNode.customList[leftIndex] = rootNode.customList[leftIndex] , rootNode.customList[index]
            return
        else:
            if rootNode.customList[index] < rootNode.customList[leftIndex]:
                rootNode.customList[index] , rootNode.customList[rightIndex] = rootNode.customList[rightIndex] , rootNode.customList[index]
            return
    else:
        if heapType == "min":
            if rootNode.customList[leftIndex] < rootNode.customList[rightIndex]:
                swapChild = leftIndex
            else:
                swapChild = rightIndex

            if rootNode.customList[index] > rootNode.customList[swapChild]:
                rootNode.customList[index] , rootNode.customList[swapChild] = rootNode.customList[swapChild] , rootNode.customList[index]
        else:
            if rootNode.customList[leftIndex] > rootNode.customList[rightIndex]:
                swapChild = leftIndex
            else:
                swapChild = rightIndex

            if rootNode.customList[index] > rootNode.customList[swapChild]:
                rootNode.customList[index] , rootNode.customList[swapChild] = rootNode.customList[swapChild] , rootNode.customList[index]
    extractHeapify(rootNode, swapChild, heapType)

def extract(rootNode, heapType):
    if rootNode.heapSize == 0:
        return
    else:
        extractNode = rootNode.customList[1]
        rootNode.customList[1] = rootNode.customList[rootNode.heapSize]
        rootNode.customList[rootNode.heapSize] = None
        rootNode.heapSize -= 1
        extractHeapify(rootNode, 1, heapType)
        return extractNode
