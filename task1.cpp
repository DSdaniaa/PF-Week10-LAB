#include <iostream>
using namespace std;
int checkCondition(char letter, string word);
main(){
    int size, result=0;
    char letter;
    string word;
    cout << "Enter the number of words you want to enter: ";
    cin >> size;
    string arr[size];
    for(int i=0 ; i<size ; i++){
        cout << "Enter the word: ";
        cin >> arr[i];
    
    }
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    for (int i=0; i<size; i++){
        word=arr[i];
        result= result+ checkCondition(letter,word);
        
    }

    cout << result<<" times letter is repeated";
    

}
int checkCondition(char letter, string word){
int y=0, count=0;

    while(word[y]!='\0'){
        if(word[y]==letter){
         count=count+1;
        }
        y++;
    }
    return count;
}