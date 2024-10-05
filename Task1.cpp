
#include <iostream>

using namespace std;

int main()
{
    int X, Y, Z;
    cout<<"input X: ";
    cin>>X;
    cout<<"input Y: ";
    cin>>Y;
    cout<<"input Z: ";
    cin>>Z;
    
    if (X%2==1 && Y%2==1) cout<<"first condition is true"<<endl;
    else cout<<"first condition is false"<<endl;
    if ((X>20 && Y<21)||(Y>20 && X<21)) cout<<"second condition is true"<<endl;
    else cout<<"second condition is false"<<endl;
    if (X==0 || Y==0) cout<<"third condition is true"<<endl;
    else cout<<"third condition is false"<<endl;
    if (X<0 && Y<0 && Z<0) cout<<"fourth condition is true"<<endl;
    else cout<<"fourth condition is false"<<endl;
    if ((X%5==0 && Y%5!=0 && Z%5!=0)||(Z%5==0 && Y%5!=0 && X%5!=0)||(Y%5==0 && X%5!=0 && Z%5!=0)) cout<<"fifth condition is true"<<endl;
    else cout<<"fifth condition is false"<<endl;
    if (X>100 || Y>100 || Z>100) cout<<"sixth condition is true"<<endl;
    else cout<<"sixth condition is false"<<endl;
}
