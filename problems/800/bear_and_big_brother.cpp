#include <iostream>

using namespace std;

int main() {

	int a, b;

	cin >> a >> b;

	int years = 0; // How many years before he is bigger than his brother

	while(a <= b) {

		a *= 3;
		b *= 2;
		years += 1;
	}

	printf("Years: %d\n", years);

}