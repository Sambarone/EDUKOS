#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b;
	cout<<"Unesi prvi broj: ";
	cin>>a;
	cout<<"Unesi drugi broj: ";
	cin>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a je "<<a<<" dok je b "<<b<<endl;
	
	return 0;
}
