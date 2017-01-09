#include <fstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <cstdlib>

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Usage: count_words <infile>\n";
        return EXIT_FAILURE;
    }

    std::ifstream infile(argv[1]);

    std::istream_iterator<std::string> in{ infile }, end;

    std::cout << "Word count: " << std::distance(in, end);
}
