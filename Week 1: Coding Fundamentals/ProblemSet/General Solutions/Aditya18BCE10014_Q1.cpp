#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin>>t;
    
    
    while(t--)
    {
        int n;
        cin>>n;
        int last_digit =  n%10;
        int first_digit=0;
        while(n>0)
        {
            first_digit = n%10;
            n=n/10;
        }

        
        cout<<first_digit+last_digit<<endl;
	}
	return 0;
}
