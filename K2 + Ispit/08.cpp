#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;

// Од стандарден влез се читаат непознат број на редови додека не се прочита 0.
// Да се најде најдолгиот ред во кој има барем 2 цифри. Потоа, на стандарден излез да се испечатат знаците
// од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има
// повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред не е подолг од 100 знаци.

void printResult(char array[][100], int countLines){
    int maxLength=0;
    int indexMax=-1;

    for (int i=0; i<countLines; i++) {
        int digitCount=0;

        for (int j=0; j<strlen(array[i]); j++) {
            if (isdigit(array[i][j])) {
                digitCount++;
            }
        }

        if (digitCount>=2) {
            int length=strlen(array[i]);
            if (length>maxLength || (length==maxLength && i>indexMax)) {
                maxLength=length;
                indexMax=i;
            }
        }
    }

    if (indexMax==-1) {
        cout<<"Nema takov red"<<endl;
    }

    int firstDigit=-1;
    int lastDigit=-1;

    for (int i=0; i<strlen(array[indexMax]); i++) {
        if (isdigit(array[indexMax][i])) {
            if (firstDigit==-1) {
                firstDigit=i;
            }
            lastDigit=i;
        }
    }

    for (int i=firstDigit; i<=lastDigit; i++) {
        cout<<array[indexMax][i];
    }

    cout<<endl;
}

int main() {

    char array[100][100];
    int countLines=0;

    while (true) {
        cin.getline(array[countLines], 100);

        if (strcmp(array[countLines], "0") ==0 ) {
            break;
        }

        countLines++;
    }

    printResult(array, countLines);
    return 0;
}