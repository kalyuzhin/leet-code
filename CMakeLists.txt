cmake_minimum_required(VERSION 3.28)
project(LeetCode)

set(CMAKE_CXX_STANDARD 17)

add_executable(LeetCode main.cpp
        easy/two_sum.cpp
        easy/two_sum.cpp
        easy/roman_to_int.cpp
        easy/easy.h
        easy/longest_common_prefix.cpp
        easy/palindrome_number.cpp
        easy/valid_parentheses.cpp
        easy/remove_duplicates.cpp
        easy/plus_one.cpp
        easy/length_of_last_word.cpp
        easy/search_insert_position.cpp
        easy/merge_two_sorted_lists.cpp
        medium/medium.h
        medium/zigzag_conversion.cpp
        medium/container_with_most_water.cpp)
