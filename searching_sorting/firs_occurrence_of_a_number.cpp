#include<iostream>

using namespace std;

int findFirstOccurrence (int arr[],int n, int target){
    int s = 0 ; 
    int e = n - 1;
    int mid = s + (e - s)/2;
    int ans = - 1;

    while(s <= e){
        if(arr[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main(){
    int  arr[] = {10,30,30,30,30,30,70,80,90};
    int  target  = 30;
    int n = 9;
    int ansIndex = findFirstOccurrence(arr,n,target);

    cout<<ansIndex;
}