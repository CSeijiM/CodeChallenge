#include<bits/stdc++.h>

using namespace std;

int main(){
	int l1a1,l2a1,l1a2,l2a2;

	cin >> l1a1 >> l2a1;
	cin >> l1a2 >> l2a2;

	if((l1a1*l2a1)>(l1a2*l2a2)){
	 	cout << "Primeiro";
	}
	else if((l1a1*l2a1)<(l1a2*l2a2)){
		cout << "Segundo";
	}
	else 
		cout << "Empate";

	return 0;
}
