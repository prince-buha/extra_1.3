#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter Size of 1-D Array A : ";
	cin>>size;
	int a[size];
	
	int i,j;
	cout<<"<<endi<<Enter Elements : ";
	for(i=0;i<size;i++){
		cout<<"Enter Element for A[i] "<<i<<" :- ";
		cin>>a[i];
	}
	cout<<"Original Array : ";
	for(i=0;i<size;i++){
		cout<<" answer is : "<<a[i];
	}
	cout<< " Odd Elements from Array A : ";
	for(i=0;i<size;i++){
		if(a[i]%2!=0){
			
			cout<<" answer is : "<<a[i];
		}
	}
}
