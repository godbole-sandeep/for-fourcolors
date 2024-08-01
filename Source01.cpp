#include <cstring>
#include <iostream>

int main() {
    // Declare and initialize character arrays
    char source[] = "Hello";
    char destination[50];

    // Use strcpy_s to copy source to destination
    errno_t copyResult = strcpy_s(destination, sizeof(destination), source);
    if (copyResult != 0) {
        std::cerr << "Error copying string." << std::endl;
        return 1;
    }
    std::cout << "After strcpy_s, destination: " << destination << std::endl;

    // Use strcat_s to concatenate strings
    char toAppend[] = " World";
    errno_t catResult = strcat_s(destination, sizeof(destination), toAppend);
    if (catResult != 0) {
        std::cerr << "Error concatenating string." << std::endl;
        return 1;
    }
    std::cout << "After strcat_s, destination: " << destination << std::endl;

    // Use strlen to get the length of the string
    size_t length = strlen(destination);
    std::cout << "Length of destination: " << length << std::endl;

    // Use strcmp to compare strings
    char compareStr1[] = "Hello World";
    char compareStr2[] = "Hello Universe";
    int compareResult = strcmp(compareStr1, compareStr2);
    if (compareResult == 0) {
        std::cout << "The strings are equal." << std::endl;
    }
    else if (compareResult < 0) {
        std::cout << "compareStr1 is less than compareStr2." << std::endl;
    }
    else {
        std::cout << "compareStr1 is greater than compareStr2." << std::endl;
    }

    return 0;
}

/*
What are the key points to note in the program above?
- The program illustrates the usage of essential standard string library
  functions, such as 'strcpy_s', 'strcat_s', 'strlen', and 'strcmp'. 
- Both 'strcpy_s' and 'strcat_s' are safer versions of 'strcpy' and 'strcat' because
  they check the size of the destination buffer before performing any action.
- In the past, 'strcpy' and 'strcat' were popular, but they were unsafe since they
  did not check the size of the destination buffer.

What do strcpy_s, strcat_s, strlen and strcmp do?
- strcpy_s: Copies a string to a destination buffer while checking the buffer size
  to prevent overflow.
- strcat_s: Appends a string to the end of a destination buffer while ensuring the
  buffer size is not exceeded.
- strlen: Returns the length of a null-terminated string.
- strcmp: Compares two strings lexicographically and returns an integer indicating
  their relationship.
  
What integer values does strcmp return?  
- The strcmp function returns the following integers:
  1. 0: If the two strings are equal.
  2. Negative Value: If the first string is lexicographically less than the second string.
  3. Positive Value: If the first string is lexicographically greater than the second string.
*/