#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b;
	while(b){
		c = a & b;
		a ^= b;
		b = c << 1;
	}
	cout << a << endl;
	return 0;
}