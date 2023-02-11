#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	cout << "Input a number" << endl;
	int k;
	cin >> k;
	unsigned int a = 0x01;
	a = a << k;
	cout << a << endl;
	return 0;
}
