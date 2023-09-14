#include "passgen.hpp"

#include <algorithm>
#include <random>

passgen::generator::generator() {
	set_symbols(DEFAULT_SYMBOLS);
}

passgen::generator::generator(std::string const& symbols) {
	set_symbols(symbols);
}

void passgen::generator::set_symbols(std::string const& symbols) {
	_M_symbols.clear();
	std::unique_copy(symbols.cbegin(), symbols.cend(), std::back_inserter(_M_symbols));
}

std::string passgen::generator::generate_password(std::size_t len) const noexcept {
	std::string password(len, '0');

	std::random_device rnd;

	for (std::size_t i = 0; i < len; ++i) {
		auto randi = rnd() % _M_symbols.size();

		password[i] = _M_symbols[randi];
	}

	return password;
}