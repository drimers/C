#include <iostream>
using namespace std;

const int broiStudenti = 2;
const int n = 100;

struct students {
	char Imena[21];
	char ID[10];
	char specialnost[21];
	int year;
};

void write(students Students[n]);
void print(students Students[n]);

int i;
int main() {

	students Students[n];
	
	
	write(Students);
	cout << "##############################################" << endl;
	print(Students);

	system("pause");
	return 0;
}

void write(students Students[n]) {
	for (i = 0; i < broiStudenti; i++) {
		cin.get();
		cout << "Vavedete dve imena : ";
		cin.getline(Students[i].Imena, 21);
		cout << "Vavedete ID na student ; ";
		cin.getline(Students[i].ID, 10);
		cout << "Vavedete specialnost na studenta : ";
		cin.getline(Students[i].specialnost, 21);
		cout << "Vavedete godina : ";
		cin >> Students[i].year;
		cout << endl;
	}
};

void print(students Students[n]) {
	for (int i = 0; i < broiStudenti; ++i) {
		cout << Students[i].Imena << endl;
		cout << Students[i].ID << endl;
		cout << Students[i].specialnost << endl;
		cout << Students[i].year << endl;
		cout << endl;
	}
};

