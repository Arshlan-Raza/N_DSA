#include<iostream>

using namespace std;

int getQuotient(int divisor , int dividend){
    int s = 0 ; 
    int e = dividend;
    int ans = -1 ;
    int mid = s + (e - s)/2;

    if(divisor == 0){
        cout<<"infinity"<<endl;
        return 0;
    }
    if(dividend == 0){
        return 0;
    }

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

double myPrecision(int divisor ,int dividend ){
        double quotient = getQuotient(divisor,dividend);

        double step = 0.1;
        int precision = 12;

        for(int i = 0 ; i < precision ; i++){
            double j = quotient ;
            while(j * divisor <= dividend){
                quotient = j ;
                j += step ;
            }
            step = step/10;
        }
        
        return quotient ;
}

int main(){
    int divisor = 7;
    int dividend = 22;

    double ans = myPrecision (abs(divisor),abs(dividend));
    
    if((divisor > 0 && dividend < 0) || (dividend > 0 && divisor < 0)){
        ans = 0 - ans;
    }
    cout<<"The final answer is :"<<ans;

}