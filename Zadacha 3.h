/*Задача 3
Да се дефинират функции за:
— въвеждане на масив от даден брой цели числа, като за всеки елемент се
съобщава индекса му и след това се прочита стойността му;
— увеличаване със седем на всички четни елементи на масив от цели числа.
Да се напише програма, която чрез горните функции въвежда и променя
масив от десет цели числа и след промяната го извежда на един ред на екрана.
Примерно решение на тази задача има във файла progr_izpit_primer_3.cpp.
*/
#include <iostream>
using namespace std;

const short n = 10;
int arr[n], i;

void write(int ar[], int len);
void sum(int ar[], int len);

int main() {
	write(arr, n);
	sum(arr, n);

	system("pause");
	return 0;
}

void write(int ar[], int len) {
	cout << "Vavedete 10 elementa na arr : " << endl;
	for (i = 0; i < len; i++) {
		cout << "index number [" << i << "] :: ";
		cin >> ar[i];
		cout << endl;
	}
}

void sum(int ar[], int len) {
	for (i = 0; i < len; i++) {
		if (ar[i] % 2 != 0)
		cout << ar[i] << " , ";
		else
		cout << ar[i] + 7 << " , ";
		
	}
}