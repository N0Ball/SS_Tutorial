#include <iostream>

using namespace std;

struct Foo{
    char greet[20] = "Hello, world!\n";
    bool target;
};

int main (void){
    Foo* foo = new Foo();

    cout << "Size of bool: " << sizeof(new bool()) << endl;

    cout << foo->greet << endl;

    if (foo->target){
        cout << "You got me!" << endl;
    }else{
        cout << "Nothing happens" << endl;
    }

    return 0;
}