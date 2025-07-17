#include<iostream>
#include <cstring>
using namespace std;

//Од тастатура во низа се внесуваат N позитивни цели броеви (N <= 100), а потоа се внесува и цел број ind (ind >= 0).

//Да се напише функција sum_pos која ја прима низата, бројот ind (кој претставува индекс во низата) и бројот на валидни елементи во низата.
//Функцијата треба да врати сумата на сите елементи почнувајќи од дадениот индекс ind па се до крајот на низата.
//Ако индексот ind е поголем од Nфункцијата треба да врати 0.

//НАПОМЕНА: Задачата да се реши со помош на покажувачи (без користење на оператор [ ]).

//Пример

//влез:
// 10
// 2 4 6 8 1 3 9 12 33 44
// 6
// излез:
//
// 98
// 98 = 9+12+33+44

int sum_pos(int *array, int ind, int n) {
    if (ind >= n) {
        return 0;
    }

    int index= ind;
    int sum=0;

    for (int i=index; i<n; i++) {
        sum= sum + array[i];
    }

    //ova vo for loop-ot gore, bidejkji bara bez[]
    // Use pointer arithmetic instead of array[]
    // for (int i = ind; i < n; i++) {
    //     sum += *(array + i);
    // }

    return sum;
}

int main() {

    int n;
    cin>>n;

    int array[n];
    for (int i=0; i<n; i++) {
        cin>>array[i];
    }

    int ind;
    cin>>ind;
    if (ind<0) {
        return 0;
    }

    cout<< sum_pos(array, ind, n) <<endl;

    return 0;
}