#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {

    string input;
    cin >> input;

    stringstream ss(input);

    int curTeam = input[0]; 
    int countDanger = 1;

    for (size_t i = 1; i < input.size(); i++ ) {

    	if (input[i] == curTeam) {
    		countDanger += 1;
    		if (countDanger == 7) {
    			cout << "YES";
    			return 0;
    		}
    	} else {
    		curTeam = input[i];
    		countDanger = 1;
    	}

    }

    cout << "NO";
    return 0;
}
