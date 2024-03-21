#include <iostream>
using namespace std;

int main()
{
	int arr[10];
	int number;


	cout << "Enter 10 elements: " << endl;
	for (int i = 0; i < size(arr); i++) {
		cout << i + 1 << ". ";
		cin >> arr[i];
	}

	bool flag = true;
	int count = 0;

	while (flag = true) {

		cout << "Which number you want search: " << endl;
		cin >> number;

		for (int i = 0; i < size(arr); i++) {
			if (number == arr[i]) {
				cout << "Number placed on " << i + 1 << " position" << endl;
				flag = false;
				count++;
				return 0;

	
			}


		}
		if (count == 0) {
			cout << "Number not found! ERORR 404 :(";
		}
	}

}
