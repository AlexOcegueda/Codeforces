#include <cctype>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {

    string input;
    cout << "type:";
    cin >> input;

    stringstream ss(input);

    input[0] = toupper(input[0]);

    cout << input << endl;


    
}
