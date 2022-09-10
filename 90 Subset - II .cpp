class Solution {
public:
  
    /* all powerset 2^n    [4,4,4,1,4]
    
    {},{4},{4},{4},{1},{4},{4,4},{4,4},{4,1},{4,4},{4,4},{4,1},{4,4},{4,1},{4,4},{1,4},{4,4,4},{4,4,1},{4,4,4},{4,4,1},{4,4,4},{4,1,4},{4,4,1},{4,4,4},{4,1,4},{4,1,4},{4,4,4,1},{4,4,4,4},{4,4,1,4},{4,4,1,4},{4,4,1,4},{4,4,4,1,4}   
    sort every output and then push_back to ans
  unique --->>>   [[],[1],[1,4],[1,4,4],[1,4,4,4],[1,4,4,4,4],[4],[4,4],[4,4,4],[4,4,4,4]]
    */
    
    
    
    void check(vector<int>nums, int index, vector<vector<int>>& ans, vector<int>output){
        
        if(index>=nums.size()){
            //sort every output
            sort(output.begin(),output.end());
            ans.push_back(output);
            return;
        }
        
         //ex-clude means move index to next el
        check(nums,index+1,ans,output);
        
         //in-clude means we are take elment -->nums[index] in output -->el =nums[index]
        output.push_back(nums[index]);
        check(nums,index+1,ans,output);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         int index=0;
        vector<vector<int>>ans;
        vector<int>output;

        check(nums,index,ans,output);
        
        sort(ans.begin(),ans.end());
        //find all unique output and remove all duplicate
         auto x= unique(ans.begin(),ans.end());
        
        ans.erase(x,ans.end());
        
        return ans; 
    }
};










//----> 2nd Method

// using set to remove the duplicates 



class Solution {
public:
  
    
    void check(vector<int>nums, int index, set<vector<int>>& s, vector<int>output){
        
        if(index>=nums.size()){
            
            sort(output.begin(),output.end());
            
            s.insert(output);
            
            return;
        }
        
         //ex-clude means move index to next el
        check(nums,index+1,s,output);
        
         //in-clude means we are take elment -->nums[index] in output -->el =nums[index]
        output.push_back(nums[index]);
        check(nums,index+1,s,output);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         int index=0;
      
         vector<int>output;
        
         set<vector<int>>s;
        
         check(nums,index,s,output);
         
        vector<vector<int>>dup;
        
         dup.assign(s.begin(),s.end());
      
        return dup; 
    }
};
