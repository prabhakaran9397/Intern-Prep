#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, n, i;
	cin >> t;
	while(t--){
	    cin >> n;
	    for(i=13; i>-1; i--)
	        cout<<((n>>i)&0x01);
	    cout << endl;
	}
	return 0;
}
