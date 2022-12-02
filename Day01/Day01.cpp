#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector <int> sums;
	string line;
	int sum = 0;
	ifstream File("calories.txt");

	while (getline(File, line)) {
		if (line.empty()) {
			sums.push_back(sum);
			sum = 0;
		}
		else {
			sum += stoi(line);
		}
	}

	cout << *max_element(sums.begin(), sums.end()) << endl; //Answer 65912
	sort(sums.begin(), sums.end(), greater<int>());
	cout << sums[0] + sums[1] + sums[2] << endl; //Answer 195625
	return 0;
}