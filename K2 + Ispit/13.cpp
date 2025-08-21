#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;
#include  <cmath>

//Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на
//матрицата со димензии M x N (цели броеви). Да се напише програма што ќе ги промени редиците
//на матрицата на следниот начин:
//Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
//Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
//Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
//Променетата матрица да се испечати на екран.


void printResult(int array[100][100], int row, int column, int x) {
    for (int i=0; i<row; i++) {
        int sum=0;

        for (int j=0; j<column; j++) {
            sum= sum+array[i][j];
        }

        for (int k=0; k<column; k++) {
            if (sum>x) {
                array[i][k]=1;
            }else if (sum<x) {
                array[i][k]=-1;
            }else {
                array[i][k]=0;
            }
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
    int x,m,n;

    cin>>x;
    cin>>m>>n;

    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin>>array[i][j];
        }
    }

    printResult(array, m,n, x);
    return 0;
}