#include<iostream>

using namespace std;

int main(){
    int n ;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int rem = 0 ;
    while(n>0){
        rem = n % 10;
        n = n / 10;

        cout<<"Your digit is: ";
        cout<<" "<<rem<<endl;
    }
}

