
#include <iostream>

class MathOp {
public:
	int num;
	int square(int x) {
		num = x * x;
		return num;
	}
	~MathOp() {
		std::cout << "Result: " << num;
	}
};

