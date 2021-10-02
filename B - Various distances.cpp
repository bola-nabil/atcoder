#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;cin >> n;
	vector<long long int>v(n);
	long long int ch = 0,mh = 0,eu = 0;
	for(int i = 0 ; i < n; i++){
	    cin >> v[i];
	    ch = max(ch,abs(v[i]));
	    mh += abs(v[i]);
	    eu += v[i]*v[i];
	}
	cout<<mh<<endl;
	cout<<fixed;
	cout<<setprecision(12)<<sqrt(eu)<<endl;
	cout<<ch<<endl;
	return 0;
}