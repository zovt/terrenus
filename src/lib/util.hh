#pragma once

namespace terrenus {

constexpr bool is_power_of_two(int n) {
	return (n != 0) && ((n & (n - 1)) == 0);
}

}
