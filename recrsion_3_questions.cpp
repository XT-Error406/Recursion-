#include<bits/stdc++.h>
using namespace std;

#define el "\n"
#define rep(i,a,b) for(int i=a; i<b; i++)

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
	  string s ="abc";
	  string output="";
	  comb_string(s,index,output);
 }
