#include<bits/stdc++.h>
using namespace std;
#define el "\n"
#define rep(i,a,b) for(int i=a;i<b;i++)
#define yes cout<<"Yes Found "<<el
#define no  cout<<"NOT Found "<<el

void printocc(int* arr ,int size,int index,int target){
	if(index==size)return;
	
	if(arr[index]==target)cout<<index<<" ";
	
	printocc(arr,size,++index,target);
}

void lastoc1(int* arr, int index,int target){
	
	if(index<0){no;return;}
	
	if(arr[index]==target){cout<<index;return;}
	
	lastoc1(arr,index-1,target);
}

void lastoc(int* arr,int size,int index,int &ans,int target){
	
	if(index==size)return;
	
	if(arr[index]==target)ans=index;
	
	lastoc(arr,size,index+1,ans,target);
}

void firstoc2(int* arr, int index,int target,int &ans){
	if(arr[index]==target){ans=index;return;}
	
	 else  firstoc2(arr,index+1,target,ans);
}

void firstoc1(int* arr ,int &count, int target){
	
	if(arr[0]==target)return;
	
	
	  count+=1;
	  
	 firstoc1(arr+1,count,target);
	
}

int firstoc(int* arr, int size, int index,int target){
	
	if(index==size){no;return 0;}
	
	if(arr[index]==target)return index;
	 else firstoc(arr,size,index+1,target);
}

int maxarray(int* arr ,int size ,int index,int &maxi){
	
	if(index==size)return 0;
	
	maxi=max(arr[index],maxi);
	maxarray(arr,size,index+1,maxi);
	
	return maxi;
}

void printarr(int* arr,int size){
	
	if(size<0)return;
	
	cout<<arr[size]<<" ";
	
	printarr(arr,size-1);
	
}

int fastexp(int a,int b){
	
	if(b==0)return 1; 
	
	int sp =fastexp(a ,b/2);
	
	if(b&1)return sp*sp*a;
	
	else return sp*sp;
}

int arraymax(int* arr , int size,int index){
	
	if(index==size)return INT_MIN;
	
	int ans=max(arr[index],arraymax(arr,size,index+1));
	
	return ans;
}

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
 	
	int arr[]={1,2,9,5,8,9,9};
	int size=sizeof(arr)/sizeof(arr[0]);
	int index=0;
	int target=9;
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
	
	
	// string s="aba";
	// int j =s.length();
	
	// stringpail(s,0,j-1);
	
	//cout<<arraymax(arr,size,0);
	
	//cout<<fastexp(2,10);
	
	//printarr(arr,size-1);
	 // int maxi=INT_MIN;
  //  cout<<maxarray(arr,size,0,maxi);
	
	int count=0;
	//firstoc1(arr,count,5);
	//firstoc2(arr,0,target,count);
	 int ans=-1;
	// lastoc(arr,size,0,ans,target);
	// cout<<ans<<" ";
	 
	 //lastoc1(arr,size-1,target);
	 printocc(arr,size,0,target);
 }
 
