#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b;i++)
void merge(int arr[], int s ,int e ,int mid){
	
	int len1=mid-s+1;
	int len2=e-mid;
	
	
	int* temp1= new int[len1];
	
	int* temp2 =new int[len2];
	
	int index=s;
	
	//copy values to temp1
	
	rep(i,0,len1){
		
		temp1[i]=arr[index++];
	}
	
	index=mid+1; // temp1 --> mid tk chal tha aur less than len1 tk -->next element mid+1 hoga
	
	//copy values to temp2
	rep(i,0,len2){
		temp2[i]=arr[index++];
		
	}
	
	 int i=0,j=0;
	 index=s;
	 
	 //merge these 2 arrays into the original array
	 
	 while(i<len1 && j<len2){
	 	
	 	if(temp1[i]<=temp2[j])arr[index++]=temp1[i++];
	 	
	 	else arr[index++]=temp2[j++];
	 }
	
	
	//exhaust temp1 array-->>remaining el
	
	while(i<len1){
		arr[index++]=temp1[i++];
	}
	
	//exhaust temp2 array -->remaining el
	while(j<len2){
		arr[index++]=temp2[j++];
	}
	
}

void mergeSort(int arr[], int s ,int e){
	
	if(s>=e)return;
	
	int mid=s+(e-s)/2;
	
	mergeSort(arr,s,mid);
	
	mergeSort(arr,mid+1,e);
	
	merge(arr,s,e,mid);
}

int main(){
	
	int arr[]={1,5,7,7,2,3,4,};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int s=0,e=size-1;
	mergeSort(arr,s,e);
	//solve(arr,0,size-1);
	
	for(auto i : arr){
		
		cout<<i<<" ";
	}
}





// try----->>>>


// void mergee(int arr[] ,int s, int e){
	
// 	int mid=s+(e-s)/2;
	
// 	int len1=mid-s+1;
// 	int len2=e-mid;
	
// 	int* temp1 =new int[len1];
// 	int* temp2 =new int[len2];
	
// 	int mainindex=s;
	
// 	for (int i = 0; i < len1; ++i)
// 	{
// 		temp1[i]=arr[mainindex];
// 		mainindex++;
// 	}
	
// 	mainindex=mid+1;
// 	for (int i = 0; i < len2; ++i)
// 	{
// 		temp2[i]=arr[mainindex];
// 		mainindex++;
// 	}
	
	
	
// 	int i=0,j=0;
// 	mainindex=s;
    
//     while(i<len1 && j<len2){
    	
//     	if(temp1[i]<=temp2[j]){
//     		arr[mainindex]=temp1[i];
//     		mainindex++;
//     		i++;
//     	}
//     	else{
//     		arr[mainindex]=temp2[j];
//     		mainindex++;
//     		j++;
//     	}
//     }
    
    
//     while(i<len1){
//     	arr[mainindex]=temp1[i];
//     		mainindex++;
//     		i++;
//     }
	
	
// 	while(j<len2){	
// 		arr[mainindex]=temp2[j];
//     		mainindex++;
//     		j++;
// 	}
	
// }

// void merge_sort(int arr[],int s,int e){
	
	
// 	if(s>=e){
// 		return;
// 	}
	
// 	int mid=s+(e-s)/2;
	
// 	merge_sort(arr,s,mid);
	
	
// 	merge_sort(arr,mid+1,e);
	
// 	mergee(arr,s,e);
// }
