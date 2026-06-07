#include "iostream"

using namespace std;

int main(){
    int n,a,b;
    int answer = 0;
    cin >> n >> a >> b;

    int larger = (a>b) ? a:b;
    int lower = (a>b) ? b:a;
    for(int i=1; i <= n;i++)
    {
        // check if only one digit
        int j = i;
        int sum = 0;
        if(j >= 10)
        {
            while(j > 0){
                sum += j%10;
                j = j/10;
            }
            if (sum >=lower && sum <= larger)
            {
                answer+=i;
            }
        }
        else{
            if (j >= lower && j<=larger )
            {
                answer+=j;
            }
        }
    }
    cout << answer;
    return 0;
}