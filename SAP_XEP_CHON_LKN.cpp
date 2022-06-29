#include<bits/stdc++.h>
using namespace std;

vector <string> myVector;
void xuat(){
    for(int i = myVector.size()-1; i >= 0; i--){
        cout << myVector[i] << endl;
    }
}
void xuly(int a[], int n, int dem){
    string ans = "";
    ans += "Buoc " + to_string(dem) + ": ";
    //cout << "Buoc " << dem << ": ";
    for(int i = 0; i < n; i++){
        ans += to_string(a[i]) + " ";
        //cout << a[i] << " ";
    }
    //cout << endl;
    myVector.push_back(ans);
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
                xuly(a, n, dem);
            }
        }

    }
    
    xuat();
    
    return 0;
}