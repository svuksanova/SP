#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;

// Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
// Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
// За секој од нив да се испечати максималната цифра во посебен ред.

void MaxDigit(int array[100], int n) {

    for (int i=0; i<n; i++) {
        int temp=0;

        //za sekoj nov broj, se resetira na 0
        int maxDigit=0;

        while (array[i]>0) {
            temp = array[i];

            //ja zemam poslednata cifra od brojot array[i]
            temp = temp%10;

            //ja kratam taa cifra od brojot array[i]
            array[i] = array[i]/10;

            if (temp>maxDigit) {
                maxDigit=temp;
            }
        }

        cout<<maxDigit<<endl;
    }
}

int main() {

    int array[100];
    int i=0;

    for (i; i<100; i++) {
        cin>>array[i];

        if (cin.fail()) {
            // ако не е внесен број, прекини
            cin.clear();      // ја чисти грешката
            cin.ignore(1000, '\n'); // го игнорира погрешниот влез
            break;
        }
    }

    MaxDigit(array, i);

    return 0;
}