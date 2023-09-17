#include<iostream>
#include<math.h>

using namespace std;

int setBit(int n , int k){

    int a = (1 << k);
    return n | a;
}

int main () {

    int n ,k;
    cout<<"Enter the number and k :";
    cin>>n>>k;

    cout<<"The new number is :"<<setBit(n,k)<<endl;
}