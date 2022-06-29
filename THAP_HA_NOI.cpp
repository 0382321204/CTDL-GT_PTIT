#include<bits/stdc++.h>
using namespace std;


void Chuyendoi(char nguon, char dich){
    cout << nguon << " -> " << dich << endl;
}
// bai toan su dung de quy
void ThapHaNoi(int n, char a, char b, char c){
    if(n == 1) Chuyendoi(a, c);
    else {
        ThapHaNoi(n-1, a, c, b);
        ThapHaNoi(1, a, b, c);
        ThapHaNoi(n-1, b, a, c);
    }
}
main(){
    int n; cin >> n;
    ThapHaNoi(n, 'A', 'B', 'C');
    return 0;
}
/* Chu thich:
n: so dia can chuyen
a: cot nguon
b: cot trung gian
c: cot dich */
