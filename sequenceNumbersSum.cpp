#include "iostream"

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    while(n>0 && m >0){
        int larger = (n>m) ? n:m;
        int lower  = (n>m) ? m:n;
        int sum=0;

        for(int i=lower;i<=larger;i++){
            cout << i << ' ';
            sum +=i;
        }
        cout << "sum =" << sum << endl;
        sum = 0;
        cin >> n >> m;
    }
    return 0;
}