#ifndef _FUNCTION_LIKE_MACRO_H
#define _FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) < 0 ? -(x) : (x))

int main() 
{
	int x = -8;
	int y = ABS(x);
	printf("The absolute value of %d is %d\n", x, y);
	return 0;
}

#endif
