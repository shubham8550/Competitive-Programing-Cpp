def processStrings(n , arr):
    res=0
    for i in arr:
        if 60 <= int(i[-4]+i[-3]):
            res+=1

    return res