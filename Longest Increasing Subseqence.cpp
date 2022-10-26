//Approach--->>>1 B.S
int lisbs(int arr[],int size){
    
    std::vector<int>temp;
    temp.push_back(arr[0]);
    
    int len=1;
    for(int i=1;i<size;i++){
        
        if(arr[i]>temp.back() ){
            temp.push_back(arr[i]);
            len++;
        }
        else {
            int index=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
            
            temp[index]=arr[i];
        }
    }
    return len;
}


//Approach---->>>>2  
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
