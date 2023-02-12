#include <iostream>
using namespace std;
bool checkCycles(int cycles, int length);
int arr[50];
main(){
    int length, cycles;
    bool result;
    cout << "Enter the length: ";
    cin >> length;
    for(int i=0; i<length; i++){
        cout << "Enter a Number: ";
        cin >> arr[i];
    }
    cout <<"Enter the number of cycles: ";
    cin >> cycles;
    result=checkCycles(cycles, length);
    cout << result;

}
bool checkCycles(int cycles, int length){
    for(int i=0; i<length; i=i+cycles){
        if(arr[i]==arr[i+3] && arr[i+1]==arr[i+4] && arr[i+2]==arr[i+5]){
            return true;
        }
    }           
 return false;

}
  
