
# Python3 implementation of the approach
 
# Function to return the number
# of unique pairs in the array
def countUnique(arr, n):
     
    s = set()
    for i in range(n):
        s.add(arr[i]%1e9+7)
 
    count = pow(len(s), 2)
 
    return count
 
# Driver code
if __name__ == "__main__" :
 
    arr = [ 1,2,3 ,5,6,7,7,8,9,4,3,5,7,1,234,6,4,566,455,333,55,888,908,2,3 ,5,6,7,7,8,9,4,3,5,7,4,5,6,3,43,35,53,7,373,37,25]
    n = len(arr)
 
    print(countUnique(arr, n))