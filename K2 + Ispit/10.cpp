#include<iostream>
#include <cstring>
using namespace std;

// Од стандарден влез прво се читаат два знака z1 и z2 , а потоа се читаат редови со низи
// од знаци се’ додека не се прочита знакот # (секој од редовите не е подолг од 80 знаци).
// Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред
// составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.
// Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2,
// знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.
// For example:

// Input
// 0 9
// nfjskdz0nvjkfdmnlks9bvfkjmcdz,
// bfhjdskvfdkl0fvkdzddjmje k dmkldz kdfds!%mlacsd9
// 0fbnrjkdn9
// fjkd0jdfkfmjndksfjd;sj sad;jm 9nfcjka
// #

// Result
// nvjkfdmnlks
// fvkdzddjmje k dmkldz kdfds!%mlacsd
// fbnrjkdn
// jdfkfmjndksfjd;sj sad;jm

void printSubSequence(char array[][81], char z1, char z2) {

    for (int i=0; i<100; i++) {
        int start=-1;
        int end=-1;
        int length = strlen(array[i]);


        for (int j=0; j<length; j++) {
            if (array[i][j] == z1) {
                start=j;
            }

            else if (array[i][j] == z2) {
                end=j;

                break;
            }
        }

        for (int k=start+1; k<end; k++) {
            cout<<array[i][k];
        }

        cout<<endl;
    }

}

int main() {
    char z1, z2;
    char array[100][81];

    cin>>z1;
    cin>>z2;
    cin.ignore();

    for (int i=0; i<100; i++) {
        if (strcmp(array[i],"#")==0) {
            break;
        }

        cin.getline(array[i], 81);

    }

    printSubSequence(array, z1, z2);

    return 0;
}