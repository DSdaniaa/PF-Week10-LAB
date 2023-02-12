#include <iostream>
using namespace std;
main(){
    string words;
    int size,num=0;
    cout << "Enter a statment to reverse: ";
    getline(cin, words);
    size=words.length();
    for(int i=size; i>=0; i--){
        if(words[i]==' '){
            for(int z=i; z<size; z++){
                cout << words[z];
            }
        }
    }

}