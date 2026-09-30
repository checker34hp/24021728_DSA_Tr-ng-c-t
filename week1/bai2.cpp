#include<iostream>
using namespace std;
void swap(int &a,int &b){
     int tmp;
     tmp =a;
     a =b;
     b =tmp;
}
void sort_arr(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j =i+1;j<n;j++){
        if(a[i]>a[j]){
            swap(a[i],a[j]);
        }
    }
}
    for(int i=0;i<n;i++){
        cout << a[i] <<" ";
}
    }
int main(){
    int n; cin>>n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort_arr(a,n);
}
//Độ phức tạp thuật toán là: O(n^2).
