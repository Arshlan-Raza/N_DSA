#include<iostream>

using namespace std;

// int greatest (int a, int b , int c) {

//     if(a>b && a>c){
//         return a;
//     }
//     else if(b>a && b > c){
//         return b;
//     }
//     else{
//         return c;
//     }

// }

int greatest (int n1,int n2, int n3){
    
    int res1 = max(n1,n2);
    int res2  = max (res1,n3);
    return res2;
}

int main() {

    int num1, num2, num3;

    cin>>num1>>num2>>num3;

    int great = greatest(num1,num2,num3);

    cout<<"Greatest is : "<<great<<endl;
}