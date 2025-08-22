//gi sodrzhi site standardni biblioteki
#include <bits/stdc++.h>
using namespace std;

//Од тастатура се чита природен број N (N < 400).

//Да се напише програма којашто формира квадратна матрица што ги содржи броевите
//од 1 до N по растечки редослед на следниот начин: во првата колона во правец од горе надолу, па
//продолжува во втората колона од долу нагоре, па продолжува во третата колона од горе надолу итн. Да се избере
//најмалата димензија на матрицата во која ќе ги собере сите броеви до N. Доколку има преостанати празни места, тие
//да се пополнат со нули.


void printResult(int number) {
    //1 10 11 20
    //2 9  12 19
    //3 8  13 18
    //4 7  14 17
    //5 6  15 16

    int len = ceil(sqrt(number));
    int array[400][400];
    int addNumber=1;

    for (int j=0; j<len; j++) {
        if (j%2==0) {
            for (int i=0; i<len && addNumber<=number; i++) {
                array[i][j]=addNumber;

                addNumber++;
            }
        }else {
            for (int i=len-1; i>=0 && addNumber<=number; i--) {
                array[i][j]=addNumber;

                addNumber++;
            }
        }
    }

     for (int i=0; i<len; i++) {
        for (int j=0; j<len; j++) {
            cout<<array[i][j]<<" ";
        }

         cout<<endl;
    }

}

int main() {
    int n;

    cin>>n;

    printResult(n);
    return 0;
}