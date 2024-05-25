#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {

    string input;
    //cout << "type:";
    cin >> input;

    vector<int> numbers;
    stringstream ss(input);
    string temp;

    while (getline(ss, temp, '+')) {
        numbers.push_back(stoi(temp));

    }

    for (size_t i = 0; i < numbers.size() - 1; i++ ) {
        bool wasSwap = false;

        for ( size_t j = 0; j < numbers.size() - 1 - i; j++) {

            if (numbers[j] > numbers[j + 1]) {

                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                wasSwap = true;

            }

        }

        if (!wasSwap) {
            break;
        }
    }


    string result;

    for (size_t i = 0; i < numbers.size(); i++) {
        result += to_string(numbers[i]);
    
        if (i < numbers.size() - 1) {
            result += "+";
        }
    }

    cout << result << endl;

    return 0;
}
