#include <iostream>
#include <cmath>
#include <functional>
double math(std::string text, std::function<double(double, double)> code, bool use_last_num);
double square_root(std::string, bool use_last_num);