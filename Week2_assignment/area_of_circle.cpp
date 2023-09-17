#include<iostream>

using namespace std;;

double circleArea(double height , double base){

    return (0.5*base*height);

}

int main(){

    double h , b ; 
    cin>>h>>b;

    double result = circleArea(h,b);
    cout<<result<<endl;
    

}