#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int i = 1;
    int num=1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << num << " ";
            num++;
            j++;
        }
        cout << endl;
        i++;
    }
}