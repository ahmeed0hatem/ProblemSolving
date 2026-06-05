// Finbbonachi 
#include "iostream"
using namespace std;


int main(){
    int seq;
    cin >> seq;
    int answer;
    int array[seq];
    for (int i=0;i<seq;i++){
        if (i <= 1)
        {
            array[i] = i;
        }
        else
        {
            array[i] = array[i-1] + array[i-2];
        }
    }
    for (int i=0;i<seq;i++){
        cout << array[i] << ' ';
    }
    return 0;
}