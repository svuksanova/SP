//gi sodrzhi site standardni biblioteki
#include <bits/stdc++.h>
using namespace std;

//Од стандарден влез се читаат елементите на една матрица (A), составена од цели броеви. Прво се читаат бројот на редици N и
//бројот на колони M на матрицата (N, M < 120), а потоа и самите елементи на матрицата.
//Да се испечати колку индексни броеви има во секоја колона поединечно.
//Индексен број е број чија вредност е идентична со вредноста што се добива со спојување на индексот од редицата и колоната на елементот.
//Помош: Индексен елемент: вредноста на елементот Aij е иста со ij како број
// - ако i=10, j=31, елементот Aij треба да има вредност 1031 за да биде индексен број


void printResult(int array[120][120], int rows, int columns) {

    for (int j=0; j<columns; j++) {
        int counter=0;
        int mergedNum=0;

        for (int i=0; i<rows; i++) {

            string merge = to_string(i)+to_string(j);
            mergedNum=stoi(merge);

            if (array[i][j]==mergedNum) {
                counter++;
            }
        }

        cout<<counter<<endl;
    }
}

int main() {
    int A[120][120];
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