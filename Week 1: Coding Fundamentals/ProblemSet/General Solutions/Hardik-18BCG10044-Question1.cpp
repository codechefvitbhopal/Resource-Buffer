#include<iostream>
using namespace std; 
int main()
{
	int t, last_digit, start_digit, sum; 
	unsigned int n;
	cin>>t;

	while(t--)
	{
		cin>>n;
		last_digit=n%10;
		while(n)
		{
			start_digit=n%10;
			n/=10;	
		}
		sum=last_digit+start_digit;
		cout<<sum<<endl;	
	}
}
