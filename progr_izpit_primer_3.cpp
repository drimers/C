/* Файл: progr_izpit_primer_3.cpp
   Примерно решение на Задача 3
   от файла с примерни изпитни задачи
   за изпита по Програмиране (C++)
   със спец. Информатика, задочно, I курс
   на 05.02.2017 година.
   Подготвил: Кирил Иванов
*/
#include <iostream>
using namespace std;
void Read(long ar[], short len) {
    for(short i=0; i<len; ++i) {
        cout<<"array["<<i<<"]: ";
        cin>>ar[i];
    }
}
void Up(long ar[], short len) {
    for(short i=0; i<len; ++i) 
        if( ar[i]%2 == 0 ) ar[i] += 7;
}
int main(){
    long array[10];
    Read(array,10);
    Up(array,10);
	for(short i=0; i<10; ++i) cout<<array[i]<<" ";
	cout<<endl;
    
    system("pause");
    return 0;
}
