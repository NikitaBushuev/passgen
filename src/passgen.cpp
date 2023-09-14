#include "passgen.hpp"

#include <cstring>
#include <cctype>

#include <iostream>

static const std::string PASSGEN_USAGE =
	"passgen: usage: passgen [-s <charset>] [-n <count>] [<len>]";

int main(int argc, char **argv) {
	std::string symbols = passgen::generator::DEFAULT_SYMBOLS;

	std::size_t len = 32, times = 1;

	for (int i = 1; i < argc; ++i) {
		if (std::isdigit(argv[i][0])) {
			len = std::atol(argv[i]);
		} else if (std::strcmp(argv[i], "-n") == 0) {
			if (i + 1 >= argc) {
				std::cerr << PASSGEN_USAGE << std::endl;
				return 1;
			}
			times = atol(argv[++i]);
		} else if (std::strcmp(argv[i], "-s") == 0) {
			if (i + 1 >= argc) {
				std::cerr << PASSGEN_USAGE << std::endl;
				return 1;
			}
			symbols = argv[++i];
		} else {
			std::cerr << PASSGEN_USAGE << std::endl;
			return 1;
		}
	}

	passgen::generator generator(symbols);

	for (std::size_t i = 0; i < times; ++i) {
		std::cout << generator.generate_password(len) << std::endl;
	}

	return 0;
}