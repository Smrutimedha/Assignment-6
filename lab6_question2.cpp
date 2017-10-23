#include <iostream>
using namespace std;

int main() {
	int a,b;
	int *p;
	p=&a;
	b=*p;
	cout<<"value of a is: "<<a;
	cout<<"value of b is: "<<b;
	cout<<"value of c is: "<<p;
	return 0;
}
