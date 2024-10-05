#include <iostream>

using namespace std;

int main(){
    
    int N;
    cout<<"input N: ";
    cin>>N;
    
    for (int i = 1;i<10;++i){
        cout<<i<<" x 7 = "<<i*7<<endl;
    };
    cout<<""<<endl;
    for (int i = 1;i<10;++i){
        cout<<i<<" x "<<N<<" = "<<i*N<<endl;
    };
}
