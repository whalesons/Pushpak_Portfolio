#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

namespace first{
    int x=7;
    int y=9;
    double z=5.55;
    int m=5;
    int n=8;
    char a='P';
    bool power=true;
    string Name = "Jagdamb";
}

//Arithmetic operations
int main(){

    using namespace first;

    //Addition Examples
    x=x+1; //Add by 1
    cout<<x<<'\n';
    x=x+2; //Add by 2
    cout<<x<<'\n';
    x+=1; //x=x+1
    cout<<x<<'\n';
    x++; //Increment operator
    cout<<x<<'\n';

    //Subsrtaction Examples
    y=y-1; //Sub by 1
    cout<<y<<'\n';
    y=y-2; //Sub by 2
    cout<<y<<'\n';
    y-=1; //y=y-1
    cout<<y<<'\n';
    y--; //Decrement operator
    cout<<y<<'\n';

    //Multiplication Operations
    z=z*2; //2 times
    cout<<z<<'\n';
    z*=2; //z=z*2
    cout<<z<<'\n';

    //Division Operations as Quotient
    z=z/2; // half times
    cout<<z<<endl;
    z/=2; //z=z/2
    cout<<z<<endl;

    //Modulus Operator as Remainder
    m=m%2; //Remainder for (int) datatype; use (% modulus operator);
    cout<<m<<endl;
    n%=5; //x=x%2
    cout<<n<<endl;

    z=fmod(z,2); //Remainder for (double) datatype; use (fmod function); which is placed inside the (cmath) library;
    cout<<z<<endl;

}