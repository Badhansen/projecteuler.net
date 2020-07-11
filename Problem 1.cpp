#include<iostream>
using namespace std;
int solve(){
    int result = 0;
    for(int i = 3; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            result += i;
        }
    }
    return result;
}
int main(){
    cout << solve() << endl;
}