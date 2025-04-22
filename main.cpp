#include <iostream>  
#include "calculator.hpp"  
using std::cin;  
using std::cout;  
using std::endl;  

int main() {  
    double a, b, x;  
    
    cout << "Enter value for a: ";  
    cin >> a;  
    cout << "Enter value for b: ";  
    cin >> b;  
    cout << "Enter value for x: ";  
    cin >> x;  

    Calculator calculator(a, b);  
    cout << "Result: " << calculator(x) << endl;  

    return 0;  
}  
