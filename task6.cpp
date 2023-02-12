#include <iostream>
using namespace std;
main(){
    int pakages[10];
    int temp;
    for(int i=0; i<10; i++){
        cout << "Enter a value: ";
        cin >> pakages[i];
    }
    for(int z=0; z<10;z++){
        for(int x=0; x<10;x++){
            if(pakages[x+1]<pakages[x]){
                temp=pakages[x];
                pakages[x]=pakages[x+1];
                pakages[x+1]=temp;

            }
        }
    }
    for(int i=0;i<10;i++){
        cout << pakages[i]<<"  ";
    }
}