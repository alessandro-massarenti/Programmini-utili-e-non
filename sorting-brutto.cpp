#include<iostream>
using namespace std;
int main()
{
    int n, A[100],m,c = 0;
    bool done = false;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> A[i];
        if(A[i]>m){
            m=A[i];
        }
    }
    cout<<"start"<<endl;
    while(done==false){
        int counter = 0;
        for(int i=0; i<n-1; i++){
            if (A[i]>A[i+1]){
                c=A[i];
                A[i]=A[i+1];
                A[i+1]=c;
            }else{
                counter ++;
            }
        }
        if (counter == n-1){
            done=true;
        }
    }
    for(int i=0; i<n; i++){
        cout << A[i] << " ";
    }
    cout<<endl<<"end"<<endl;
}