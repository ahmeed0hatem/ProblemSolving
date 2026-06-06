#include "iostream"

using namespace std;

int main(){
    int k,s;
    cin >> k >> s;
    int answer = 0;
    for (int x =0;x<k;x++)
    {
        if(x > s)
        {
            break;
        }
        for(int y=0;y<k;y++)
        {
            if (y > s)
            {
                break;
            }
            
            for (int z=0;z<k;z++)
            {
                if(x > s)
                {
                    break;
                }
                else if ( x+y+z == s)
                {
                    answer++;
                }
            }
        }
    }
    cout << answer;
    return 0;
}