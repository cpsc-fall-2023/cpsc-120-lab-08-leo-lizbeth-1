// TLizbeth Flores
// lizflores0905@csu.fullerton.edu
// @lizzy0flor05
// Partners: @Leo90944

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "Error: you must supply three arguments\n";
    return 1;
  }
  // TODO(lizzy): Validate that the number of arguments is correct.
  // If not, print an error message and return a non-zero value.
  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  // TODO(lizzy): Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "."
            << "\n";
  // TODO(lizzy): Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.

  return 0;
}