#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> arr(n);
    vector < vector <int> > list_print;
    for(auto &i:arr) cin >> i;
    // for(auto i:arr) cout << i << " ";
    for(int i = 0; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        list_print.push_back(arr);
    }
        for(int i = list_print.size()-1; i >= 0; i--) {
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++) cout << list_print[i].at(j) << " ";
        cout << endl;
    }   
}