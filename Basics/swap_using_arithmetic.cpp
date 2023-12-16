#include<iostream>

using namespace std;

int main(){
    int a = 3 , b = 5;

    // swapping 
    a = a+b;
    b = a-b;
    a = a-b;

    cout<<"A :"<<a<<endl;
    cout<<"B :"<<b<<endl;
}