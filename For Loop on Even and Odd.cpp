#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    string NumArr [] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a, b, n;
    cin>>a>>b;
    for(int i = a; i <= b; i++){
        n = i;
        if(n >= 1 && n <= 9){
            cout<< NumArr[n - 1]<<endl;
        }else if (n > 9){
            if(n % 2){
                cout<<"odd"<<endl;
            }else{
                cout<<"even"<<endl;
            }
        }
    }
    return 0;
}

