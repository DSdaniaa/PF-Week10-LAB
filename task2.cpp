#include <iostream>
using namespace std;
main(){
    int count=0,size;
    cout << "Enter the Number of Saturdays nhe ran: ";
    cin >> size;
    int run[size];
    for(int i=0; i<size; i++){
        cout << "Enter the number of miles he ran: ";
        cin >> run[i];
    }
    for(int z=1; z<size; z++){
        if(run[z]>run[z-1]){
            count= count+1;
        }
    }
    cout << count;
}