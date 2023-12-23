#include<iostream>
#include<vector>

using namespace std;

int search(vector<int>& nums, int target) {
		int l = 0, r = nums.size() - 1;
		while(l <= r){
			int mid = l + (r-l)/2;
			if(nums[mid] == target) return mid;
			else if(nums[l]>=nums[mid]){
				if(nums[l]<=target && target<nums[mid]) r = mid-1;
				else l = mid+1;
			}
			else{
				if(nums[mid]<target && target<=nums[r]) l = mid+1;
				else r = mid-1;
			}
		}
		return -1; // No need to debug this line.
	}

int main(){
    vector<int> v = {4,5,6,1,2,3};
    int ans = search(v,55);
    if(ans == -1)
        cout<<"Not found";
    else    
       cout<<"Answer is :"<<v[ans]; 
}