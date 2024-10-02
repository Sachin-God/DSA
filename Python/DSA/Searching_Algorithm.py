# Linear Search - O(N)
def linearSearch(num, arr):
    if num in arr:
        return True
    
# Binary Search - O(logN) - only used in Sorted array
def binarySearch(num, arr):
    start = 0
    end = len(arr) - 1

    while start < end:
        mid = (start + end) // 2
        if num < arr[mid]:
            end = mid - 1
        elif num > arr[mid]:
            start = mid + 1
        else:
            return mid
    