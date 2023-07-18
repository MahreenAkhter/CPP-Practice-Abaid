#include<iostream>
using namespace std;
int main()
{
	int a=20;
	int b=18;
	int c=15;
	if(a<b&&c<b)
	{
		cout<<"B is greater then A and C";
	}
	else if(b<a&&c<a)
	{
		cout<<"A is greater then B and C";
	}
	else if(a<c&&b<c)
	{
		cout<<"C is greater then A and B";
	}
	else{
		cout<<"Error";
	}
}
