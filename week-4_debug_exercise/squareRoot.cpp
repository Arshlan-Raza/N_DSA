#include<iostream>
#include<vector>

using namespace std;

int mySqrt(int x) {
        if (x == 0)
            return x;
        int first = 1, last = x;
        int mid = first + (last - first) / 2;
        while (first <= last) {
            
            if (mid  == x / mid)
                return mid;
            else if (mid > x / mid) {
                last = mid;
            }
            else {
                first = mid;
            }
             mid = first + (last - first) / 2;
        }
        return mid;
}

int main(){
    int x ; 
    cin>>x;
    int ans = mySqrt(x);
    cout<<"Square root is :"<<ans<<endl;
}