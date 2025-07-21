#include<iostream> 
#include<vector>

using namespace std; 

class Solution{
public: 
  int triangularSum(vector<int>& nums){
    int n = nums.size(); 
    if(n==1) return nums[0]; 
    while(n>1){
      vector<int> newNums(n-1,0); 
      for(int i=0 ; i<n-1 ; ++i){
        newNums[i] = (nums[i]+nums[i+1])%10; 
      }
      nums = newNums; 
      n = nums.size(); 
    }
    return nums[0]; 
  }
};
int main(){
  vector<int> nums = {1,2,3,4,5}; 
  Solution sol; 
  cout << sol.triangularSum(nums) <<endl; 
  return 0; 
}
