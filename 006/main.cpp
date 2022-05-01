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


class myexception : public exception{
public:
	myexception(const string &what) : message(what){}
	virtual const char* what() const noexcept{return message.c_str();}
private:
	string message;
};

int main(void)
{
	myexception a("exception a");
	//there is a copy constructor in base class exception
	myexception b=a;
	//throw a;
	// when I throw a exception b, and there is no catch, the what() function is called automatically;
	throw b;
	return 0;
}








