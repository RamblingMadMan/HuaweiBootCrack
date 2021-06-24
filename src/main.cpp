#include <cstdlib>
#include <cstdint>

#include <ranges>
#include <algorithm>

namespace ranges = std::ranges;
namespace views = std::ranges::views;

using Code = std::uint64_t;

constexpr Code codeStart = 1000000000000000;
constexpr Code codeEnd = 10000000000000000;

bool tryCode(Code code){
	return std::system("fastboot oem unlock ") == 0;
}

bool findCode

int main(int argc, char *argv[]){
	(void)argc; (void)argv;
	
	Code unlockCode = codeEnd;
	
	auto searchFn = [&](Code lhs, Code rhs) -> bool{
		
		
		
	};
	
	bool foundCode = checkCode(codeStart) | ranges::binary_search(views::iota(codeStart, codeEnd), Code(0), searchFn);
	
	return foundCode ? 0 : 1;
}
