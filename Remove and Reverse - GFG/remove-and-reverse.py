#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3
class Solution:
    def removeReverse(self, s): 
        d={}
        n=len(s)
        s=list(s)
        for i in s:
            if i not in d:
                d[i]=1
            else:
                d[i]+=1
        i=0
        j=n-1
        di=0
        flag=0
        while(i<j):
            if(di==0):
                k=s[i]
                if(d[k]>1):
                    d[k]-=1
                    s[i]='@'
                    
                    di=1
                i+=1
                
            else:
                k=s[j]
                if(d[k]>1):
                    d[k]-=1
                    s[j]='@'
                    
                    di=0
                j-=1
                
            
        ans=""
        for i in range(n):
            if(s[i]!='@'):
                ans+=s[i]
        
        if(di==0):
            return ans
        return ans[::-1]

        #code here
        

#{ 
 # Driver Code Starts.
if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        S = input()
        ob = Solution()
        ans = ob.removeReverse(S)
        print(ans)


# } Driver Code Ends