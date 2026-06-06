#include "iostream"

using namespace std;


// Fantastic Idea
/*
we didn'y use 3 loops and used 2 instead

we know x and y, we can't just get z, if that z is in range then the answer is fulfilled
*/
int main(){
    int k,s;
    cin >> k >> s;
    int answer = 0;
    for (int x =0;x<=k;x++){
        for(int y=0;y<=k;y++){
            int z = s - x - y;
            if (0 <= z && z <= k){
                answer++;
            }
            }
        }
    
    cout << answer;
    return 0;
}