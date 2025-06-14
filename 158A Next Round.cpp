#include <iostream>
using namespace std;
int main(){
    int n, k, i;      cin>>n>>k;
    int  score[n];
    for(i=0;i<n;i++){
        cin>>score[i];
    }
    int pass=0;
    for(i=0;i<n;i++){
        if(score[i]>=score[k-1] && score[i]>0){
            pass++;
        }
    }
    cout<<pass<<endl;
}