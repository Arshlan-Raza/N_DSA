#include<iostream>

using namespace std;

int binarySearch(int arr[] , int n, int  target){
    int  start = 0, end = n -1 ;
    int  mid = start + (end -  start)/2;
    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            // right me jao 
            start = mid+1;    
        }
        else if(target < arr[mid]){
            // left me jao 
            end = mid - 1;
        }  
        // always update mid 
        mid = (start + end)/2;
    }
    return -1;
}

int main(){
    int  arr[] = {10,20,30,40,50,60,70,80,90};
    int  target  = 90;
    int n = 9;
    int ansIndex = binarySearch(arr,n,target);

    cout<<ansIndex;
}