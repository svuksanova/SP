#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;
#include  <cmath>

//Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци. Низите знаци содржат букви,
//цифри и специјални знаци,а секоја од нив не е поголема од 50 знаци.
//Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата
//А1c  најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се
//прочитани од влезот. При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.


void printResult(char array[][51], int row) {

    for (int i=0; i<row; i++) {
        int len=strlen(array[i]);

        int count=0;

        for (int j=0; j<len; j++) {
            if (j+2<len && (array[i][j]=='A' || array[i][j]=='a') && array[i][j+1]=='1' && (array[i][j+2]=='c' || array[i][j+2]=='C')) {
                count++;

                if (count==2) {
                    break;
                }
            }
        }

        if (count>=2) {
            for (int j=0; j<len; j++) {
                cout<<(char)tolower(array[i][j]);
            }
            cout<<endl;
        }
    }

}

int main() {
    char array[100][51];
    int n;

    cin>>n;

    cin.ignore();

    for (int i=0; i<n; i++) {
        cin.getline(array[i], 51);
    }

    printResult(array, n);
    return 0;
}