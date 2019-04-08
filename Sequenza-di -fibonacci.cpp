#include <iostream>
using namespace std;
int main() {

    long long a=0, b=1,c=0,d=0;
    cout << "Quanti numeri della squenza vuoi vedere?"<<endl<< "Questi:";
    cin >> d;

    for(int i = 0; i<d; i++){
       c = a+b;
       a=b;
       b=c;
       cout << c<<endl;
    }

    return 0;
}
