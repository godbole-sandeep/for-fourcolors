#include <iostream>

#define PI 3.14159  // Define macro PI with value 3.14159

int main() {
	double radius = 5.0;
	double area = PI * radius * radius; // Use macro PI like a variable
	std::cout << "Area of circle: " << area << std::endl;
	double perimeter = 2 * PI * radius;
	std::cout << "Perimeter of circle: " << perimeter << std::endl;
	return 0;
}

/*
- When program is compiled, preprocessor replaces macro variables by their corresponding value.
- Note macro variable is not a memory variable hence no memory is reserved for macro variable.
- Macro variable improves program readability and maintenance.

How can I see pre-processed output?
- First you need to set certain project properties.
- Click on Project > Properties to open the Project Properties dialog.
- In the Category box (the Treeview box on the left side of the dialog), expand C/C++.
- Then, select the Preprocessor item.
- Set the following properties: Preprocess to File and Preprocess Suppress Line Numbers to Yes.
- Now close the Project Properties dialog by clicking the OK button.
- Now go to Solution Explorer and right-click on the source file.
- A popup will appear.
- In the popup, click on the Compile command.
- The source file will compile and produce an additional file with the extension .i,
  in addition to the .obj file, in the Debug folder.
- Now open the .i file.
- The .i file contains the preprocessed output.
- Remember, once you set "Preprocess to File" and "Preprocess Suppress Line Numbers" to "Yes," you may start
  encountering issues when building the executable.
- Therefore, it is essential to reset these properties to "No" to avoid issues with building the executable.
*/
