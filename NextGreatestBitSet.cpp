#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int t, s, i, j, nos;
	string n, c;
	cin >> t;
	while(t--){
	    cin >> n;
	    c = n;
	    s = n.size();
	    nos=1;
	    for(i=s-1; i>-1; i--)
	        if(i-1>-1 && n[i-1]<n[i]){
	            for(j=s-1; j>i && n[i-1]>=n[j]; j--);
	            swap(n[i-1], n[j]);
	            sort(n.begin()+i, n.end());
	            break;
	        }
	    if(c==n) cout << "not possible\n";
	    else cout <<n<<"\n";
	}
	return 0;
}