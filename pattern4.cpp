//inverted pyramid
// *****
// ****
// ***
// **
// *
#include<iostream>
using namespace std;
void pattern(){
    int n=5;
    for(int i=1;i<=5;i++){
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}
int main(){
    pattern();
}