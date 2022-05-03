/*
 * Copyright (C) 2017 francis_hao <francis_hao@126.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 * NON INFRINGEMENT.  See the GNU General Public License for more
 * details.
 *
 */
#include <iostream>
using namespace std;

class point {
public:
  int get_x(void);
  int get_y(void);
  point();
  point(int x, int y);

private:
  int x;
  int y;
};

int point::get_x(void) { return x; }

int point::get_y(void) { return y; }

point::point() : x(11), y(11) {}

point::point(int x, int y) : x(x), y(y) {}

int main(void) {
  point p_a;
  point p_b(21, 22);
  cout << p_a.get_x() << " " << p_a.get_y() << endl;
  cout << p_b.get_x() << " " << p_b.get_y() << endl;
  return 0;
}
