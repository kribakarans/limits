
#include <stdio.h>
#include <stdint.h> /* for uint* types */
#include <dirent.h> /* for MAXNAMLEN */
#include <limits.h> /* for PATH_MAX and more */
#include <sys/types.h> /* for u_int* types: Not Portable C: use uint* macros defined in 'stdint.h' */

#define print_limit(x) (printf(" %-4d - %s\n", x, #x))
#define print_size(x)  (printf(" %-2ld - %s\n", sizeof(x), #x))

struct st {
	int a;
	char b;
	int c[10];
};

int main()
{
	printf("\nBytes Type");
	printf("\n----- ----\n");

	/* 1 byte */
	print_size(char);
	//print_size(unsigned char);
	puts("");

	/* 2 byte */
	print_size(short);
	print_size(short int);
	//print_size(unsigned short);
	//print_size(unsigned short int);
	//print_size(short unsigned int);
	puts("");

	/* 4 byte */
	print_size(int);
	print_size(unsigned);
	//print_size(unsigned int);
	print_size(float);
	//print_size(long float);  /* ERROR: both ‘long’ and ‘float’ in declaration specifiers */
	//print_size(short float); /* ERROR: both ‘short’ and ‘float’ in declaration specifiers */
	//print_size(unsigned float); /* ERROR: both ‘unsigned’ and ‘float’ in declaration specifiers */
	puts("");

	/* 8 byte */
	print_size(long);
	print_size(long int);
	print_size(long long int);
	print_size(unsigned long);
	//print_size(unsigned long int);
	//print_size(long unsigned int);
	//print_size(unsigned long long int);
	//print_size(short short int); /* ERROR: duplicate 'short' */
	//print_size(long long long int); /* ERROR: ‘long long long’ is too long for GCC */
	puts("");

	/* 8 byte */
	print_size(double);
	puts("");

	/* 16 byte */
	print_size(long double);
	//print_size(long long double); /* ERROR: both ‘long long’ and ‘double’ in declaration specifiers */
	//print_size(double double); /* ERROR: two or more data types in declaration specifiers */
	puts("");

	print_size(uint8_t);
	print_size(u_int8_t);
	print_size(uint16_t);
	print_size(u_int16_t);
	print_size(uint32_t);
	print_size(u_int32_t);
	print_size(uint64_t);
	print_size(u_int64_t);
	print_size(size_t);
	print_size(ssize_t);
	puts("");

	print_limit(MAX_INPUT);
	print_limit(NAME_MAX);
	print_limit(MAXNAMLEN);
	print_limit(PATH_MAX);
	print_limit(PIPE_BUF);
	print_limit(FILENAME_MAX);
	print_limit(BUFSIZ);

	printf("\nPointer sizes:");
	printf("\n------- ------\n");
	printf("sizeof int*   : %ld\n", sizeof(int*));
	printf("sizeof char*  : %ld\n", sizeof(char*));
	printf("sizeof struct*: %ld\n", sizeof(struct st*));
	printf("\n");

	return 0;
}

/*
 Output: Compiled and Ran in 64 bit Linux machine
 cc -g limits.c -o limits.out

Bytes Type
----- ----
 1  - char

 2  - short
 2  - short int

 4  - int
 4  - unsigned
 4  - float

 8  - long
 8  - long int
 8  - long long int
 8  - unsigned long

 8  - double

 16 - long double

 1  - uint8_t
 1  - u_int8_t
 2  - uint16_t
 2  - u_int16_t
 4  - uint32_t
 4  - u_int32_t
 8  - uint64_t
 8  - u_int64_t
 8  - size_t
 8  - ssize_t

 255  - MAX_INPUT
 255  - NAME_MAX
 255  - MAXNAMLEN
 4096 - PATH_MAX
 4096 - PIPE_BUF
 4096 - FILENAME_MAX
 8192 - BUFSIZ

*/

/* EOF */

