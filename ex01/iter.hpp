#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T, typename F>
void iter(T* arr, const size_t arr_size, F func)
{
    for (size_t i = 0; i < arr_size; ++i)
    {
        func(arr[i]);
    }

    return;
}

#endif
