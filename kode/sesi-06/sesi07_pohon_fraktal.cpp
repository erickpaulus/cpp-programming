#include <iostream>
#include <string>
#include <map>
#include <stdlib.h>
// Function to generate the L-System string
std::string generateLSystem(const std::string& axiom, const std::map<char, std::string>& rules, int iterations) {
    std::string current = axiom;

    for (int i = 0; i < iterations; ++i) {
        std::string next;
        for (char c : current) {
            if (rules.find(c) != rules.end()) {
                next += rules.at(c);
            } else {
                next += c;  // Keep the character if no rule is defined
            }
        }
        current = next;
    }
    return current;
}

int main() {
    // Define the L-System: axiom and production rules
    std::string axiom = "F";
    std::map<char, std::string> rules = {
        {'F', "FF-[-F+F+F]+[+F-F-F]"}
    };

    int iterations = 4;
    
    // Generate the L-System pattern
    std::string lsystem = generateLSystem(axiom, rules, iterations);

    // Print the resulting string pattern
    std::cout << "Generated L-System: " << lsystem << std::endl;

    // You can now use this string to visualize fractals using graphics libraries like OpenGL or SFML
    system("pause");
    return 0;
}
