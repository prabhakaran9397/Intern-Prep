#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, s, d, diff, i, size;
	string n;
	cin >> t;
	while(t--){
	    cin >> s >> d;
	    diff = 0;
	    if(d*9<s){
	        cout << -1 << endl;
	    } else {
	        n = to_string((int)(pow(10,d)-1));
	        diff = d*9 - s;
	        size = n.size();
	        for(i=0; i<size && diff; i++){
	            if(diff<9){
	                n[i] = n[i]-diff;
	                diff = 0;
	            } else {
	                if(i==0){
    	                n[i] = n[i]-8;
    	                diff -= 8;
	                } else {
	                    n[i] = n[i]-9;
    	                diff -= 9;
	                }
	            }
	        }
	        cout << n << endl;
	    }
	}
	return 0;
}