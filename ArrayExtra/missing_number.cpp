#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr = {1,2,3,5,6,7};

        int sum = 0 ;
        int n = arr.size();

        cout<<"value of n is :"<<n<<endl;

        for(int i = 0 ; i < n ; i++){
            sum += arr[i];
        }

        int totalSum = ((n)*(n+1))/2;
        cout<<"Total Sum is :"<<totalSum<<endl;
        int ans = totalSum - sum ;
        cout<<"The answer is :"<<ans;
}    