#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {
    int answer = left-right;
    answer = answer*answer;
    return answer;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {

    if (mask < 0 || bit_pos < 0) {
      return false;
    }

    std::string s = "";
    while (mask != 0) {
     s += std::to_string(mask % 2);
      mask /= 2;
    }

    if (s[bit_pos] == '1') {
      return true;
    }
    else {
      return false;
    }

  }

  // Task 3
  int max3(int left, int middle, int right) {

    int answer;
    if (left >= middle) {
      answer = left;
    } else {
      answer = middle;
    }
    if (answer >= right) {
      return answer;
    } else {
      return right;
    }

  }

  // Task 4
  void swap_args(int *left, int *right) {

    if (left == nullptr || right == nullptr) {
      return;
    }
    else {
      int temp = *left;
      *left = *right;
      *right = temp;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    if (arr == nullptr || length <= 0) {
      return 0;
    }
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }

    return sum;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    int* max = nullptr;
    if (arr == nullptr || length <= 0) {
      return nullptr;
    }
    else {
      max = &arr[0];
      int temp = arr[0];
      for (int i = 1; i < length; i++) {
        if (arr[i] > temp) {
          max = &arr[i];
          temp = arr[i];
        }
      }
    }
    return max;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    if (length <= 0) {
      return nullptr;
    }

    int *arr = new int[length];

    for (int i = 0; i < length; i++) {
      arr[i] = init_value;
    }

    return &arr[0];
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if (arr_in == nullptr || length <= 0) {
      return nullptr;
    }

    int *arr = new int[length];

    for (int i = 0; i < length; i++) {
      arr[i] = arr_in[i];
    }

    return arr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    }
    else if (length <= 0) {
      os << "Invalid argument: length\n";
    }
    else if (k <= 0) {
      os << "Invalid argument: k\n";
    }
    else {
      for (int i = 0; i < length; i += k) {
        os << arr[i] << "\t";
      }
    }
  }
}  // namespace assignment
