#include <iostream>
using namespace std;

int main() {
	int arr[10] = {5, 9, 8, 2, 3, 6, 1, 7, 4, 0};

	int minIndex = 0, maxIndex = 0;
	for (int i = 1; i < 10; ++i) {
		if (arr[i] < arr[minIndex]) {
			minIndex = i;
		}
		if (arr[i] > arr[maxIndex]) {
			maxIndex = i;
		}
	}
	int count = abs(maxIndex - minIndex) - 1;
	cout << "Number of elements: " << count << endl;

	return 0;
}
