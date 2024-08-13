//it is simple like pyramid but if we give space between star the we will get it like triangle. as there comes the space between it.
#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<5;i++){
        for(int j=n;j>i;j--){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}