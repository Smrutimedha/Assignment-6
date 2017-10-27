#include <iostream>
using namespace std;
int main(){
int a=2;
int *p1=&a;
double b=3.141;
double *p2=&b;
char c='t';
char *p3=&c;
cout<<"Size of integer variable is "<<sizeof(a)<<"\n And size of its pointer is "<<sizeof(p1)<<"\n\n";
cout<<"Size of decimal variable is "<<sizeof(b)<<"\n And size of its pointer is "<<sizeof(p2)<<"\n\n";
cout<<"Size of character variable is "<<sizeof(c)<<"\n And size of its pointer is "<<sizeof(p3)<<"\n\n";
}
