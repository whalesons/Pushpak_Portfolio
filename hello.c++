#include <iostream>

int main(){

    //Integer
    int x=5;
    int y=8;
    int sum=x+y;

    std :: cout << "sum = " << sum << '\n';

    //Float
    float p=4.3;
    double q=7.8;
    double add=p+q;

    std :: cout << "add = " << add << '\n';

    //Double
    double i=4.3;
    double j=7.8;
    double adda=i+j;

    std :: cout << "add = " << adda << '\n';

    //Single Character
    char k = 'P';
    char l = 'Q';

    std :: cout << k << " " << l << '\n';

    //Boolean
    bool power = true;
    bool forsale = false;

    std :: cout << power << std :: endl;
    std :: cout << forsale << std :: endl;

    //String (Objects that represent the sequence of text)
    std :: string name = "Pro_Bro";
    std :: string age = "10";
    
    std :: cout << "Hello " << name << '\n';
    std :: cout << "You are " << age << " years old" << '\n';

    return 0;
}