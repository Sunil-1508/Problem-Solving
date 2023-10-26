//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    int n = sc.nextInt();
                    Solution ob = new Solution();
                    System.out.println(ob.minOperation(n));
                }
        }
}    
// } Driver Code Ends


//User function Template for Java


class Solution
{
    public int minOperation(int n)
    {
        //code here.
        if(n==0) return 0;
        if(n==1) return 1;
        if(n==2) return 2;
        int k=n;
        int c=0;
        
        while(k>=0){
            if(k==0) return c;
            
            else if(k%2==0 && k/2>0){ k=k/2; c++; }
            
            else { k-=1; c++; }
            
            //System.out.print(k+" ");
            
        }
        return c;
    }
}

