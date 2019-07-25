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
#include <stdlib.h>
using namespace std;
// raw string
const char *a=R"(
Welcome to Ubuntu 18.04.1 LTS (GNU/Linux 4.15.0-72-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
 
  System information as of Thu Jul 25 22:23:26 CST 2019
 
  System load:    0.03               Processes:              202
  Usage of /home: 58.1% of 10.03GB   Users logged in:        1
  Memory usage:   21%                IP address for ens33:   192.168.147.128
  Swap usage:     0%                 IP address for docker0: 172.17.0.1
 
  => /boot is using 87.4% of 238MB
           
)";

int main(void)
{
	printf("%s\n", a);
	return 0;
}

