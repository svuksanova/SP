#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;
#include  <cmath>

//Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
//Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност)
//на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата. Ако матрицата
//има парен број колони, се менува вредноста на средните два елемента. Средниот/те елемент/и влегува/ат во сумите
//(при непарен број на колони, средниот елемент влегува во двете суми!). Да се испечати на екран променетата матрица.


void printResult(int array[100][100], int row, int column) {

    for (int i=0; i<row; i++) {
        if (column%2==0) { //za parni
            //12|34
            //mid1=2
            //mid2=3

            int mid1=column/2-1; //elementot 2
            int mid2=column/2; //elementot 3 go chuva
            int sum1=0;
            int sum2=0;

            for (int j=0; j<=mid1; j++) {
                sum1=sum1+array[i][j];
            }

            for (int k=mid2; k<column; k++) {
                sum2=sum2+array[i][k];
            }

            array[i][mid1]=abs(sum1-sum2);
            array[i][mid2]=abs(sum1-sum2);
        }else { //za neparni
            //1|2|3  -> sredniot e 2, kaj neparni sekogash imame eden sreden
            //mid1=2

            int mid1=column/2;
            int sum1=0;
            int sum2=0;

            for (int j=0; j<=mid1; j++) {
                sum1=sum1+array[i][j];
            }

            for (int k=mid1; k<column; k++) {
                sum2=sum2+array[i][k];
            }

            array[i][mid1]=abs(sum1-sum2);
        }
    }

    for (int i=0; i<row; i++) {
        for (int j=0; j<column; j++) {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int array[100][100];
    int m,n;

    cin>>m>>n;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin>>array[i][j];
        }
    }

    printResult(array, m,n);
    return 0;
}