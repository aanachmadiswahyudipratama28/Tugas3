#include <iostream>
using namespace std;

int main(){
	int a,*b, **c;
	a=20;
	b=&a;
	c=&b;
	cout<<*b<<endl;
	cout<<**c;
}
