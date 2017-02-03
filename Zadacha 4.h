/*Задача 4
Да се дефинират функции за:
— записване на стойности в елементите на масив от даден брой цели числа по
следния начин: в първия елемент се записва число, прочитано от клавиатурата, а
във всеки елемент след първия се записва стойност с четири по-малка от тази на
предхождащия го елемент;
— преброяване на отрицателните елементи на масив от цели числа.
Да се напише програма, която конструира чрез първата от горните
функции масив от 15 цели числа, извежда го на един ред от екрана и съобщава броя
на отрицателните му елементи.
Примерно решение на тази задача има във файла progr_izpit_primer_4.cpp.
*/

#include <iostream>
using namespace std;

const int n = 10;
int arr[n], i;

void write(int ar[], int len);
void count(int ar[], int len);

int main() {
	write(arr, n);
	for (i = 0; i < n; i++) {
		cout << arr[i] << " " ;
	}
	count(arr, n);

	system("pause");
	return 0;
}

void write(int ar[], int len) {
	cout << "vavedete parvia element : ";
	cin >> ar[0];
	for (i = 1; i < len; ++i) {
		ar[i] = ar[i - 1] - 4;
	}
}

void count(int ar[], int len) {
	int count = 0;
	for (i = 0; i < len; i++) {
		if (ar[i] < 0) {
			count++;
		}
	}
	cout << endl;
	cout << " Chisla < 0 : " << count << endl;
}