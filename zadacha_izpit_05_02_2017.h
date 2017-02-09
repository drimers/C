////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

const int n = 10;
int i, R, arr[n];

void write(int ar[], int size, int num);
void print(int ar[], int size);


int main() {
	cout << "Vavedete chisla : ";

	write(arr, n, R);

	print(arr, n);

	system("pause");
	return 0;
}

void write(int ar[], int size, int num) {
		for (i = 0; i < size; i++) {
			cin >> num;
			if (num % 2 != 0) {
				ar[i] = num;
				cout <<  "index [" << i << "]" << endl;
			}
			else {
				i--;
			}
		}
	}


	void print(int ar[], int size) {
		for (i = 0; i < size; i++) {
			if (ar[i]  >= i + 1 ) {
				cout << ar[i] << " ";
			}
		}
	}