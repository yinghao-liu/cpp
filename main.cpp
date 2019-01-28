/*
 * Copyright (C) 2019 francis_hao <francis_hao@126.com>
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
#include <stack>
using namespace std;
#define Max(a, b) ((a) > (b)) ? (a) : (b)

class no_trivial
{
    no_trivial(int a, int b)
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
class trivial
{
    string a;
};
int main(void)
{
    cout<<is_trivial<int>::value<<endl;         // 1
    cout<<is_trivial<trivial>::value<<endl;     // 1
    cout<<is_trivial<no_trivial>::value<<endl;  // 0
    cout<<is_pod<int>::value<<endl;  // 0
    cout<<is_pod<trivial>::value<<endl;  // 0
    cout<<is_pod<no_trivial>::value<<endl;  // 0
	return 0;
}








