#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int f(int n){
    if(n <= 13){
        return n * n * n + n * n + 1;
    }
    if(n > 13 && n % 3 == 0){
        return f(n - 1) + 2 * n * n - 3;
    }
    if(n > 13 && n % 3 != 0){
        return f(n - 2) + 3 * n + 6;
    }
}

int main(){
    int count = 0;
    for(int i = 1; i <= 1000; i++){
        int cnt = 0, c = 0, p = 0;
        int num = f(i);
        while(num > 0){
            int mod = num % 10;
            c++;
            if(mod % 2 != 0){
                cnt++;
            }
            num /= 10;
        }
        cout << f(i) << ' ' << c << ' ' << cnt << endl;
        if(c == cnt){
            count++;
        }
    }
    cout << count;
}