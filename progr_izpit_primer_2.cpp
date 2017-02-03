/* Файл: progr_izpit_primer_2.cpp
   Примерно решение на Задача 2
   от файла с примерни изпитни задачи
   за изпита по Програмиране (C++)
   със спец. Информатика, задочно, I курс
   на 05.02.2017 година.
   Подготвил: Кирил Иванов
*/
#include <iostream>
using namespace std;
void Write(long ar[], short len) {
    short counter=0;
    for(short i=0; i<len; ++i) {
        cout<<ar[i]<<" ";
        ++counter;
        if(counter%4 == 0) {
            cout<<endl;
            counter=0;
        }
    }
    cout<<endl;
}
short Count(long ar[], short len, long div1, long div2) {
    short counter=0;
    for(short i=0; i<len; ++i) 
        // counter += ar[i]%div1 == 0 && ar[i]%div2 == 0; // или следващия ред
        if( ar[i]%div1 == 0 && ar[i]%div2 == 0 ) ++counter;
    return counter;
}
int main(){
    long array[] = {1,2,3,4,5,6,7,8,9,10,12,18,24,25,27};
    const short length = sizeof(array) / sizeof(array[0]);
    Write(array,length);
    cout<<"Count: "<<Count(array,length,2,3)<<endl;
    
    system("pause");
    return 0;
}
