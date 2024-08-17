#include<iostream>
using namespace std;
int main(){
    int n=5;
    bool vturn = true;
    bool hturn = true;
    char ch = '*';
    for(int i = 0; i<n; ++i){
        if(vturn) hturn = true;
        else hturn = false;

        for(int j = 0; j<=i; ++j){
            if(hturn) ch = '*';
            else ch = ' ';
            cout<<' '<<ch<<' ';
            hturn = !hturn;
        }
        cout<<endl;
        vturn = !vturn;
    }
    for(int i = n-1; i>0; --i){
        if(vturn) hturn = true;
        else hturn = false;

        for(int j = 0; j<i; ++j){
            if(hturn) ch = '*';
            else ch = ' ';
            cout<<' '<<ch<<' ';
            hturn = !hturn;
        }
        cout<<endl;
        vturn = !vturn;
    }
}