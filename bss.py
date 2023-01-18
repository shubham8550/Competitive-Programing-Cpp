def bs(arr,search,first, last):
    if first==last:
        return False
    mid= int((first+last)/2)
    if search== arr[mid]:
        return mid
    if search > arr[mid]:
        return bs(ar,search,mid+1, last)
    else:
        return bs(ar,search,first, mid-1)
        
        
def isort(arr):
    for i,v in enumerate(arr):
        for j,ival in enumerate(arr):
            if v < ival:
                temp=arr[i]
                arr[i]=ival
                arr[j]=temp
    
    return arr
                
        



ar= [10 ,20,30,50,60,25]
ar=isort(ar)
search=60
print(bs(ar,search,0,len(ar)))