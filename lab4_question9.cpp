#include <iostream>
using namespace std;

int factorial(int n);

int main() {
	int n,f;
	cout<<"enter a number\n";
	cin>>n;
	f=factorial(n);
	cout<<"factorial of the number"<<n<<" is "<<f;
	return 0;
}

int factorial(int n)
{
	int fac=1,i;
	for(i=1;i<=n;i++)
            {
            	fac=fac*i;
            }
           
            return fac;
            

	

}