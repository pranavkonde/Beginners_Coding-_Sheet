#include<iostream>
using namespace std;
int main()
{
	int divisor,dividend;
	cout<<"Enter divisor: ";
	cin>>divisor;
	cout<<"Enter dividend: ";
	cin>>dividend;
	cout<<"Remainder is: "<<int(divisor%dividend)<<endl;
	cout<<"Quotient is: "<<int(divisor/dividend)<<endl;
	return 0;
}
