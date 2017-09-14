#include <iostream>
using namespace std;


int sum(int a,int b);
int main() {
    int a,b;
    cout<<"enter the interval\n";
    cin>>a>>b;
    cout<<"sum of even or odd is "<<sum(a,b);
	return 0;
}

int sum(int a,int b)
{
	int s=0;
	for(int i=a;i<=b;i=i+2)
	{
		
		    s=s+i;
		
	}
	return s;
}
