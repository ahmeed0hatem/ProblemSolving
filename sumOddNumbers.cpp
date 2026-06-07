#include "iostream"

using namespace std;

int main(){
    int t;
    cin >> t;
    for (int i=0;i<t;i++)
    {
        int x,y;
        cin >> x >> y;
        int larger = (x>y) ? x:y;
        int lower = (x>y) ? y:x;
        int sum=0;
        for(int j = lower+1; j< larger;j++){
            if(j %2 !=0)
            {
                sum +=j;
            }
        }
        cout << sum << endl;
    }
    return 0;
}