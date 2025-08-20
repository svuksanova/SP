#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;
#include  <cmath>

//Од тастатура се внесуваат димензиите на една матрица
//(m, n <= 100), а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што секој елемент од
//низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во
//рамки на таа редица. Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
//Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

void printResult(int array[100][100], int row, int column){
    int longestDistance[row];

    for (int i=0; i<row; i++) {
        int sum=0;
        double arithmeticMean=0;
        int longestDistanceElem=array[i][0];

        for (int k=0; k<column; k++) {
            sum=sum+array[i][k];

        }
        arithmeticMean=(double)sum/column;


        double maxDistance=-1;
        for (int j=0; j<column; j++) {

            double distance = fabs(array[i][j]-arithmeticMean);

            if (distance > maxDistance) {
                maxDistance=distance;
                longestDistanceElem=array[i][j];
            }
        }



        longestDistance[i]=longestDistanceElem;
    }


    for (int i=0; i<row; i++) {
        cout<<longestDistance[i]<<" ";
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