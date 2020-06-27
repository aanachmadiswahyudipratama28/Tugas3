#include <iostream>
using namespace std;

int main(){
	int x, *y, **z;
	x=35;
	y=&x;
	z=&y;
	cout<<*y<<endl;
	cout<<**z;
}
