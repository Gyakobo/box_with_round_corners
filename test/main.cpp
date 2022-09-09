#include <iostream>
#include <string>
#include <stdio.h>

#include <bitset>
#include <cassert>
#include <map>

using namespace std;

typedef bitset<2> two_bits;

#define c0 0B01

int main() {
	two_bits var[8];

	for (int i=0; i<8; i++) {
		var[i] = c0;
	}

	cout << "Moment of truth" << "\n";
	cout << sizeof(var) << "\n";

	return 0;
}


