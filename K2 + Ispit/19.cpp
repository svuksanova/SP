#include <algorithm>
#include<iostream>
#include <cstring>
using namespace std;

// Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци.
// На почетокот на програмата се читаат два цели броеви:
//
// N - бројот на низи од знаци кои ќе се читаат и
// X - поместување.
// Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и
// големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z).
// Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката.
// Трансформираната низа да се отпечати на СИ.
//
// Трансформацијата да се имплементира со посебна рекурзивна функција.
//
// Пример:
//
// Welcome -> трансформирано со поместување 5 -> Bjqhtrj

void Transform(char array[][81], int n, int x) {

    for (int i=0; i<n; i++) {
        int length = strlen(array[i]);

        for (int j=0; j<length; j++) {
            char ch= array[i][j];

            if (isalpha(ch)) {
                char base= islower(ch) ? 'a' : 'A';
                array[i][j] = (ch-base+x)%26+base;

            }
        }

        cout<<array[i]<<endl;
    }
}

int main() {

    int n,x;
    cin>>n>>x;
    cin.ignore();

    char array[n][81];

    for (int i=0; i<n; i++) {
       cin.getline(array[i],81);
    }

    Transform(array, n, x);

    return 0;
}