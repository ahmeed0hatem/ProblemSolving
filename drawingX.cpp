#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    int m= 0;
    int temp_n = n;
    for(int i =0;i<n;i++){
        if(i == (n/2)){
            for(int j=0;j<n;j++){
                if(j == (n/2))
                {
                    cout << 'X';
                }
                else
                {
                    cout << '*';
                }
            }
        }
        else{
            for(int j=0;j<n;j++){
                if(j == (m)){
                    cout << '\\';
                }
                else if(j == temp_n-1){
                    cout << '/';
                }
                else{
                    cout << '*';
                }
            }
        }
        m++;
        temp_n--;
        cout << endl;
    }
    return 0;
}