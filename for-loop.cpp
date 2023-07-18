#include<iostream>
using namespace std;
int main(){
	int num=0;
	int n;
	for(int i=1; i<=5; i++){
		cout<<"Enter a number to check greatest number:";
		cin>>n;
		if(n>num){
			num=n;
		}
	}
	cout<<"Greatest number is: "<<num;
	return 0;
}

	
