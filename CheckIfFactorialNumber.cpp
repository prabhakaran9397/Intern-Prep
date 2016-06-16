#include<bits/stdc++.h>
using namespace std;

bool checkfact(int n)
{
    if(n==1) return 1;
    int i, f=1;
    for(i=2; i<10; i++){
        f*=i;
        if(f==n) return 1;
    }
    return 0;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	int t, n;
	cin >> t;
	while(t--){
	    cin >> n;
	    cout << checkfact(n) << endl;
	}
	return 0;
}