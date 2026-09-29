#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int a[1000];
    float sum=0;
    for(int i=0;i<n;i++){
        cin >>a[i];
        sum+=a[i];
    }
    sum = sum/n;
    for(int i=0;i<n;i++){
        if(a[i]>=sum){
            cout << a[i] <<" ";
        }
    }
 return 0;
}
