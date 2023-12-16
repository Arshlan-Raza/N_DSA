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

int findLastOccurrence (int arr[],int n, int target){
    int s = 0 ; 
    int e = n - 1;
    int mid = s + (e - s)/2;
    int ans = - 1;

    while(s <= e){
        if(arr[mid] == target){
            ans = mid;
            s = mid + 1;
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

int totalOccurrence(int arr[],int n , int target){
    int firstOcc = findFirstOccurrence(arr,n,target); 
    int lastOcc = findLastOccurrence(arr,n,target);
    int totalOcc = lastOcc - firstOcc + 1;
    return totalOcc;
}

int main(){
    int  arr[] = {10,30,30,30,30,30,70,80,90};
    int  target  = 30;
    int n = 9;
    int ansIndex = totalOccurrence(arr,n,target);

    cout<<"Total Occurrence is :"<<ansIndex;
}