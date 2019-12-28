#include <cstdlib>
#include <iostream>

using namespace std;

// Be aware this code requires at least std11!

int main(){
	int n;
	cout << "How many numbers to sort? ";
	cin >> n;

	// Array to hold sorted values
	int values[n];

	// Populate array
	for (int count = 0; count < n; count++){
		cin >> values[count];
	}

	// Sort array
	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n; j++){
			if (values[j] > values[j+1]){
				swap(values[j],values[j+1]);
			}
		}
	}

	// Output array
	for (int count = 0; count < n; count ++){
		cout << values[count] << " ";
	}
	cout << endl;

	return 0;
}
