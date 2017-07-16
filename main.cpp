#include<iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, q;
	int cont = 1;
	while(cin >> n >> q && n != 0 && q != 0){
		int *marmores = new int[n];
		int *palpite = new int[q];
		for(int i = 0; i < n; i++){
			cin >> marmores[i];
		}
		sort(marmores, marmores+n);
		for(int i = 0; i < q; i++){
			cin >> palpite[i];
		}
		cout << "CASE# " << cont++ << ":\n";
		for(int i = 0; i < q; i++){
			for(int j = 0; j < n; j++){
				
				if(palpite[i] < marmores[j] || (j == n-1 && palpite[i] != marmores[j])){
					cout << palpite[i] << " not found" << endl;
					break;
				}
				else if(palpite[i] == marmores[j]){
					cout << palpite[i] << " found at " << j+1 << endl;
					break;
				}
			}
		}
		delete [] marmores;
		delete [] palpite;
	}
}
