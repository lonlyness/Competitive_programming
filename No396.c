#include <stdio.h>

int main(void) {
	int n, m;
	int x, y;
	int xm, ym;
	scanf("%d%d", &n, &m);
	scanf("%d%d", &x, &y);
	xm = (x - 1) % (2 * m);
  printf("xm=%d\n",xm);
	if(xm >= m)xm = 2 * m - xm - 1;
	ym = (y - 1) % (2 * m);
  printf("ym=%d\n",ym);
	if(ym >= m)ym = 2 * m - ym - 1;
  printf("%d %d\n",xm, ym);
	if(xm == ym){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}

	return 0;
}
