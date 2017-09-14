#include <iostream>
using namespace std;

int reverse(int n);

int main() {
	int n,rev;
	cout<<"enter a nuber\n";
	cin>>n;
	rev=reverse(n);
	cout<<"the reverse of the "<<n<<" is "<<rev;
	return 0;
}

int reverse(int n)
{  
	int rev=0,r=0;
	while(n>0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	            
	}
    return rev;

}