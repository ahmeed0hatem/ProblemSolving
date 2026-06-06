#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    int iteration = 1;
    for (int i=0;i<n;i++) // rows
    {   
        while(1){
            if(iteration %4 == 0){
                cout << "PUM" << endl;
                iteration++;
                break;
            }
            else{
                cout << iteration << ' ';
                iteration++;
            }
        }
    }
    return 0;
}