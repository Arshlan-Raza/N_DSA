#include<iostream>

using namespace std;

int add(int a , int b,int c ){

    int result = a + b + c; 
    return result ;

}

int main() {

    int num1,num2,num3;

    cout<<"Enter the value a ,b and c :";
    cin>>num1>>num2>>num3;

    // int result = 
    cout<<add(num1,num2,num3);

}

