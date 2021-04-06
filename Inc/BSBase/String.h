#pragma once

namespace BSBase
{
#ifdef _UNICODE
    using Char = wchar_t;

#define TEXT(x) L ## x

    #ifdef MSVC
        #define WinMain wWinMain
        #define main wmain
    #endif
#else
    using Char = char;

#define TEXT(x) x
#endif
}