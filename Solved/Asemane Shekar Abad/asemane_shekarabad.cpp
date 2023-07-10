#include<iostream>
using namespace std;

int main(){
    int n, m, count=0;
    char ch;
    cin >>n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>ch;
            if(ch == '*') count++;
        }
    }

    cout<<count ;

    return 0;
}
