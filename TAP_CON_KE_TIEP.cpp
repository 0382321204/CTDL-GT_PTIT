#include<iostream>

using namespace std;

void sinh(int a[], int n, int k){
	int i = k;
	// xet tu cuoi day ve dau day xem dk cua a[i]
	while(i > 0 && a[i] == (n-k+i)) i = i - 1;
	// Neu a[i] != n-k+i
    if(i > 0){
        a[i] = a[i] + 1;
    	// Xet cac phan tu phia sau
	    for(int j = i + 1; j <= k; j++){
		    a[j] = a[j-1] + 1;
        }
    } else {
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
    }
}
void xuat(int a[], int k){
	for(int i = 1; i <= k; i++){
        cout << a[i] << " ";
    }
	cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k];
        // Khoi tao mang A voi cau hinh dau tien
        for (int i = 1; i <= k; i++)
            cin >> a[i];

        sinh(a, n, k);
        xuat(a, k);
    }
    return 0;
}
/* VD: n = 5, k = 3 
	123	145
	124	234
	125	235
	134	245
	135	345
*/