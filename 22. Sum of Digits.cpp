#include<iostream>
using namespace std;
int main()
{
	int a,sum=0,temp;
	cin>>a;
	while(a>0)
	{
		temp=a%10;
		sum=sum+temp;
		a=a/10;
	}
	cout<<sum;
	return 0;
}
