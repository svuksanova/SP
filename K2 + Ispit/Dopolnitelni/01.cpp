#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;
#include  <cmath>

//Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци.
// Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја од нив не е
// подолга од 80 знаци.
//
//Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром
//(се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак. Ако нема такви низи,
//се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го
//задоволува условот.


void printResult(char array[][81], int row) {
    char specials[] = {'!', '#', '?', '-', '@', '$', '%', '^', '&', '*', '(', ')',
        '+', '=', '/', '\\', '|', '<', '>', '.', ',', ';', ':', '"', '\'', '[', ']', '{', '}', '~'};
    int specialsLength= sizeof(specials)/sizeof(specials[0]);
    int maxLenght=0;
    int indexOfLongest=-1;

    for (int i=0; i<row; i++) {

        int elementsInRow= strlen(array[i]);
        bool isPalindrom=true;
        bool hasSpecial=false;

        for (int j=0, k=elementsInRow-1; j<k; j++, k--) {
            if (array[i][j]!=array[i][k]) {
                isPalindrom=false;
                break;
            }
        }

        for (int j=0; j<elementsInRow; j++) {
            for (int z=0; z<specialsLength; z++) {
                if (array[i][j]==specials[z]) {
                    hasSpecial=true;
                    break;
                }
            }
            if (hasSpecial) break;
        }

        if (isPalindrom && hasSpecial && elementsInRow>maxLenght) {
            maxLenght=elementsInRow;
            indexOfLongest=i;
        }
    }

    if (maxLenght>0) {
        cout<<array[indexOfLongest]<<endl;
    }else {
        cout<<"Nema!"<<endl;
    }
    
}

int main() {
    char array[100][81];
    int n;
    cin>>n;

    cin.ignore();

    for (int i=0; i<n; i++) {
        cin.getline(array[i],81);
    }

    printResult(array, n);
    return 0;
}