#include<bits/stdc++.h>
using namespace std;
#define el "\n"
#define rep(i,a,b) for(int i=a;i<b;i++)
#define yes cout<<"Yes Found "<<el
#define no  cout<<"NOT Found "<<el


void stringpail(string s,int i,int j){
	
	if(i>=j){yes;return;}
	
	if(s[i]!=s[j]){no;return;}
	
	stringpail(s,i+1,j-1);
}

void reversearray(int arr[],int i,int j){
	
	if(i>=j)return;
	
	swap(arr[i],arr[j]);
	
	reversearray(arr,i+1,j-1);
}


void binarysearch(int *arr,int s,int e,int target){
	
	int mid=s+(e-s)/2;
	
	if(s>e){no;return;}
	
	if(arr[mid]==target){yes;return;}
	
	if(arr[mid]<target)binarysearch(arr,mid+1,e,target);
	
	else binarysearch(arr,s,mid-1,target); 
}
	
void linerearch(int *arr,int size,int target){
	
	if(size==0){no;return;}
	
	if(arr[0]==target){
		yes;
	   return;
	}
	 else linerearch(arr+1,size-1,target);	
	
}

int sumcal( int *arr,int size){
	if(size==0)return 0;
	
	if(size==1)return arr[0];
	
	int ans = arr[0]+ sumcal(arr+1,size-1);
	
	return ans;
}

 void arraysum(int arr[],int size,int index,int ans){
 	
 	if(index==size){
 		
 		cout<<"sum of array is "<<ans<<el;
 		
 		return;
 	}
     ans += arr[index];
     
     arraysum(arr,size,index+1,ans);
     
 }

 void issorted(int *arr,int size,int index){
 	 
 	 if(index==size){
 	 	
 	 	cout<<"Array is sorted "<<el;
 	 	
 	 	return;
 	 }
 	 
 	 if(arr[index-1]<=arr[index]){
 	 	
 	 	issorted(arr,size,index+1);
 	 }
 	   else cout<<"Not sorted "<<el;

 }
 
 bool sorted(int arr[],int size){
 	
 	if(size==0 || size==1)return true;
 	
 	if(arr[0]>arr[1])return false;
 	
 	else sorted(arr+1,size-1);
  }
 
 int main(){
 	
	int arr[]={1,2,3,8,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int index=0;
	int target=10;
	//issorted(arr,size,index);
	//int check=sorted(arr,size);
	
	//check==true ? cout<<"true sorted" : cout<<"Not sorted";
	
	//arraysum(arr,size,index ,0);
	
	//cout<<"sum of array is  "<<sumcal(arr,size);
	
	//linerearch(arr,size,target);
	//binarysearch(arr,0,size-1,target);
	
	// reversearray(arr,0,size-1);
	// for(auto i : arr){
	// 	cout<<i<<" ";
	// }
	
	
	string s="aba";
	int j =s.length();
	
	stringpail(s,0,j-1);
	
 }
 
