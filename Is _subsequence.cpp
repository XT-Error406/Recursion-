class Solution {
    private:
           int sub(string s, string t,int i ,int j ){
               if(i==s.length() or j==t.length())return 0;
               
               if(s[i]==t[j]) return 1+sub(s,t,i+1,j+1);
               
               else return sub(s,t,i,j+1);
               
           }
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        int count = sub(s,t,i,j);
        
        if(count==s.length())return true;
        return false;
        
    }
};
