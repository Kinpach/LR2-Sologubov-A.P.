#include <iostream>

using namespace std;

int main(){
  
    using byte = int;
    pair<byte, byte> positionA, positionB;
    cout<<"input positionA: ";
    cin>>positionA.first>>positionA.second;
    cout<<"input positionB: ";
    cin>>positionB.first>>positionB.second;
  
    if (positionA.first==positionB.first || positionA.second==positionB.second) cout<<"Rook on A threatens B"<<endl;
    else cout<<"Rook on A doesn`t threaten B"<<endl;
  
    if ((positionB.first-positionB.second==positionA.first-positionA.second)||(positionB.first+positionB.second==positionA.first+positionA.second)) cout<<"Bishop on A threatens B"<<endl;
    else cout<<"Bishop on A doesn`t threaten B"<<endl;
  
    if ((-2<positionA.first-positionB.first<2)||(-2<positionA.first-positionB.first<2)) cout<<"King on A could reach B in 1 move"<<endl;
    else cout<<"King on A couldn`t reach B in one move"<<endl;
  
    if ((positionA.first==positionB.first || positionA.second==positionB.second)||
((positionB.first-positionB.second==positionA.first-positionA.second)||
(positionB.first+positionB.second==positionA.first+positionA.second))||
((-2<positionA.first-positionB.first<2)||(-2<positionA.first-positionB.first<2))) cout<<"Queen on A threatens B"<<endl;
    else cout<<"Queen on A doesn`t threaten B"<<endl;
  
    if (positionA.first==positionB.first && 0<positionB.second-positionA.second<3) {
        if (positionA.second==2 || positionB.second-positionA.second==1) cout<<"Pawn on A could reach B in one move"<<endl;
        else cout<<"Pawn on A couldn`t reach B in one move"<<endl;
    }
    else {
        if (-2<positionA.first-positionB.first<2 && positionB.second-positionA.second==1) cout<<"Pawn on A could reach B in one move"<<endl;
        else cout<<"Pawn on A couldn`t reach B in one move"<<endl;
    };
}
