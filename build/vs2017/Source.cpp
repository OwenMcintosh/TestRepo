#include <iostream>
#include <cmath>
#include <vector>
#include <chrono>

using namespace std;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using the_clock = std::chrono::steady_clock;

int main() {
	srand(time(0));

	std::vector<char> text;

	the_clock::time_point startTime = the_clock::now();

	for (int i = 0; i < 10000; i++) {
		do {

			char possible = char(rand() % 256);
			switch (text.size()) {

			case 0:

				if (possible == 'h') {
					text.push_back(possible);
				}

				break;

			case 1:

				if (possible == 'e') {
					text.push_back(possible);
				}

				break;

			case 2:

				if (possible == 'l') {
					text.push_back(possible);
				}

				break;

			case 3:

				if (possible == 'l') {
					text.push_back(possible);
				}

				break;

			case 4:

				if (possible == 'o') {
					text.push_back(possible);
				}

				break;

			case 5:

				if (possible == ' ') {
					text.push_back(possible);
				}

				break;

			case 6:

				if (possible == 'w') {
					text.push_back(possible);
				}

				break;

			case 7:

				if (possible == 'o') {
					text.push_back(possible);
				}

				break;

			case 8:

				if (possible == 'r') {
					text.push_back(possible);
				}

				break;

			case 9:

				if (possible == 'l') {
					text.push_back(possible);
				}

				break;

			case 10:

				if (possible == 'd') {
					text.push_back(possible);
				}

				break;

			}

		} while (text.size() != 11);

		if (i != 10000) {
			text.clear();
		}
	}
	the_clock::time_point endTime = the_clock::now();
	auto time_taken = duration_cast<milliseconds>(endTime - startTime).count();
	cout << "It took " << time_taken << " ms." << endl;


	for (auto i : text) {

		cout << i;

	}



}