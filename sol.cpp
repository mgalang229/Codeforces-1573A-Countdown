#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n;
	string s;
	cin >> n >> s;
	int cnt=0;
	for(int i=0; i<n-1; ++i)
		cnt+=s[i]!='0';
	ll sum=0;
	for(int i=n-1; i>=0; --i) {
		sum+=(s[i]-'0');
	}
	cout << (ll)sum+cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while (t--)
		solve();
}
