#include <iostream>
using namespace std;

const int n = 10;
int ar[n];

void write(int arr[n]);
void print(int  arr[n]);
void replace(int arr[n]);

int main() {

	write(ar);
	replace(ar);
	print(ar);

	system("pause");
	return 0;
}

void write(int arr[n]) {
	for (int i = 0; i < n; i++) {
		cout << " vavedete chisla : ";
		cin >> ar[i];
	}
}

void replace(int arr[n]) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == 3 || arr[i] == 1)
		arr[i] = 5555;
	}
}

void print(int  arr[n]) {
	for (int i = 0; i < n; i++)
	cout << arr[i] << endl;
}