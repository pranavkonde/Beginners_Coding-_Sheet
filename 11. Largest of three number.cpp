#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c)
	{
		cout<<"a is greator"<<endl;
	}
	else if(b>a && b>c)
	{
		cout<<"b is greator"<<endl;
	}
	else
	{
		cout<<"c is greator"<<endl;
	}
	return 0;
}
