#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	cout << "input first number" << endl;
	int A;
	cin >> A;
	cout << "input second number" << endl;
	int n;
	cin >> n;
	unsigned int b = 0x01;
	b = b << n;
	int c = A&b;
	cout << c;
	return 0;
}
