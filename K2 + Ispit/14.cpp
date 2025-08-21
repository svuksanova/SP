#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;
#include  <cmath>

//Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50).
//Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата колона
//ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица со 2 * N
//редици x N колони..


void printResult(int array[50][50], int row, int column){
    int tmp[row][column/2];

    for (int i=0; i<row; i++) {
        for (int j=column/2; j<column; j++) {
            tmp[i][j-column/2]=array[i][j];
        }
    }

    for (int i=0; i<row; i++) {
        for (int j=0; j<column/2; j++) {
            array[i+row][j]=tmp[i][j];
        }
    }

    for (int i=0; i<row*2; i++) {
        for (int j=0; j<column/2; j++) {
            cout<<array[i][j]<<" ";
        }

        cout<<endl;
    }
}

int main() {
    int array[50][50];

    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n*2; j++) {
            cin>>array[i][j];
        }
    }

    printResult(array, n,n*2);
    return 0;
}