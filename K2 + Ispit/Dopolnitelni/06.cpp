//gi sodrzhi site standardni biblioteki
#include <bits/stdc++.h>
using namespace std;


//Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи.
//Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата.
//Доколку нема таков елемент, функцијата враќа вредност 0.
//Напишете програма што ќе ја повика функцијата par за внесената низа a[] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[].


int par(int a[100],int n) {

    int result=0;

    for (int  i=0; i<n; i++) {
       int count=0;

        for (int j=0; j<n; j++) {
            if (a[i]==a[j]) {
                count++;
            }
        }

        if (count%2==0) {
            if (result==0 || a[i]<result) {
                result=a[i];
            }
        }
    }

    return result;
}

int main() {
    int A[100];

    int n;
    cin>>n;

    for (int i=0; i<n; i++) {
        cin>>A[i];
    }

    int res = par(A, n);

    if (res != 0) {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << res << endl;
    } else {
        cout << "Nitu eden element ne se pojavuva paren broj pati!" << endl;
    }

    return 0;
}
