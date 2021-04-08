#pragma once

#include "Type.h"

namespace BSBase
{
	using Result = int32;

	constexpr bool Succeeded(Result result) noexcept { return result >= 0; }
	constexpr bool Failed(Result result) noexcept { return result < 0; }
}
