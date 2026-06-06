#include "iostream"
#include "cmath"
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for (int i =0;i<t;i++)
    {
        int answer = 0;
        int ones = 0;
        cin >> n;
        while (n > 0 )
        {
            if(n%2 != 0){
                ones++;
            }
            n = n/2;
        }
        for(int j =0; j < ones;j++)
        {
            answer += pow(2,j);
        }
        cout << answer << endl;
    }
    
    return 0;
}