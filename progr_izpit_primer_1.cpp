/* Файл: progr_izpit_primer_1.cpp
   Примерно решение на Задача 1
   от файла с примерни изпитни задачи
   за изпита по Програмиране (C++)
   със спец. Информатика, задочно, I курс
   на 05.02.2017 година.
   Подготвил: Кирил Иванов
*/
#include <iostream>
using namespace std;
#include <cmath>
void Write(double ar[], short len) {
    for(short i=0; i<len; ++i)
        cout<<i<<"--::--"<<ar[i]<<endl;
}
short Index(double ar[], short len, double num) {
    short i=0;
    while(i<len && 1.0<fabs(ar[i]-num)) ++i;
    if(i<len) return i;
    return -1;
}
int main(){
    double array[7];
    cout<<"Enter array:\n";
    for(short i=6; 0<=i; --i) {
        cout<<"element["<<i<<"]: ";
        cin>>array[i];
    }
    double R;
    cout<<"R: ";
    cin>>R;
    Write(array,7);
    short ind = Index(array,7,R);
    if( ind == -1 ) cout<<"No element\n";
    else cout<<"Index: "<<ind<<endl;
    
    system("pause");
    return 0;
}
