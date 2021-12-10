#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> a (1000, vector<int>(1000));
int game(int x, int y, int z){
    if(a[x][y][z] != -1000){
        return a[x][y][z];
    }
    if(x+y+z >= 73){
    a[x][y][z] = 0;
    return 0;
    }
vector<int> tmp = {game(x + 3, y), game(x + 13, y), game(x + 23, y), game(x, y + 3), game(x, y + 13), game(x, y + 23) };
vector<int> neg; int res = 0;
for(int i = 0; i < tmp.size(); i++){
    if(tmp[i] <= 0){
        neg.push_back(tnp[i]);
    }
}
if(!neg.empty()){
    res =-*max_element(neg.begin(), neg.end()) + 1;
}else{
    res =-*max_element(tmp.begin(), tmp.end());
}
return a[x][y][z] = res;
}

int main(){
   for(int i = 23; i > 0; i--){
        int r = game(2, i);
        cout << "(" << 2 << ',' << i << ")" << r << endl;
   }
}
