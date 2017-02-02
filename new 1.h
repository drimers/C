const int m = 5;
int n[m];
int i = 0;

int number(n[i]) {

	while (i < m) {
		cout << *(n + i) << endl;
		++i;
	}
	return n;
}

int main() {
	cout << "Vavedete pet chisla " << endl;
	for (int i = 0; i < 5; i++) {
		cin >> number(n);
	}

	system("pause");
	return 0;
}
