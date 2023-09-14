#pragma once

#include <string>

namespace passgen {
	class generator {
	protected:
		std::string _M_symbols;

	public:
		inline static const std::string DEFAULT_SYMBOLS =
			"_"
			"0123456789"
			"abcdefghijklmnopqrstuvwxyz"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			".,:;"
			"()[]{}<>"
			"\"\'`"
			"=+-*/%&|^~!@#$\\?";

		generator();
		generator(std::string const& symbols);

		void set_symbols(std::string const& symbols);

		std::string generate_password(std::size_t len) const noexcept;
	};
}