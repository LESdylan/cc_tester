// Copyright 2025 <dlesieur>
#ifndef INCS_ASSERT_H_
#define INCS_ASSERT_H_

#include <type_traits>

namespace testing {

class AssertionResult {
 public:
  template <typename T>
  explicit AssertionResult(
      const T& success,
      typename std::enable_if<
          !std::is_convertible<T, AssertionResult>::value>::type* = nullptr)
      : success_(success) {}
};

}  // namespace testing

#endif  // INCS_ASSERT_H_
