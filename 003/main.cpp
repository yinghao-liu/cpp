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
enum class A{SPRING, SUMMER};
enum class B{SPRING, SUMMER};
enum class C:char{SPRING, SUMMER};
int main(void)
{
	//A a0=SUMMER;	//error: ‘SUMMER’ was not declared in this scope
	//A a1=0;		//error: cannot convert ‘int’ to ‘A’ in initialization, gcc in c is ok
	A a=A::SUMMER;	//OK
	//int a2 = a;	//error: cannot convert ‘A’ to ‘int’ in initialization, g++ in c++98 is ok
	B b;
	C c;
	cout<<sizeof (int)<<endl;//these two are the same
	cout<<sizeof (b)<<endl;

	cout<<sizeof (char)<<endl;//these two are the same
	cout<<sizeof (c)<<endl;
	return 0;
}
