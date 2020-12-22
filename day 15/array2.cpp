#include <bits/stdc++.h>

using namespace std;

int main(){
	int t1,t2;
	cin >> t1 >> t2;
	int nums[t1][t2];
	for(int i=0;i<t1;i++){
		for(int j = 0;j<t2;j++){
			cin >> nums[i][j];
		}
	}

	for(int i=0;i<t2;i++){
		for(int j=0;j<t1;j++){
			cout << nums[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}