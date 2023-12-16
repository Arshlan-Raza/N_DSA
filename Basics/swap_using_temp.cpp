#include<iostream>

using namespace std;

int main(){
    int temp ;
    int a = 5 , b = 3;

    temp = a ;
    a = b;
    b = temp;

    cout<<"A :"<<a<<endl;
    cout<<"B :"<<b<<endl;
}