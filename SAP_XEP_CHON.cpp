#include<bits/stdc++.h>
using namespace std;

void xuat(int a[], int n, int dem){
    cout << "Buoc " << dem <<": ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int n; cin >> n;
    int a[n+10];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            int *ans = min_element(a + i + 1, a + n);
            if (*ans < a[i])
            {
                dem++;
                swap(a[i], a[ans - a]);
                xuat(a, n, dem);
            }
        }

    }
    return 0;
}