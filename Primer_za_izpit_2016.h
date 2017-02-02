#include <iostream>

using namespace std;

/*Опитайте да решите следната задача (а утре ще пратя примерно решение и още задачи):
Да се дефинират функции за:
- извеждане на числов масив, като всеки елемент е сам на ред и във формат <индекс>--::--<стойност>;
- намиране на индекса на първи елемент в числов масив, отличаващ се от дадено число с най-много единица.
С тези функции да се напише програма, която въвежда числов масив от 7 елемента и число R и извежда масива и
индекса на първия елемент във въведения масив, отличаващ се от R с най-много единица.
*/


const int n = 7;
//int arr[n] = { 2,5,6,7,7,2,2,2,9 };
int arr[n];
int i;

void write(int arrey[n]);
void print(int arrey[n]);
void find(int arrey[n]);

int main() {
	write(arr);
	print(arr);
	find(arr);
	system("pause");
	return 0;
}

void write(int arrey[n]) {
	cout << "Vavedete sedem chisla :" << endl;
	for (i = 0; i < n; i++) {
		cin >> arrey[i];
	}
}

void print(int arrey[n]) {
	for (i = 0; i < n; i++) {
		cout << "index [" << i << "] :: " << arr[i] << endl;
	}
}

void find(int arrey[n]) {
	for (i = 0; i < n; i++) {
		if (arrey[i] == i || arrey[i] - 1 == i || arrey[i] + 1 == i) {
			cout << i << endl; break;
		}
	} 
}