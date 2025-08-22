//gi sodrzhi site standardni biblioteki
#include <bits/stdc++.h>
using namespace std;

//Од стандарден влез се читаат елементите на
//една матрица (A), составена од природни броеви. Прво се читаат бројот на редици N и бројот на колони M на матрицата
//(N, M < 100), а потоа и самите елементи на матрицата.
//За секоја редица, да се испечати индексот на редицата и бројот на штосни броеви во таа редица во формат
//indeks_na_redica : broj_na_stosni_broevi_vo_taa_redica(види тест пример).
//Штосен број е број чија парност е иста со парноста на збирот од индексите на редицата и колоната на елементот.


//Помош: Штосен елемент: парноста на елементот Aij е иста со парноста на i + j
//- ако i=11, j=21, а елементот Aij има вредност 14, тогаш тој е штосен број бидејќи 11 + 21 = 32 што е парен број, а и 14 е исто така парен број


void printResult(int array[100][100], int rows, int columns) {

    for (int i=0; i<rows; i++) {

        int counter=0; // num of shtosni numbers

        for (int j=0; j<columns; j++) {
            int sum=0;

            sum=i+j;
            if ((array[i][j]%2==0 && sum%2==0) || (array[i][j]%2!=0 && sum%2!=0)) {
                counter++;
            }
        }

        cout<<i<<": "<<counter<<endl;
    }
}

int main() {
    int A[100][100];
    int n,m;
    cin>>n>>m;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>A[i][j];
        }
    }

    printResult(A,n,m);
    return 0;
}