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
#include <vector>
#include <string.h>
#include <map>
using namespace std;
struct ptrcmp{
	bool operator() (const char* const& s1, const char* const& s2) const
	{
		return strcmp(s1,s2)<0;
	}
};
int main(void)
{
	const char *ss[]={"aaa","bbb"};
	map<const char*,int,ptrcmp> host_map;
	char arr[20] ="aaa"; 
	const char* str= "aaa"; 

	host_map.insert(make_pair(ss[0],0));
	host_map.insert(make_pair(ss[1],1));

	const char* kkk=arr;
	map<const char*,int,ptrcmp>::iterator iter=host_map.find(arr);
	cout<<"here arr is :"<<arr<<endl;
	if (iter != host_map.end()){
		cout<<"find it"<<endl;
		cout<<iter->first<<" : "<<iter->second<<endl;
	}else{
		cout<<"can not find it"<<endl;
	}


	return 0;
}
