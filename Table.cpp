#include<iostream>
using namespace std;
int main(){
	int t, s, e;
	cout<<"Enter the number for Table you want: ";
	cin>>t;
	cout<<"Enter the Starting point: ";
	cin>>s;
	cout<<"Enter the End Point: ";
	cin>>e;
	for( ; s<=e; s++){
		cout<<t<<" x "<<s<<" = "<<t*s<<endl; 
	}
}
