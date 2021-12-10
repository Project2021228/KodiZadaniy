#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int x){
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int z = 1;
    for(int i = 2532000; i <= 2532160; i++){
        if(f(i) == true && i % 10 == 7){
            cout << z << ' ' << i << endl;
            z++;
        }
    }
}
