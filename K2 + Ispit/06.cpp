#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;
#include  <cmath>

//Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
//На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0.
//Програмата треба да изброи и отпечати на СИ во колку од редиците и
//колоните има барем 3 последователни елементи со вредност 1.


void printResult(int array[100][100], int row, int column){
    int countOnes=0;

    //checking for rows(horizontal)
    for (int i=0; i<row; i++) {
        bool found=false;

        for (int j=0; j<column; j++) {
            if (j+2<column && array[i][j]==1 && array[i][j+1]==1 && array[i][j+2]==1) {
                found=true;
                break;
            }
        }

        if (found) {
            countOnes++;
        }
    }

    //checking for columns(vertical)
    for (int j=0; j<column; j++) {
        bool found=false;

        for (int i=0; i<row; i++) {
            if (i+2<row && array[i][j]==1 && array[i+1][j]==1 && array [i+2][j]==1) {
                found=true;
                break;
            }
        }

        if (found) {
            countOnes++;
        }
    }

    cout<<countOnes;
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