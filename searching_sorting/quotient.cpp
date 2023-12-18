#include<iostream>

using namespace std;

int getQuotient(int divisor , int dividend){
    int s = 0 ; 
    int e = dividend;
    int ans = -1 ;
    int mid = s + (e - s)/2;

    while(s <= e){
        if(mid * divisor == dividend){
            return mid ;
        }
        else if(mid * divisor < dividend){
            ans = mid ; 
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans ;
}

int main(){
    int divisor = 25;
    int dividend = 625;

    int ans = getQuotient (abs(divisor),abs(dividend));
    
    if((divisor > 0 && dividend < 0) || (dividend > 0 && divisor < 0)){
        ans = 0 - ans;
    }
    cout<<"The final answer is :"<<ans;

}