#include<bits/stdc++.h>
using namespace std;

bitset<10020> N;

int CountSetBit(int n)
{
	int c=0;
	for(int i=0; i<15; i++)
		if((n>>i)&1) c++;
	return c;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for(int i=1; i<10001; i++)
		N[i+CountSetBit(i)] = 1;
	int t, n;
	cin >> t;
	while(t--){
	    cin >> n;
	    cout << (!N[n]) << endl;
	}
	return 0;
}