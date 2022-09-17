class Solution {
    private: 
       int getcount(vector<int>nums,int i,int prev){
           
          if(i==nums.size())return 0;
          
           int in=0;
          if(prev==-1 or nums[prev]<nums[i]) in = 1 + getcount(nums,i+1,i); 
           //prev=index of nums[i] when condn match    
           int ex= getcount(nums,i+1,prev);
           
           return max(in,ex);
       }
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int prev=-1,i=0;
        return getcount(nums,i, prev);

    }
};
