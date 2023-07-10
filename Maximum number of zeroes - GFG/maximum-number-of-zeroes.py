# User Template code

def MaxZero(arr, n):
    # Your code goes here
    m=0
    n=0
    arr.sort()
    for i in arr:
        t=str(i).count("0")
        if(m<=t):
            m=t
            n=int(i)
    p=str(n)
    if(p.count("0")==0):
        return -1
    return p
    

#{ 
 # Driver Code Starts
if __name__ == '__main__': 
    
    t=int(input())
    for _ in range(0,t):
        n=int(input())
        a=list(map(int,input().split()))
        print(MaxZero(a,n))
# } Driver Code Ends