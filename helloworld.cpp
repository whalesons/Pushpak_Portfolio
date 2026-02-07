#include <iostream>

//namespace
    namespace first{
        int x = 1;
    }
    namespace second{
        int x = 2;
    }

int main(){

    //Constant
    const double PI = 3.14;
    const int LIGHT_SPEED = 299792458;

    //Circumference
    double radius = 10;
    double circumference = 2 * PI * radius;

    std :: cout << "Circumference = " << circumference <<'\n';

    using namespace first;

    std :: cout << x <<'\n';
    std :: cout << second :: x <<'\n';
    std :: cout << x <<'\n';

    return 0;
}