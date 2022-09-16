
#include<bits/stdc++.h>
using namespace std;

int part(int arr[], int s ,int e){
	//first el as pivot
	int pivot=arr[s];
	int count=0;
	
	//count smaller elements
	for(int i=s+1;i<=e;i++){
		
		if(arr[i]<=pivot)count++;
	}
	
	//correct place for pivot
	
	int position= s+count;
	
	//swap with right place
	
	swap(arr[s],arr[position]);
	
	 //handle left and right
    // we want all lesser element on left side
    // and greater element on right side of position or pivotindex
	int i=s,j=e;
	
	while(i<position && j>position){
		
		
        //already smaller element in left side
		while(arr[i]<=pivot)i++;
		
		
		//already greater element in right side
		while(arr[j]>pivot)j--;
		

		if(i<position && j>position){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
		
	}
	return position;
	
}


void quicksort(int arr[],int s,int e){
	
	if(s>=e)return;
	
	//pivot index
	int p = part(arr,s,e);
	
	//right part
	quicksort(arr,s,p-1);
	
	//left part
	quicksort(arr,p+1,e);
}

int main(){
	
	int arr[]={1,2,5,7,7,2,3,4,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int s=0,e=size-1;
  
	quicksort(arr,s,e);
	
	for(auto i : arr){
		
		cout<<i<<" ";
	}
}
