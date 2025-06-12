#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;     //number of input words

    while(n--){
        string word;
        cin>>word;
        int wordlen=word.length();
        if(wordlen>10){
            cout<<word[0]<<wordlen-2<<word[wordlen-1]<<endl;
        }
        else{
            cout<<word<<endl;
        }
    }
}