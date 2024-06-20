#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t; // testcases
	cin >> t;

	while(t--) {
		int n; // number of containers 

		cin >> n;

		// only one in list means yes all are equal
		if (n != 1) {
			vector<int> containers(n);

			int sumOfAll = 0;

			for (int i = 0; i < n; i++ ) {
				cin >> containers[i]; 
				sumOfAll += containers[i];			
			}

			// Checks if possible for containers to all be even
			if (sumOfAll % n != 0) {
				cout << "NO" << endl;
			} else {
				cout << "YES" << endl;
			}

		} else {
			cout << "YES" << endl;
		}
		
	}

}