#pragma once

#include "Base.h"

namespace BSBase
{
    template <class T, int N>
    constexpr size_t ArraySize(const T(&arr)[N]) noexcept
    {
        return N;
    }

    template <class T>
    NO_ODR void DeleteObjects(T&& ptr)
    {
        if (ptr)
        {
            delete ptr;
            ptr = nullptr;
        }
    }

    template <class T, class... Others>
    NO_ODR void DeleteObjects(T&& ptr, Others&&... others)
    {
        DeleteObjects(std::forward<T>(ptr));
        DeleteObjects(std::forward<Others>(others)...);
    }
}
