#include <iostream>
using namespace std;

bool pallindrome(int n);

int main() {
    int n;
    cout<<"enter a number\n";
    cin>>n;
    if(pallindrome(n)==true)
        cout<<"the number "<<n<<" is pallindrome";
    else
        cout<<"the number "<<n<<" is not pallindrome";
    return 0;
}


bool pallindrome(int n)
{
	int num,r=0,rev=0;
	num=n;
	while(num>0)
	{
		r=num%10;
		rev=(rev*10)+r;
		num=num/10;
	}
	if(n==rev)
	    return true;
	else
	    return false;


}