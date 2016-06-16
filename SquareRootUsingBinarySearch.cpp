#include<iostream>
using namespace std;

double sq(double n){
	if(n<0) return -1;
	if(n==0 || n==1) return n;
	double p=0.00001, start=0, end=n;
	if(n<1) end=1;
	while(end-start>p){
		double mid=(end+start)/2;
		double midsq=mid*mid;
		if(midsq==n) return mid;
		else if(midsq<n) start=mid;
		else end=mid;
	}
	return ((start+end)/2);
}

int main(void){
	double n;
	cin>>n;
	cout<<sq(n)<<endl;
	return 0;
}
