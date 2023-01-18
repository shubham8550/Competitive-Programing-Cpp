def bs(arr,search,first,last):
    if(first==last):
        return False
    mid= int((first+last)/2)
    if search == arr[mid]:
        return mid
    if search > arr[mid]:
        return bs(arr,search,mid+1,last)
    else:
        return bs(arr,search,first,mid-1)
    
ar=[1,2,3,4,5,6,7]
s=7

print(bs(ar,s,0,len(ar)))