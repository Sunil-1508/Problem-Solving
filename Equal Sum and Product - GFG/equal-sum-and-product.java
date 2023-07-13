//{ Driver Code Starts
//Initial Template for Java



import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        while (tc-- > 0) {
            int n = Integer.parseInt(br.readLine());
            int[] arr = new int[n];
            String[] inputLine = br.readLine().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            System.out.println(new Solution().numOfsubarrays(arr, n));
        }
    }
}

// } Driver Code Ends


//User function Template for Java



class Solution {
    int numOfsubarrays(int[] arr, int n) {
        // code here
        int p,s,c=0;
        for(int i=0;i<n;i++){
            p=1;
            s=0;
            for(int j=i;j<n;j++){
                p*=arr[j];
                s+=arr[j];
                if(p==s) c++;
            }
        }
        return c;
    }
}