#include<iostream>

using namespace std;

int countSetBits(int n) {

    int count = 0 ;

    while( n != 0 ) {

        int rem = n & 1;
        
        if(rem == 1){
            count++;
        }

        n = n >> 1;
    }
    return count;
}

int  main() {

    int num ;
    cin>>num ;

    cout<<"Number of setBits is:"<<countSetBits(num)<<endl;


}