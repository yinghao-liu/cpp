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
#include <stack>
using namespace std;



int main(void)
{
    stack<int> all;
    all.push(10);
    all.push(20);
    /* top() return a reference to the top element
     * if you use a reference to store the data, when pop and then push a 
     * new data, the difference is show below
     */
    int a = all.top(); 
    int &b = all.top(); 
    cout<<"befor pop a "<<a<<endl;
    cout<<"befor pop b "<<b<<endl;
    all.pop();
    cout<<"after pop a "<<a<<endl;
    cout<<"after pop b "<<b<<endl;
    cout<<"after pop top "<<all.top()<<endl;
    all.push(30);
    cout<<"after push a "<<a<<endl;
    cout<<"after push b "<<b<<endl;

	return 0;
}








