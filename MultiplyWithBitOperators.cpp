#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b;
	while(b){
		if(b & 1)
			c += a;
		a <<= 1;
		b >>= 1;
	}
	cout << c << endl;
	return 0;
}