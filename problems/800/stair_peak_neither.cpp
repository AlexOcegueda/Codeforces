#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {

	int t;

	cin >> t;

	cin.ignore();

	while (t--) {
		string input;
		getline(cin, input);

		vector<int> numbers;
		stringstream ss(input);
		int num;
		while (ss >> num) {
			numbers.push_back(num);
		}

		if (numbers[0] < numbers[1]) {
			if (numbers[1] < numbers[2]) {
				cout << "STAIR" << endl;
			} else if (numbers[1] > numbers[2]) {
				cout << "PEAK" << endl;
			} else {
				cout << "NONE" << endl;
			}
		} else {
			cout << "NONE" << endl;
		}

	}
   
}
