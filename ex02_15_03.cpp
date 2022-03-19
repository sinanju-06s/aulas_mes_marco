#include <iostream>
using namespace std;


void change_array(int arr[],int fs,int ls){
    int temp1;

    if(fs >= ls){
        return;
    }

    temp1 = arr[ls];
    arr[ls] = arr[fs];
    arr[fs] = temp1;

    change_array(arr,fs+1,ls-1);

}


int main(){

    int arr[5] = {1,2,3,4,5};

    change_array(arr,0,4);

    for(int i = 0;i<5;i++){
        cout << arr[i] << endl;
    }
}