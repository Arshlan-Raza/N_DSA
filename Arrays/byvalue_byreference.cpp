#include<iostream>

using namespace std;

int incrementBY1(int n){
    n = n + 1;
    return n ;
}

int main(){
    int n ;
    cin>>n;
    n = incrementBY1(n);
    cout<<n<<endl;
    return 0;
}

