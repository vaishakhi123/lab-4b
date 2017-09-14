#include <iostream>
using namespace std;


int sum(int n);
int main() {
    int n;
    cout<<"enter the interval\n";
    cin>>n;
    cout<<"sum is "<<sum(n);
	return 0;
}

int sum(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	{
		s=s+i;
	}
	return s;
}
