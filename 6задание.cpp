#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 1000; i++){
        int s = i, n = 50;
        while (s > 0) {
            s = s / 2;
            n = n - 3;
        }
        if(n == 23){
            cout << i << endl;
        }
    }
}
