#include<bits/stdc++.h>
using namespace std;

#define el "\n"
#define rep(i,a,b) for(int i=a; i<b; i++)



void equalofBinary_string(char* bin,int i,int j,int leftsum,int rightsum){
	
	if(i>j){
		if(leftsum==rightsum){
			cout<<bin<<endl;
		}
		
		return;
	}
	
	
	//four ways---00,01,10,11
	
	bin[i]='0';
	bin[j]='0';
	
	equalofBinary_string(bin,i+1,j-1,leftsum,rightsum);
	
	bin[i]='0';
	bin[j]='1';
	
	equalofBinary_string(bin,i+1,j-1,leftsum,rightsum+1);
	
	
	bin[i]='1';
	bin[j]='0';
	
	equalofBinary_string(bin,i+1,j-1,leftsum+1,rightsum);
	
	bin[i]='1';
	bin[j]='1';
	
	equalofBinary_string(bin,i+1,j-1,leftsum+1,rightsum+1);
	
}

// add to string 
void addstring(string a ,string b , string& ans ,int carry , int i ,int j){
	
	if(j<0 && i<0 && carry==0){
		return;
	}
	
	int first=0;
	int second=0;
	
	if(i>=0){
		first=a[i]-'0';
	}
	
	if(j>=0)second=b[j]-'0';
	
	int sum = first + second + carry;
	
	int lastdigit=sum%10;
	
	carry=sum/10;
	
	ans.push_back(lastdigit + '0');

   addstring(a,b,ans,carry,i-1,j-1);
}


//reverse a string
void rev(string s,string& ans ,int index){
	
	if(index==s.length()){
	
		return;
	}
	
	rev(s,ans,index+1);
        
    ans.push_back(s[index]);	
}

//combination of string 
void comb_string(string s,int index,string output){
	
	if(index==s.length()){
		
		cout<<output<<el;
		return;
	}
	
	
	// add char...
	output.push_back(s[index]);
	comb_string(s,index+1,output);
	
	// add space , char is already added
	//index+1 last m space nhai ana chaiye 
	if(s[index+1] !='\0'){
	output.push_back(' ');
	comb_string(s,index+1,output);
   }
}

//subset sum problem
 bool subsetsum(int* set,int sum,int size){
	
	if(sum==0)return true;
		
	if(size<0)return false; 
	
	if(sum<set[size])subsetsum(set,sum,size-1);;
	
	
	return subsetsum(set,sum-set[size],size-1) or subsetsum(set,sum,size-1);
	

  }


//all sub squence of string 
void subsquence(string s,string output,int index){
	
	if(index==s.length()){
		cout<<output<<el;
		return;
	}
	
	subsquence(s,output,index+1);
	
	output.push_back(s[index]);
	
	subsquence(s,output,index+1);
}

//optimal gmae str..gy
int optimal_game_str(int* arr,int i, int j){
	
	if(i>j)return 0;
	
	int choice1 = arr[i]+min(optimal_game_str(arr,i+2,j),optimal_game_str(arr,i+1,j-1));
	
	int choice2 = arr[j] + min(optimal_game_str(arr,i,j-2),optimal_game_str(arr,i+1,j-1));
	
	return max(choice1,choice2);
}  
 
//coin change problem
int findways(int* arr ,int size ,int amount , int &countindex){
	
	if(amount==0)return 1;
	
	if(amount<0)return 0;
	
	int ways=0;
	
	rep(i,countindex,size){
		ways+=findways(arr,size,amount-arr[i],i);
	}
	
	return ways;
}

int main(){
	
	
	int arr[]={1,2,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int countindex=0;
	int amount = 11;
	
	//cout<<findways(arr,size,amount,countindex)<<el;
	 
	// cout<<optimal_game_str(arr,0,size-1);
	
	
	// string s ="abc";
	  int index=0;
	// string output="";
	
	// subsquence(s,output,index);
	
	
	
	// int set[]={3, 34, 4, 12, 5, 2};
	// int sum=9;
	// int sz=sizeof(set)/sizeof(set[0]);
	
	// cout<<subsetsum(set,sum,sz-1);
	  // string s ="abcd";
	  // string output="";
	 // comb_string(s,index,output);
	  
	  // rev(s,output,index);
	  // cout<<output<<el;
	  
	  // string a="25";
	  // string b="100";
	  
	  // string ans="";
	  
	  // int carry=0;
	  
	  // addstring(a,b,ans,carry,a.length()-1,b.length()-1);
	  
	  // reverse(ans.begin(),ans.end());
	  
	  // cout<<ans<<el;
	 
	  int num;
	  
	  cin>>num;
	  
	   char* bin =new char[2*num];
	  int leftsum=0;
	  int rightsum=0;
	  int j =2*num-1;
	  equalofBinary_string(bin,0,j,leftsum,rightsum);
	 
	  delete []bin;
	  
	
 }
