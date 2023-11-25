//demo
#include<iostream>
using namespace std;
int main(){
    int* ageArr = new int[2];
    cout << "what is your age: ";
    cin>>ageArr[0];
    cout << "What is your second age: " ;
    cin >>ageArr[1] ;
    for (int i =0; i<2;i++){
        cout << ageArr[i];
    }
    return 0;
}