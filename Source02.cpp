#include <iostream>

int main() {
	int a = 0;
	std::cout << "Enter an integer: ";
	std::cin >> a;

	float r = 0.0f;
	std::cout << "Enter a decimal number: ";
	std::cin >> r;

	double d = 0.0;
	std::cout << "Enter yet another decimal number: ";
	std::cin >> d;

	char c = 0;
	std::cout << "Enter a character: " << std::flush;
	std::cin >> c;

	wchar_t wc = 0;
	std::cout << "Enter yet another character: " << std::flush;
	std::wcin >> wc;

	std::cout << "a = " << a << std::endl;
	std::cout << "r = " << r << std::endl;
	std::cout << "d = " << d << std::endl;
	std::cout << "c = " << c << std::endl;
	std::wcout << "wc = " << wc << std::endl;

	return 0;
}

/*
What is std::cout?
- std::cout is an object of the ostream class in C++.
- It represents the standard output stream, typically the console,
  and is used for outputting data to the console.

What is the << operator known as?
- The << operator is known as the 'stream insertion operator'.

What is std::cin?
- std::cin is an object of the istream class in C++.
- It represents the standard input stream, typically the keyboard,
  and is used for reading input from the console.

What is the >> operator known as?
- The >> operator is known as the 'stream extraction operator'.

What does std::endl do?
- std::endl is a manipulator in C++.
- When used with std::cout, it inserts a newline into the output stream and flushes the buffer,.
  ensuring that all buffered output is written to the console immediately.

What does std::flush do?
- std::flush is a manipulator in C++.
- When used with std::cout, it ensures that all buffered output is written to the console immediately,
  but does not insert a newline character.

How is std::endl different from the escape sequence '\n'?
- '\n' when used in a string literal or character constant,
  it simply represents a newline character and does not perform
  any flushing of the output buffer. On the contrary, std::endl
  besides inserting new line character in the stream also
  flushes the buffer.

What is iostream?
- 'iostream' is the header file that provides the declarations for std::cout, std::cin
  along with stream classes like ostream and istream.
- To use the 'std::cin' and 'std::cout' objects, the source file must include 'iostream'.

What are the differences between C and C++ input/output methods?
- To use 'scanf_s' and 'printf', we need to include 'stdio.h'.
  To use 'std::cin' and 'std::cout', we need to include 'iostream'.
- 'scanf_s' and 'printf' are functions. 'std::cin' and 'std::cout' are objects.
- Format specifier is required while working with 'scanf_s' and 'printf'.
  No such requirement while working with 'std::cin' and 'std::cout'.
- Address of the variable must passed to 'scanf_s'.
  No such requirement while working with 'std::cin'.
- 'scanf_s' and 'printf' can be used in both C and C++ programs.
  'std::cin' and 'std::cout' can be used only in C++ programs.
*/
