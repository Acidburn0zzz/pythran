#ifndef PYTHONIC_INCLUDE_MATH_ERF_HPP
#define PYTHONIC_INCLUDE_MATH_ERF_HPP

#include "pythonic/include/utils/functor.hpp"
#include <cmath>

PYTHONIC_NS_BEGIN

namespace math
{
  DECLARE_FUNCTOR_2(erf, std::erf);
}
PYTHONIC_NS_END

#endif
