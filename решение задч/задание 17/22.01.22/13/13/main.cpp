#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    fstream file("17.txt");
    int x=0;
    vector<int> v;
    while(file>>x){
        v.push_back(x);
    }
    int c=0, mx=0;
    for(int i=0; i<v.size()-1; i++){
        for(int j=i+1; j<v.size(); j++){
            if((v[i]*v[j])%10==0){
                c++;
                if(v[i]+v[j]>mx){
                    mx=v[i]+v[j];
                }
            }
        }
    }
    cout<<c<<' '<<mx;
}
