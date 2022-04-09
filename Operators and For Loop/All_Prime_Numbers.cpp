#include <iostream>
using namespace std;

int main() {
    int num, i, upto;
    // Take input from user
    cin >> upto;
    cout<<"2"<<endl;
    for(num = 2; num <= upto; num++)
    {
        for(i = 2; i <= (num / 2); i++) {

            if(num % i == 0) {
                i = num;
                break;
            }
        }
        // If the number is prime then print it.
        if(i != num) {
            cout << num <<endl;;
        }
    }
    return 0;
}
