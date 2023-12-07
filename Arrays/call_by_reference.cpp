#include<iostream>

using namespace std;

void incrementByOne(int &n){
    n = n + 1;
}

int main(){
    int n = 5;
    incrementByOne(n);
    cout<<"Value of n is:"<<n<<endl;
}