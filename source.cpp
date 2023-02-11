#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	cout << "Input first number" << endl;
	int k;
	cin >> k;
	unsigned int a = 0x01;
	a = a << k;
	cout << "Input second number" << endl;
	int n;
	cin >> n;
	unsigned int b = 0x01;
	b = b << n;
	int c = a|b;
	cout << c;
	return 0;
}
