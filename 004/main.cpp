/*
 * Copyright (C) 2018 francis_hao <francis_hao@126.com>
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
#include <iostream>
using namespace std;
/**************base******************/
struct base{
	void print(double i);
	void print(const char *i);
};
void base::print(double i)
{
	cout<<"base:"<<i<<endl;
}
void base::print(const char *i)
{
	cout<<"base:"<<i<<endl;
}
/*************derived******************/
struct derived: base{
	using base::print;
	void print(int i);
};

void derived::print(int i)
{
	cout<<"derived:"<<i<<endl;
}
/******************main*********************/
int main(void)
{
	base a;
	a.print(1.1);

	derived b;
	b.print(1);
	b.print(1.1);
	b.print("string");
	return 0;
}
