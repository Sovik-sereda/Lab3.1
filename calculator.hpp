#pragma once  
#include <cmath>  

class Calculator {  
    const double a_;  
    const double b_;  
public:  
    Calculator(const double& a, const double& b) : a_(a), b_(b) {}  

    const double calculate(const double x) const {  
        return b_ * std::pow(x, 3) * std::log(x) + a_;  
    }  

    const double operator()(const double& x) const {  
        return this->calculate(x);  
    }  
};  
