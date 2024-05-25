#include <unordered_set>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {

    string input;
    cout << "type:";
    cin >> input;

    stringstream ss(input);

	unordered_set<int> mySet;

	int distinct_letters = 0;

	for (char c : input) {

		if (mySet.find(c) == mySet.end()) {
			distinct_letters += 1;
			mySet.insert(c);
		}

	}

	if (distinct_letters % 2 == 0) {
		cout << "CHAT WITH HER!" << endl;
	} else {
		cout << "IGNORE HIM!" << endl;
	}

}
