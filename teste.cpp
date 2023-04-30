#include<assert.h>
#include"functionalitati.h"
void teste()
{
	int n = 6,st=0,dr=0;
	int v1[6] = {1,3,2,10,5,6};
	int rez1 = secv_dif(v1, n, st, dr);
	assert(rez1==6);
	int m=10, p1=0, p2=0;
	int v3[11] = {1,3,2,10,5,6,3,7,6,11};
	int rez3 = secv_dif(v3, m, p1, p2);
	assert(rez3==10);


	int v2[6] = {1, -1, 2, -3, 4, -5};
	int rez2= secv_elem_dif(v2, n, st, dr);
	assert(rez2==6);
	int i=0, j=0, o=10;
	int v4[11] = {1, -1, 2, -3, 4, -5, 6, -7, 8, -9};
	int rez4= secv_elem_dif(v4, o, i, j);
	assert(rez4 == 9);

}
