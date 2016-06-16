#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, a;
	double h, m;
	cin >> t;
	while(t--){
	    cin >> h >> m;
	    m = m==60?0:m;
	    h = h==12?0:h;
	    a = abs(30*h-5.5*m);
	    if(360-a<a) a = 360-a-1;
	    cout << a << endl;
	}
	return 0;
}