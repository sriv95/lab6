#include<iostream>
using namespace std;

int main(){
    int number = 1;
    int even = 0;
    int odd = 0;
    while (number!=0){
        cout << "Enter an integer: ";
        cin >> number;
        if(number!=0){
            if(number%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd<<endl;
    return 0;
}