//     *
//    **
//   ***
//  ****
// *****
#include<iostream>
using namespace std;
void pattern(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<" ";
        }
        for(int z=1;z<=i;z++){
            cout<<"*";
        }cout<<endl;
}

}
int main(){
    pattern();

}