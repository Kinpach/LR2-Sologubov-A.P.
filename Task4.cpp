#include <iostream>

using namespace std;

int main(){
    
    int a, b;
    int64_t product1 = 1, product2 = 1, product3 = 1, product4 = 1;
    
    cout<<"20>b>=a>1 input a and b: ";
    cin>>a>>b;
    
    for (int i = 8; i<16; ++i){
        product1 *= i;
    };
    
    for (int i = a; i<21; ++i){
        product2 *= i;
    };
    
    for (int i = b; i<21; ++i){
        product3 *= i;
    };
    
    for (; a<b+1; ++a){
        product4 *= a;
    };
    
    cout<<"product from 8 to 15 equals "<<product1<<endl;
    cout<<"product from "<<a<<" to 20 equals "<<product2<<endl;
    cout<<"product from "<<b<<" to 20 equals "<<product3<<endl;
    cout<<"product from "<<a<<" to "<<b<<" equals "<<product4<<endl;
}
