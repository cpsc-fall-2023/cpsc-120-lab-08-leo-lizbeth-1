// Lizbeth Flores
// lizflores0905@csu.fullerton.edu
// @lizzy0flor05
// Partners: @Leo90944

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  // TODO(Leo) Validate that there is at least one command line argument.
  // If not, print an error message and return a non-zero value.
  if (arguments.size() == 1) {
    std::cerr << "error: you must supply at least one number\n";
    return 1;
  }
  // TODO(Leo) Write a for-each loop to sum (add up) all of the command line
  // arguments.
  // Use a double or float type so that your program preserves fractional
  // values.
  // The loop needs to skip over the command name, which is the first element
  // of the arguments vector.
  // Each argument is a std::string. You will need to convert each string into
  // a number with the std::stod or std::stof function.
  double sum{0.0};
  for (const std::string& num :
       std::vector<std::string>(arguments.begin() + 1, arguments.end())) {
    sum += std::stod(num);
  }
  // TODO(Leo) After the loop has finished summing the arguments, calculate the
  // average of the values. Recall that the average is the total value divided
  // by the number of values.
  double average = sum / static_cast<double>(arguments.size() - 1);
  // TODO(Leo) Use cout to print out a message of the form
  // average = *AVERAGE*
  // on its own line.
  std::cout << "average = " << average << "\n";
  return 0;
}
