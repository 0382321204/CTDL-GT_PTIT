#include <bits/stdc++.h>
using namespace std;

int dem = 1;
void nhap(int a[], int n)
{
    for(int i = 0; i < n; i++) cin >> a[i];
}
void xuat(int a[], int n){
    cout << "Buoc " << dem << ": ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    dem++;
    cout << endl;
}
void InsertionSort(int a[], int n){
    cout << "Buoc 0: " << a[0] << endl;
    for(int i = 1; i < n; i++){
        int ans = a[i];
        int j = i - 1; 
        while(j >= 0 && ans < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = ans;
        xuat(a, i+1);
    }
}
int main()
{
    int a[100], n;
    cin >> n;
    nhap(a,n);
    InsertionSort(a,n);    
}