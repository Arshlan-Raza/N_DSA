#include<iostream>

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

double myPrecision(int n){
        double sqrt = mySqrt(n);

        double step = 0.1;
        int precision = 5;

        for(int i = 0 ; i < precision ; i++){
            double j = sqrt ;
            while(j <= n / j){
                sqrt = j ;
                j += step ;
            }
            step = step/10;
        }
        
        return sqrt ;
}

int main(){
    int x ; 
    cin>>x;
    double ans = myPrecision(x);
    cout<<"Square root is :"<<ans<<endl;
}