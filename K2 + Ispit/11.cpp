#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;

// Од стандарден влез се читаат низи од знаци се додека не се прочита знакот #.
// Да се напише програма во која од за секој прочитан ред ќе се отпечати бројот на цифри во тој ред,
// знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Низите од знаци не се подолги од 100 знаци.

void Transform(char array[100][100], int n) {

    for (int i=0; i<n; i++) {
        char digits[100];
        int counter=0;

        int length=strlen(array[i]);

        //u can also say j<array[i][j] != '\0';
        for (int j=0; j<length; j++) {
            if (isdigit(array[i][j])) {
                digits[counter++]=array[i][j];
            }
        }

        sort(digits, digits+counter);

        cout<<counter<<":";
        for (int k=0; k<counter; k++) {
            cout<<digits[k];
        }

        cout<<endl;
    }

}

int main() {

    char array[100][100];
    int i=0;

    for (i; i<100; i++) {
        cin>>array[i];

        if (strcmp(array[i], "#")==0) {
            break;
        }
    }

    //i e brojot na vneseni redovi, ne mora da znachi deka kje vnese 100
    //kje ni treba za loop-ot vo funkcijata pogore
    Transform(array, i);

    return 0;
}