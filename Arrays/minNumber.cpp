#include<iostream>
#include<limits.h>

using namespace std;

int main(){

    int arr[10] = { -21,1,53,12,15,64,22,99,89,85};

    int minAns = INT_MAX;

    for(int i = 0; i < 10; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }

    cout<<"Minimum number is :"<<minAns;
}

