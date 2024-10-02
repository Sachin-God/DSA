# Bubble Sort is also called Sinking Sort
# It is the simplest Algorithm that works by repeatedly swapping the adjacent element if they are in wrong Order.
# Runtime Complexity - O(N**2)

def bubbleSort(arr):
    for i in range(len(arr) - 1):
        for j in range(len(arr) - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return(arr)