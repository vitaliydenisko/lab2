#include <cmath>


class FuncClass {
public: 
    double FuncA(int n, double x);
};

double FuncClass::FuncA(int n, double x) {
	double sum = 0.0;

	for (int i = 0; i < 3; ++i) {
	    double term = (std::pow(-1, i) * std::tgamma(2 * i +1)) /
		          ((1 - 2 * i) * std::tgamma(i + 1) * std::pow(4, i))
	    sum += term;
	}

	return sum;
}
