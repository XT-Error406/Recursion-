#include<bits/stdc++.h>
using namespace std;

#define el "\n"
#define rep(i,a,b) for(int i=a; i<b; i++)

int optimal_game_str(int* arr,int i, int j){
	
	if(i>j)return 0;
	
	int choice1 = arr[i]+min(optimal_game_str(arr,i+2,j),optimal_game_str(arr,i+1,j-1));
	
	int choice2 = arr[j] + min(optimal_game_str(arr,i,j-2),optimal_game_str(arr,i+1,j-1));
	
	return max(choice1,choice2);
}  
 

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
	
	
	int arr[]={20,30,2,2,2,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	int countindex=0;
	int amount = 4;
	
	//cout<<findways(arr,size,amount,countindex)<<el;
	 
	 cout<<optimal_game_str(arr,0,size-1);
}