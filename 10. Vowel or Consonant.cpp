#include<iostream>
using namespace std;
int main()
{
	char a;
	cin>>a;
	if( a=='a' || a=='e' || a=='i' || a=='o' || a=='u'|| a=='A' || a=='E' || a=='O' || a=='U' || a=='I' )
	{
		cout<<"Vowel"<<endl;
	}
	else
	{
		cout<<"Consonant"<<endl;
	}
	return 0;
}
