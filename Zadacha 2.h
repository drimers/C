/*Задача 2
Да се дефинират функции за :
— извеждане на масив от цели числа, като на един ред от екранния прозорец се
извеждат по 4 (четири)елемента(последният ред може да бъде с по - малко
	елементи) без допълнителни текстове;
— намиране на броя на елементите от даден масив от цели числа, които се
делят едновременно на два дадени делителя.
Да се напише програма, която инициализира масив от естествени числа и
чрез горните функции го извежда и съобщава броя на елементите в него, които се
делят едновременно и на 2, и на 3. (Обработките да не зависят от броя на елементите в инициализацията.)
	Примерно решение на тази задача има във файла progr_izpit_primer_2.cpp.
	*/
#include <iostream>
using namespace std;

int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
int i;
void write(int ar[], int len);
void count(int ar[], int len, int n1, int n2);


int main() {
	const short length = sizeof(arr) / sizeof(arr[0]);
	cout << "razmera na masiva e : " << length << endl;
	write(arr, length);

	count(arr, length, 2, 3);

	system("pause");
	return 0;
}

void write(int ar[], int len) {
	short count = 0;
	cout << "izvejdane na masiva" << endl;
	for (i = 0; i < len; i++) {
		count++;
		cout << ar[i] << " ";
		if (count % 4 == 0) {
			cout << endl;
			count = 0;
		}
	}
	cout << endl;
}

void count(int ar[], int len, int n1, int n2) {
	int count = 0;
	for (i = 0; i < len; i++) {
		if (ar[i] % n1 == 0 && ar[i] % 3 == 0) {
			count++;
		}
	}
	cout << "Broi chisla koito se delqt na 2 i 3 : " << count << endl;
}
