#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n--){
        int a , b , c,   z=0;
        cin>>a>>b>>c;
        if(a==1){
            z++;
        }
        if(b==1){
            z++;
        }
        if(c==1){
            z++;
        }
        if(z>=2){
            count++;
        }
    }
    cout<<count<<endl;
}