#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;

// За еден природен број а велиме дека е порамнување на друг природен број b ако и само ако цифрите еднакви на 9 во
// бројот b се заменети со цифрата 7 во бројот а.
// Пример. Бројот 734775 е порамнување на бројот 934795.
// Од стандарден влез се внесуваат непознат број на цели броеви (не повеќе од 100), се додека не се внесе нешто што не
// може да се интерпретира како цел број.
// Ваша задача е да ги отпечатите најмалите 5 од порамнувањата на сите внесени броеви, по редослед од најмалиот кон најголемиот.
// Забелешка: Доколку се внесат помалку од 5 броеви, тогаш печатите толку броеви колку што се соодветно внесени.
// Наоѓањето на порамнувањето на даден број треба да се реализира во посебна рекурзивна функција poramnet(int a).

int poramnet(int x) {

    int result=0;
    int mnozhitel=1;

    while (x>0) {
        int digit=0;

        digit=x%10;
        if (digit==9) {
            digit=7;
        }

        result=result+digit*mnozhitel;
        mnozhitel=mnozhitel*10;
        x=x/10;
    }

    return result;
}

int main() {

    int array[100];
    int number;
    int counter=0;

    while(cin >> number){
        //direktno go poramnuvame i go chuvame
        array[counter++]=poramnet(number);

        if (counter==100) {
            break;
        }
    }

    sort(array, array+counter);

    //pechatenje na najmalite 5 broevi, ili pomalku od 5
    int numbersPrint= counter<5 ? counter : 5;
    for (int i=0; i<numbersPrint; i++) {
        cout<<array[i]<<" ";
    }

    return 0;
}