#include<bits/stdc++.h>
using namespace std;


void saydigit(int n, string arr[]){
	
	if(n<=0)return;
	
	int digit=n%10;
	
	 n/=10;
	 
	 saydigit(n,arr);
	 
	 cout<<arr[digit]<<" ";
}



int reachhome(int src,int des){
	
	// cout<<" src is  "<<src<<"  des is "<< des<<endl;
	// return src==des ? 0 : reachhome(src+1,des);
	
	 cout<<" src is  "<<src<<"  des is "<< des<<endl;
	
	 if(src==des){
		
     cout<<"Reach home";
     
	  return 0; // des+1 tk aur fhir cout -->head recursion 
	}
	
	return reachhome(src+1,des);
}



void print(int n,int m){
	
	if(m==n+1)return ;
	
	cout<<m<<" ";
	
	print(n,m+1);
	
	cout<<m<<" ";
	
	
}

int fibo(int n){
	// Binet’s Formula for the Nth Fibonacci 
	// F(n) = round( Phi / √5 ) provided n ≥ 0    phi=1+sqrt(5)/2
	
	//F(n) = round( (-phi)n / √5 ) provided n < 0  -phi = 1-sqrt(5)/2
	double phi = (sqrt(5)+1)/2;
	
	 return round(pow(phi,n)/sqrt(5));
}

int fiboo(int n){
	// if(n==1)return 1;
	// if(n==0)return 0;
	 if(n<=1) return n;
	
	return fibo(n-1) + fibo(n-2);
	
}


int fact(int n){
	
	if(n==1)return 1;

	int ans=n*fact(n-1);
	
	  return ans;
}

void printarr(int arr[],int size,int index){
	   
	   if(index==size)return;
	   
	    cout<<arr[index]<<" ";
	    
	    printarr(arr,size,index+1);
	
}

void solvein(int n){
	//base case rukna kab h 
	
	if(n==0)return;  
	
	cout<<n<<endl;// decreaasing
	
	//recurive relation
	solvein(n-1);
	
	//processing 
	
	cout<<n<<endl;  //increasing
}

void solve(int n){
	//base case rukna kab h 
	
	if(n==0)return;
	
	//processing 
	cout<<n<<endl;
	
	//recurive relation
	solve(n-1);
}

int main(){
	
	int n=45;
	
	//solvein(n);
	
	//int arr[5]={0,1,2,3,4};
	  
	  // cout<<&arr<<endl;
	  // cout<<&arr[0]<<endl;
	   
	   //arr[i] =*(arr+i)= *(i+arr)= i[arr]
	  // cout<<3[arr]<<endl;
	  
	  // cout<<*(arr+0)<<endl;
	  // cout<<*(arr+1)<<endl;
	  // cout<<*(arr+2)<<endl;
	  
	  
	 // char ch[]={"ab cd"};
	
	   // char ch='B'; 
	   // char *p = &ch;
	   
	   //  cout<<*p;
	  
	  
	  
	  // if(cout<<"rohit"){
	  	
	  // 	int ans =10; cout<<ans;
	  // }
	  // else{
	  // 	cout<<"wtf0";
	  // }
	  
	  
	   
	   string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	  	 saydigit(2019007,arr); 

	//printarr(arr,5,0);
	  
	  //reachhome(1,10);
	  // vector<int>ans;
	  // print(8,1);
	  
     // reverse(ans.begin(),ans.end());
     // for(auto i : ans){
     // 	cout<<i<<" ";
     // }

	//cout<<fact(n);
	
     // cout<<fibo(n)<<endl;
     // cout<<fiboo(n)<<endl;
     
	
	//int ans = floor(log10(n)+1);
    // cout<<ans;
}
