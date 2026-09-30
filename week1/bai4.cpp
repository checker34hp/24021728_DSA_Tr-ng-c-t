#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
void rutgonphanso(int a,int b){
    int c = gcd(a,b);
    a = a/c;
    b = b/c;
    cout << a <<"/" <<b;
}
int main(){
    int a,b;
    cin >>a>>b;
    rutgonphanso(a,b);
    return 0;
}
// Độ phức tạp thuật toán là O(1).
