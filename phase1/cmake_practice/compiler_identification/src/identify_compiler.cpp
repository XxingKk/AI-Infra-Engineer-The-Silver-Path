#include <iostream>

int main(){
	#if defined(__clang__)
		std::cout << "Compiled by Clang." << std::endl;
		std::cout << "Clang version:" << __clang_major__ << "." << __clang_minor__ <<std:: endl;
	#elif defined(__GNUC__) || defined(__GNUG__)
		std::cout << "Compiled by GCC." << std::endl;
		std::cout << "GCC version:" << __GNUC__ << "." << __GNUC_MINOR__ << std::endl;
	#else
		std::cout << "Unknown Compiler." << std::endl;
	#endif

	return 0;
}
