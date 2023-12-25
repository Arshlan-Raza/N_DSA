//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
        int xorV(int a[],int s , int e){
        
        int xr = 0;
        // cout<<"Value of s and e"<<a[s]<<" "<<a[e]<<endl;
        
        for(int  i  = s ; i <= e; i++){
                xr ^= a[i];
        }
        
        // cout<<"Value of xr:"<<xr<<endl;
        return xr;
        
    }
    
    int gameOfXor(int N , int A[]) {
        // code here
       
        int xorValue = 0;
        
        
        for(int i = 0 ; i < N ; i++){
            xorValue ^= A[i];
        }
        
        int i = 0 ; 
        int j = N - 1;
        int xorValue2 = 0;
        while(i < N){
            
            if(i >= j){
                i++;
                j = N - 1;
                // xorValue ^= xorValue2;
            }
            else{
                // xorValue2 = A[i] ^ A[j];
                xorValue ^= xorV(A,i,j);
                j--;
            }
            
            
        }
        
        return xorValue;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.gameOfXor(N,A) << endl;
    }
    return 0;
}
