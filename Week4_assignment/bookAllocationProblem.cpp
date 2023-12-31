
#include<bits/stdc++.h>
using namespace std;



class Solution 
{
    public:
    
    bool isPossibleSolution(int A[],int N, int M , int sol){
        int pageSum = 0;
        int  c = 1;
        for(int i = 0 ; i < N ; i++){
            if(A[i] > sol){
                return false;
            }
            if(pageSum + A[i] > sol){
                c++;
                pageSum = A[i];
                if(c > M){
                    return false;
                } 
            }
            else{
                pageSum += A[i];
            }
        }
        return true;
    }
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N) return -1;
        
        int s = 0 ;
        int e = accumulate(A,A+N,0);
        // cout<<e<<endl;
        int ans = -1;
        
        while(s <= e){
            
            int mid = s + (e - s)/2;
            if(isPossibleSolution(A,N,M,mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
        }
        return ans;
    }
};


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

