#ifndef UD_MATH_ARRAY_H
# define UD_MATH_ARRAY_H

// Lib
#include <ud_array.h>
#include <ud_math.h>

// Macro
# define ud_matha_si_sort(arr)          (if (arr->type_s != sizeof(size_t)) ud_ut_error("Input must be a float array"); else ud_math_merge_sort((size_t*)arr->val, 0, arr->len - 1);)

// Structures

// Prototypes
ud_arr_float_a                      *ud_matha_softmax(ud_arr_float_a* x);
ud_arr_float_a                      *ud_matha_itoa(long long n);
float                               ud_matha_mean(ud_arr_float_a *x);
float                               ud_matha_min_a(ud_arr_float_a *x);
float                               ud_matha_max_a(ud_arr_float_a *x);

#endif