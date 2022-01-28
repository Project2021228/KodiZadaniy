#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int mn_i = INT_MAX, mx_i = 0;
    for(int i = 0; i <= 1000; i++){
        string s(100 + i, '1');
        while(s.find("111") != string::npos){
            if(s.find("111") != string::npos){
                s.replace(s.find("111"), 3, "22");
            }
            if(s.find("222") != string::npos){
                s.replace(s.find("222"), 3, "11");
            }
        }
        
        int c = count(s.begin(), s.end(), '1');
        if(c > mx_i){
            mx_i = c;
            mn_i = 100 + i;
        }
    }
    cout << mn_i;
}
