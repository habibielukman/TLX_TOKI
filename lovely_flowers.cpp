#include <bits/stdc++.h>

using namespace std;

int main(){
	int p,q;
	cin >> p >> q;
	if((p*p+q*q+1)%4!=0){
		cout << -1;
	}else{
		cout << (p*p+q*q+1)/4;
	}
	cout << endl;
	return 0;
}
