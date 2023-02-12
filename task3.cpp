#include <iostream>
using namespace std;
main(){
    int size, count=0, x=0;
    cout << "Enter the number elements: ";
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cout << "Enter a number: ";
        cin >> arr[i];
    }
    for(int z=1; z<size-1; z++){
        if(arr[z]>arr[z-1] && arr[z]>arr[z+1]){
            count= count+1;
        }
    }
    if(count==0){
        cout << "No Peak";
    }
    else{
    int newArr[count];
    for(int z=1; z<size-1; z++){
        if(arr[z]>arr[z-1] && arr[z]>arr[z+1]){
            newArr[x]=arr[z];
            x++;
        }
    }
    for(int y=0 ; y<count; y++){
        if(y==count-1){
        cout << newArr[y];
        }
        else{
        cout << newArr[y] << ", ";

        }
    }
    }
    

}
