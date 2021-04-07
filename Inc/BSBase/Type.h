#pragma once

#if !defined(x64) && !defined(x86)
#	include <cstddef>
#	include <type_traits>
#endif

namespace BSBase
{
	using uint8 = unsigned char;
	using uint16 = unsigned char;
	using uint32 = unsigned int;
	using uint64 = unsigned long long;

	using int8 = char;
	using int16 = short;
	using int32 = int;
	using int64 = long long;

	using nullptr_t = decltype(nullptr);

#if defined(x64)
	using size_t = uint64;
	using ssize_t = int64;
	using ptrdiff_t = int64;
#elif defined(x86)
	using size_t = uint32;
	using ssize_t = int32;
	using ptrdiff_t = int32;
#else
	using size_t = ::std::size_t;
	using ssize_t = ::std::make_signed_t<size_t>;
	using ptrdiff_t = ::std::ptrdiff_t;
#endif
}
