#include<iostream>
#include<vector>

using namespace std;


int findMin(vector<int>& nums) {
        int start = 0, end = nums.size(), ans = start;
        cout<<"value of end is :"<<end<<endl;
        
        while(nums[start] > nums[end - 1]) {
            int mid = (start + end) >> 1;
            cout<<"value of mid is :"<<mid<<endl;
            if(nums[mid] <= nums[start] && nums[mid] <= nums[end]) {
                    end = mid ;
                    ans = mid;
            }
            else if(nums[mid] >= nums[start] && nums[mid] >= nums[end]){
                start = mid;    

            } 
            else {
                return mid;
            }
             
        }
        return ans;
}

int main(){
    vector<int> v = {44,55,66,25,26,27,28};
    int ans = findMin(v);
    cout<<"Minimum element is :"<<v[ans];
}