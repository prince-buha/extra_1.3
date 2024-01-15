#include<iostream>
using namespace std;

int  main(){
	int i;
	char c1[10]={'H','e','l','L','o','w','o','r','L','D'};
	for(i=0;i<12;i++){
		if(c1[i]<97){
			c1[i]=c1[i]+32;
			cout<<" "<<c1[i];
		}else{
			c1[i]=c1[i]-32;
			cout<<" "<<c1[i];
		}
	}
	return 0;
	
}
