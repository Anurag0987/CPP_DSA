// Create first App that prints hellp worls in CPP

#include <iostream>

// namespace, we are telling compiler to use the std namespace for the method like cout and all.
// using namespace std;

// we can also nitpick specific method that you wanted to use, which is more efficient but not much as cpp complier can handle it itself
using std::cout;
using std::endl;

// we can create our own name spcaes as well
namespace anuragsNamespace{
    void printHello(){
        cout << "Hello - from custom namespace!";
    }
}

int main(){
    cout << "Hello World from Anurag nitpicking namespace!" << endl;
    // we can do directly from here as well
    // std::cout << "nitpicking seperately" << std::endl;
    cout << "testing what endl does - answer it adds line after print, if not next cout just continues!" << endl;

    anuragsNamespace::printHello();

}