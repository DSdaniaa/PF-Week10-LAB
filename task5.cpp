#include <iostream>
using namespace std;
main(){
    int size, num, sum=0;
    cout << " Enter the number of boxes: ";
    cin >> size;
    num= size*3;
    int Boxes[num];
    for(int i=0; i<num; i++){
        cout << "Enter the value: ";
        cin >> Boxes[i];
    }
    sum=0;
    for(int z=0; z<num; z=z+3){
        sum=sum +(Boxes[z]*Boxes[z+1]*Boxes[z+2]);

    }
    cout << sum;

}