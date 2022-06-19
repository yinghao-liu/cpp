/*
 * Copyright (C) 2022 francis_hao <yinghao_liu@163.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
// main.cpp
#include <concepts>
#include <iostream>
template <class T>
concept C1 = true;

template <C1 T> int name(T a) {
  std::cout << a << std::endl;
  return 1;
}

int main() {
  name(3);
  return 0;
}