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
template <typename... T>
/*变长参数函数模板声明*/
void print(T... val);

/*边界条件*/
void print(void)
{
	cout<<"here end"<<endl;
}

/*递归的特例化定义*/
template <typename T1, typename... T2>
void print(T1 start, T2... var)
{
	cout<<"sizeof ... now is: "<<sizeof... (var)<<endl;
	cout<<start<<endl;
	print(var...);
}


int main(void)
{
	print(1,2,3,4);
	return 0;
}








