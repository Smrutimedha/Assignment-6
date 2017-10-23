#include <iostream>
using namespace std;

int main() {
int i=2;
char c='a';
double d=2.3;
float f=5;
int *p1=&i;
char *p2=&c;
double *p3=&d;
float *p4=&f;
cout<<"the size of the int variable is: <<sizeof(i)\n";
cout<<"the size of the char variable is: <<sizeof(c)\n";
cout<<"the size of the double variable is: <<sizeof(d)\n";
cout<<"the size of the float variable is: <<sizeof(f)\n";

	return 0;
}
