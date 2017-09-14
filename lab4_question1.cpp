#include <iostream>
#include<cmath>
using namespace std;


double power(double b,double e);
int main() {
    
    double b,e,p=0.0;
    cout<<"enter base and exponent\n";
    cin>>b>>e;
    p=power( b,e);
    cout<<"power of "<<b<<'^'<<e<<" is "<<p;
	return 0;
}

double power(double b,double e)
{
	return(pow(b,e));
}
