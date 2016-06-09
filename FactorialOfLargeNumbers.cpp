#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, n, i, j, b, x;
	cin >> t;
	string f;
	while(t--){
	    f = "1";
	    cin >> n;
	    b = 0;
	    for(i=1; i<=n ;i++){
	        for(j=0; j<f.size(); j++){
	            x = (f[j]-'0')*i + b;
	            f[j] = (x%10)+'0';
	            b = x/10;
	        }
	        for(; b; b/=10) f.push_back((b%10)+'0');
	    }
	    reverse(f.begin(), f.end());
	    cout << f << endl;
	}
	return 0;
}