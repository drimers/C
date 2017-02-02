#include <iostream>
using namespace std;

const int n = 10;
int *args;

void print(int  arr[n]) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
}


void replace(int arr[n]) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == 3 || arr[i] == 1)
			arr[i] = 5555;

		//cout << arr[i] << endl; // raboti
		args = arr;
	}
	return print(args);

}

int main() {
	int ar[n];

	for (int i = 0; i < n; i++) {
		cout << " vavedete chisla : ";
		cin >> ar[i];
	}
	int *arrr = ar;
	//arrr = ar;
		//int *arrg[n] = ar[i];
	replace(arrr);
	//	print(ar);

	system("pause");
	return 0;

}