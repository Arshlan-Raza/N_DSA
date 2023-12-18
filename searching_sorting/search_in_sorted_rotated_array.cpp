#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:

    int findPivotIndex(vector<int>& arr){
        int n = arr.size();
        int s = 0 ;
        int e = n - 1;
        int mid = s + (e - s)/2;

        while(s <= e){
            if(s == e)
                return s;   // if there is only single element
        
            if(mid+1 < n && arr[mid] > arr[mid+1])
                return mid ;
        
            else if(mid -1 >= 0 && arr[mid] < arr[mid-1])
                return mid-1; 
        
            else if(arr[s] > arr[mid])
                e = mid -1 ;
            
            else
                s = mid + 1;
        
            mid = s + (e - s)/2;
        }
        return -1 ;
    }

    int binarySearch(vector<int>& arr,int s , int e, int target){
        int mid = s + (e - s)/2;
        while(s <= e){
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid] > target){
                e = mid - 1;
            }
            else if(arr[mid] < target){
                s = mid + 1;
            }
            mid = s + (e - s)/2;
        }
        return - 1;

    }

    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivotIndex(nums);
        int ans = -1;
        int n = nums.size();

        if(target >= nums[0] && nums[pivotIndex]){
            ans = binarySearch(nums,0,pivotIndex,target);
        }
        else{
            ans = binarySearch(nums,pivotIndex + 1,n-1,target);
        }
        return ans;
    }
};


int main(){
    
}