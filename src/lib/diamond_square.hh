#pragma once
#include "util.hh"

namespace terrenus {

template <
	int W,
	int H,
	class NumType
	>
std::array<NumType, W*H> generate_diamond_square(
	NumType min_h,
	NumType max_h,
	NumType variance
	) {
	(void)(min_h);
	(void)(max_h);
	(void)(variance);
	
	static_assert(is_power_of_two(W));
	static_assert(is_power_of_two(H));

	std::array<NumType, W*H> output = {};

	return output;
}

}
