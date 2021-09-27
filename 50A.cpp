#include <iostream>
using namespace std;

int m,n,d,b;

int main(){
    cin >> m >> n;
    b=m*n;
    if (b%2 == 0 && 1<=m<=n<=16){
        d = b/2;
    } else{
        d = (b-1)/2;
    }
    cout<<d;
    return 0;
}