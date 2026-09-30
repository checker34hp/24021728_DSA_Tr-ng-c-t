#include<iostream>
using namespace std;
void nhapday(int n,int a[]){
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
}
int sumarr(int a[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    int n; cin>>n;
    int a[1000];
    nhapday(n,a);
    cout << sumarr(a,n);
    return 0;
}
// Độ phức tạp thuật toán là: O(n).
