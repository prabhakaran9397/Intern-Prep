#include<bits/stdc++.h>
using namespace std;

void reverse(string &a)
{
    int n = a.size();
    for(int i=0; i<n/2; i++)
        swap(a[i], a[n-i-1]);
}

string add(string &a, string &b)
{
    reverse(a); reverse(b);
    int a_n = a.size();
    int b_n = b.size();
    string c;
    int n = max(a_n, b_n);
    int borrow = 0, x;
    for(int i=0; i<n; i++){
        x = (i<a_n?a[i]:48)+(i<b_n?b[i]:48)+borrow-96;
        c.push_back((x%10)+48);
        borrow = x/10;
    }
    for(;borrow;borrow/=10) c.push_back((borrow%10)+48);
    reverse(c);
    return c;
}

int main(void)
{
	int t;
	cin >> t;
	string a, b;
	while(t--){
	    cin >> a >> b;
	    cout << add(a, b) << endl;
	}
	return 0;
}