	
#include <iostream>
#include <cstring>

using namespace std;
 
void sayHello(void){
    cout << "Hello, world" << endl;
}
 
string createGreetMsg(string msg){
    msg += "!\n";
    return msg.c_str();
}
 
int main (void){
    sayHello();
    cout << createGreetMsg("Hello, world");
    return 0;
}