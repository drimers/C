/* Файл: progr_izpit_primer_4.cpp
   Примерно решение на Задача 4
   от файла с примерни изпитни задачи
   за изпита по Програмиране (C++)
   със спец. Информатика, задочно, I курс
   на 05.02.2017 година.
   Подготвил: Кирил Иванов
*/
#include <iostream>
using namespace std;
void Construct(long ar[], short len) {
    cout<<"First element (integer): ";
    cin>>ar[0];
    for(short i=1; i<len; ++i) ar[i] = ar[i-1]-4;
}
short Count(long ar[], short len) {
    short counter=0;
    for(short i=0; i<len; ++i) 
        counter += ar[i]<0;
    return counter;
}
int main(){
    long array[15];
    Construct(array,15);
    for(short i=0; i<15; ++i) cout<<array[i]<<" ";
	cout<<endl;
	cout<<"Count: "<<Count(array,15)<<endl;
    
    system("pause");
    return 0;
}
