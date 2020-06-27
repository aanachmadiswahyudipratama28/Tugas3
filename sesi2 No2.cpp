#include <iostream>
using namespace std;

int main (){
	int p[100], n, i, sum=0, *q;
	cout<<"Jumlah Bilangan : ";
	cin>>n;
	q= &sum;
	for (i=0; i<n; i++){
		cin>>p[i];
		sum = sum + p[i];
	}
	cout<<"Hasil Penjumlahan : "<<*q;
	
	return 0;
}
