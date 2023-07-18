#include <iostream>
using namespace std;
int main() {
	int my_num=9;
	int flag=1;
	int num;
	 while(flag==1){
	cout<<"Guess a number:";
	cin>>num;
	if(num==my_num){
		cout<<"correct guess"<<endl;
	}
	else{
		cout<<"wrong guess"<<endl;
	}
		cout<<"Press 1 to continue or 0 to exit:";
		cin>>flag;
}}
