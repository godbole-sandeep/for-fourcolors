#include <stdio.h>

int main() {
	int number = 0;
	printf("Enter an integer: ");
	scanf_s("%d", &number);

	char character = 0;
	printf("Enter a character: ");
	scanf_s(" %c", &character, 1);

	wchar_t wcharacter = 0;
	printf("Enter yet another character: ");
	wscanf_s(L" %lc", &wcharacter, 1);
	
	float number2 = 0.0f;
	printf("Enter a decimal number: ");
	scanf_s("%f", &number2);

	double number3 = 0.0;
	printf("Enter yet another decimal number: ");
	scanf_s("%lf", &number3);

	printf("value of number is %d\n", number);
	printf("value of character is %c\n", character);
	wprintf(L"value of wcharacter is %lc\n", wcharacter);
	printf("value of number2 is %f\n", number2);
	printf("value of number3 is %lf\n", number3);

	return 0;
}

/*
What is buffered input and output?
- Buffered input/output, also known as buffered I/O, is a technique used in
  computer programming to improve the efficiency of input and output operations
  by reducing the number of system calls made to perform these operations.
- In buffered I/O, data is first read from or written to an intermediate buffer
  in memory before being transferred to or from the actual input/output device.
  This buffer allows multiple input/output operations to be batched together,
  reducing the overhead of individual system calls and improving performance.
- There are two main types of buffers: Output buffer and Input buffer.
- Output buffer: When data is written to an output stream, it is initially stored
  in an output buffer in memory. Once the buffer is full or a std::flush operation is
  requested, the data is transferred from the buffer to the actual output device.
- Input buffer: When data is read from an input stream, it is initially read into
  an input buffer in memory. Subsequent read operations first check the input buffer,
  and if it is empty or insufficient, additional data is read from the actual
  input device and stored in the buffer.

What is the purpose of the scanf_s function?
- To accept formatted input from the standard input stream (stdin).

What is standard input stream (stdin)?
- The standard input stream (stdin) is the source from which a program takes input data.
- By default, stdin is linked to the keyboard, allowing the application to receive user input.
- The standard input stream is linked to the input buffer.

What is the general syntax for scanf_s?
- The general syntax for the scanf_s function is:
  scanf_s("format_string", &variable1, &variable2, ..., &variableN); where
  format_string: is a string literal that can be a combination of the following: %d, %f, %lf, %c, %lc.
  &variable1, &variable2, ..., &variableN are the addresses of the variables where the input data will be stored.
- Each variable must be preceded by the address-of operator (&) to pass its memory address to scanf.

How can I read data with scanf_s?
- To read 'int' data: write	scanf_s("%d", &intValue);
- To read 'char' data: write scanf_s(" %c", &character, sizeof(character)); #1
- To read 'wchar_t' data: write	wscanf_s(L" %lc", &wideCharacter, sizeof(wideCharacter)); #1
- To read 'float' data:	write scanf_s("%f", &floatValue);
- To read 'double' data: write scanf_s("%lf", &doubleValue);
- #1: The space before %c is used to consume any leading whitespace characters
      (such as newline or space) before reading the character.

How can I read 'bool' data with scanf_s?
- The scanf_s function does not have a built-in format specifier for reading boolean values directly. 
- However, you can read a boolean value as an integer or a character and then convert it to a bool value.
  int intValue;
  scanf_s("%d", &intValue);
  bool boolValue = intValue != 0;

What is the purpose of the printf function?
- To print formatted output to the standard output stream (stdout).

What is standard output stream (stdout)?
- The standard output stream (stdin) is the destination where a program writes its output data.
- By default, stdout is linked to the console, allowing the application to display information to the user.
- The standard output stream is linked to the output buffer.

What is the general syntax for printf?
- The general syntax for the printf function is:
  printf("format_string", variable1, variable2, ..., variableN); where
  "format_string" is a string literal that specifies the format of the output to be displayed.
  variable1, variable2, ..., variableN: These are the arguments to be printed, corresponding to
  the conversion specifiers in the format string. .

How can I show data with printf?
- To show 'int' data: write printf("The value of the number is: %d\n", intValue);
- To show 'char' data: write printf("The character is: %c\n", character);
- To show 'wchar_t' data: write wprintf(L"The wide character is: %lc\n", wideCharacter);
- To show 'float' data: write printf("The float value is: %f\n", floatValue);
- To show 'double' data: write printf("The double value is: %lf\n", doubleValue);

How can I show 'bool' data with printf?
- The printf function does not have a built-in format specifier for showing boolean values directly.
- However, you can show a boolean value as a string as shown below.
  bool boolValue = true;
  printf("The boolean value is: %s\n", boolValue ? "true" : "false");
- Note: '%s' is the format specifier for a string.

What are the format specifiers?
- %d, %f, %lf, %c, %C are called as format specifiers.
- They determine the format of data read or written to standard input/output streams.
- These specifiers are associated with various data types and determine how the data should be formatted.
*/
