#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter your year: ";
	cin>>n;
	
	int a[n];
	
	int i;
	
	for(i=0;i<n;i++)
	{
		cout<<"enter a[%d] :"<<i;
		cin>>a[i];
	}  

	if( n % 4 == 0 || n % 100== 0 || n % 400 == 0){
			cout<<"leap year";
		}else{
			cout<<"not leap year";
		}
		cout<<"answer is :"<<n;
		n++;
		
		}
	

