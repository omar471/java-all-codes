#include<iostream>
using namespace std  ;
 int  addition(int n ){
 	
	  int sum= 0 ;
	  while (n != 0){
	  	 sum=sum+n%10 ;
		   n=n/10 ; 
	  	 
	  }
	   cout<<sum ;
 }

int main(){
	int n ;
	 cout<<"Enter a  number " ;
	  cin>>n  ;
	  if (n>=10 && n<=99){
	  
	  addition(n);
}
	
	/*
	//  sum  of the  number
	int  n  ;
	 cout<<"Enter a  number " ;
	  cin>>n  ;
	  int sum= 0 ;
	  while (n != 0){
	  	 sum=sum+n%10 ;
		   n=n/10 ; 
	  	 
	  }
	   cout<<sum ;
	   */
	   
	   
	  
	
}
