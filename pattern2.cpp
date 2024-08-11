// *
// **
// ***
// ****
// *****
#include<iostream>
using namespace std;
void pattern(){
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){ // if we make j<i then fist loop will not run as j=0 and i<0 condition is false so first line will be empty and then j=0 and j<1 till j<4 which is 0 to 4 it will print only but if we write j<=i then till 5 it will run
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    pattern();
}