//Program for finding Maximum/Minimum

#include <iostream>
using namespace std;
int main(){
    cout<<"In this Program we will find minimum and maximum in a array"<< endl;
    int arry[10] = {};
    int max = 0;
    int min = 1;
   

    for (int i = 0; i < 10 ; ++i) {
        cout<< "Enter Value no."<<i+1<<": ";
        cin>>arry[i];
    }


    for (int i = 0; i <10 ; ++i) {
        if(max < arry[i]){
            max = arry[i];
        }
        if(min > arry[i]){
            min = arry[i];
        }
    }
     cout<< "Maximum: "<<max<<endl;
     cout<< "Minimum: "<<min<<endl;


    return 0;
}