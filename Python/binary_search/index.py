import re
import sys

initial_arr = list(map(int, input().split(",")))

target = int(sys.argv[1])

def binary_search(arr, x, low, high):
    if low > high:
        return False
    else:
        mid = int((low + high)/2)
        if x == arr[mid]:
            return mid
        elif x > arr[mid]:
            return binary_search(arr, x, mid + 1, high)
        else:
            return binary_search(arr, x, low, mid - 1)

result = binary_search(initial_arr, target, 0, len(initial_arr) - 1)

if result > -1:
    print("Number is on the {} position".format(result))
else:
    print("Number is not in the array")
