/*
*
*    This file is part of Alenka.
*
*    Alenka is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    Alenka is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with Alenka.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cm.h"
#include <stdio.h>

void create_c(CudaSet* c, CudaSet* b);
void add(CudaSet* c, CudaSet* b, queue<string> op_v3, map<string,string> aliases,
		 vector<thrust::device_vector<int_type> >& distinct_tmp, vector<thrust::device_vector<int_type> >& distinct_val,
         vector<thrust::device_vector<int_type> >& distinct_hash, CudaSet* a);
void count_avg(CudaSet* c, vector<thrust::device_vector<int_type> >& distinct_hash);		 
void count_simple(CudaSet* c);