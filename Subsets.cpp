class Solution {
public:
    
    void check(vector<int>nums, int index, vector<vector<int>>& ans, vector<int>output){
        
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        
         //ex-clude means move index to next el
        check(nums,index+1,ans,output);
        
         //in-clude means we are take elment -->nums[index] in output -->el =nums[index]
        output.push_back(nums[index]);
        check(nums,index+1,ans,output);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int index=0;
        vector<vector<int>>ans;
        vector<int>output;
        
        check(nums,index,ans,output);
        return ans;
    }
};
