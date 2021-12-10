
//#include "../ft_tests.h"
#include "libft.h"
#include <stdio.h>
#include <ctype.h>


int main (void)
{
        //ft_isalpha.c
	printf("%s\n", "************");
	printf("%s\n", "*ft_isalpha*");
	printf("%s\n", "************");
	printf("1 %d : %d\n", isalpha('1'), ft_isalpha('1'));
        printf("2 %d : %d\n", isalpha('a'), ft_isalpha('a'));
        printf("3 %d : %d\n", isalpha('Z'), ft_isalpha('Z'));
        printf("4 %d : %d\n", isalpha('@'), ft_isalpha('@'));
        printf("5 %d : %d\n", isalpha('M'), ft_isalpha('M'));
        printf("6 %d : %d\n", isalpha(24), ft_isalpha(24));
        printf("7 %d : %d\n", isalpha('0'), ft_isalpha(24));

	//ft_isdigit.c
	printf("%s\n", "************");
        printf("%s\n", "*ft_isdigit*");
        printf("%s\n", "************");
	printf("%d : %d\n", isdigit(48), ft_isdigit(48));
        printf("%d : %d\n", isdigit('0'), ft_isdigit('0'));
        printf("%d : %d\n", isdigit('5'), ft_isdigit('5'));
        printf("%d : %d\n", isdigit(53), ft_isdigit(53));
        printf("%d : %d\n", isdigit('a'), ft_isdigit('a'));

	//ft_isalnum.c
	printf("%s\n", "************");
        printf("%s\n", "*ft_isalnum*");
        printf("%s\n", "************");
	printf("%d : %d\n", isalnum(48), ft_isalnum(48));
        printf("%d : %d\n", isalnum('0'), ft_isalnum('0'));
        printf("%d : %d\n", isalnum('M'), ft_isalnum('M'));
        printf("%d : %d\n", isalnum('@'), ft_isalnum('@'));
        printf("%d : %d\n", isalnum('r'), ft_isalnum('r'));
        printf("%d : %d\n", isalnum('|'), ft_isalnum('|'));

	//ft_isascii.c
	printf("%s\n", "************");
        printf("%s\n", "*ft_isascii*");
        printf("%s\n", "************");
	printf("%d : %d\n", isascii(0), ft_isascii(0));
        printf("%d : %d\n", isascii('M'), ft_isascii('M'));
        printf("%d : %d\n", isascii('@'), ft_isascii('@'));
        printf("%d : %d\n", isascii('r'), ft_isascii('r'));
        printf("%d : %d\n", isascii('|'), ft_isascii('|'));
        printf("%d : %d\n", isascii(48), ft_isascii(48));
        printf("%d : %d\n", isascii(127), ft_isascii(127));
        printf("%d : %d\n", isascii(155), ft_isascii(155));
        printf("%d : %d\n", isascii(-1), ft_isascii(-1));

	//ft_isprint.c
	printf("%s\n", "************");
        printf("%s\n", "*ft_isprint*");
        printf("%s\n", "************");
	printf ("%d : %d\n", isprint(32), ft_isprint(32));
        printf ("%d : %d\n", isprint(0), ft_isprint(0));
        printf ("%d : %d\n", isprint('A'), ft_isprint('A'));
        printf ("%d : %d\n", isprint('@'), ft_isprint('@'));
        printf ("%d : %d\n", isprint(127), ft_isprint(127));
        printf ("%d : %d\n", isprint(155), ft_isprint(155));
        printf ("%d : %d\n", isprint('0'), ft_isprint('0'));
        printf ("%d : %d\n", isprint(-1), ft_isprint(-1));

	//ft_strlen.c
	printf("%s\n", "***********");
        printf("%s\n", "*ft_strlen*");
        printf("%s\n", "***********");
	printf("%lu : %lu\n", strlen("Hello"), ft_strlen("Hello"));
        printf("%lu : %lu\n", strlen("1245"), ft_strlen("1245"));
        printf("%lu : %lu\n", strlen("Setter..."), ft_strlen("Setter..."));
        printf("%lu : %lu\n", strlen("@@@@@@"), ft_strlen("@@@@@@"));
        printf("%lu : %lu\n", strlen(""), ft_strlen(""));

	//ft_memset.c
        printf("%s\n", "***********");
        printf("%s\n", "*ft_memset*");
        printf("%s\n", "***********");

	int array [] = { 54, 85, 20, 63, 21 };
    	size_t size = sizeof( int ) * 5;
    	int length;

    	/* Display the initial values */
    	for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    	}
    	printf( "\n" );

    	/* Reset the memory bloc */
    	ft_memset( array, 0, size );

    	/* Display the new values */
    	for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    	}
    	printf( "\n" );

	//ft_bzero.c
        printf("%s\n", "*******");
        printf("%s\n", "*bzero*");
        printf("%s\n", "*******");

	int i_array[10]   = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};
    	short s_array[12] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    	size_t pos = 0;

    	bzero(i_array, (6 * sizeof(int)));
    	bzero(s_array, (10 * sizeof(short)));

   	int i_array1[10]   = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7};

   	short s_array1[12] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
   	pos = 0;

   	ft_bzero(i_array1, (6 * sizeof(int)));
   	ft_bzero(s_array1, (10 * sizeof(short)));

     	for(; pos < 10; pos++)
    	{
        	printf("%lu: %d : %d\n", (pos + 1), i_array[pos], i_array1[pos]);
    	}

    	for(pos = 0; pos < 12; pos++)
    	{
        	printf("%lu: %d : %d\n", (pos + 1), s_array[pos], s_array1[pos]);
   	}

	//ft_memcpy.c
        printf("%s\n", "***********");
        printf("%s\n", "*ft_memcpy*");
        printf("%s\n", "***********");
		int array1 [] = { 57, 85, 29, 63, 21 };
		//int * array1 = NULL;
    	int * copy = NULL;
    	int * copy1 = NULL;
    	/*int*/ length = sizeof( int ) * 5;

    	/* Memory allocation and copy */
    	copy = (int *) malloc( length );
    	copy1 = (int *) malloc( length );
    	memcpy( copy, array1, length );
    	ft_memcpy( copy1, array1, length );

    	/* Display the copied values */
    	for( length=0; length<5; length++ ) {
        printf( "%d : %d\n", copy[length], copy1[length] );
    	}	

    	free( copy );
    	free( copy1 );

	//ft_memmove.c
        printf("%s\n", "************");
        printf("%s\n", "*ft_memmove*");
        printf("%s\n", "************");

	char a[]="ABCDEFGH";

        char b[]="ABCDEFGH";

        ft_memmove(a+3,a,5);
        puts(a);

        memmove(b+3,b,5);
        puts(b);
		
		//ft_strlcpy.c
		printf("%s\n", "************");
        printf("%s\n", "*ft_strlcy*");
        printf("%s\n", "************");
		
		//ft_strlcat.c
		printf("%s\n", "************");
        printf("%s\n", "*ft_strlcat*");
        printf("%s\n", "************");

		char s1a[10] = "Test1";
		char s2a[] = "OK";
		char s1b[10] = "Test1";
		char s2b[] = "OK";
		char s3a[10] = "";
		char s4a[] = "";
		char s3b[10] = "";
		char s4b[] = "";
		char s5a[20] = "Shorter";
		char s6a[] = "ThanMyself";
		char s5b[20] = "Shorter";
		char s6b[] = "ThanMyself";
		
	printf("%d:%d\n", ft_strlcat(s1a, s2a, 0), strlcat(s1b, s2b, 0));
	printf("%d:%d\n", ft_strlcat(s3a, s4a, 10), strlcat(s3b, s4b, 10));
	printf("%d:%d\n", ft_strlcat(s5a, s6a, 10), strlcat(s5b, s6b, 10));

	//ft_toupper.c
        printf("%s\n", "************");
        printf("%s\n", "*ft_toupper*");
        printf("%s\n", "************");

	printf("%c : %c\n",ft_tolower('A'), tolower('A'));//a
        printf("%c : %c\n",ft_tolower('@'), tolower('@'));//@
        printf("%c : %c\n",ft_tolower('!'), tolower('!'));//!
        printf("%c : %c\n",ft_tolower('s'), tolower('s'));//s
        printf("%c : %c\n",ft_tolower(80), tolower(80));//p

	//ft_tolower.c
        printf("%s\n", "************");
        printf("%s\n", "*ft_toupper*");
        printf("%s\n", "************");

	printf("%c : %c\n",ft_toupper('A'), toupper('A'));//A
        printf("%c : %c\n",ft_toupper('@'), toupper('@'));//@
        printf("%c : %c\n",ft_toupper('!'), toupper('!'));//!
        printf("%c : %c\n",ft_toupper('s'), toupper('s'));//S
        printf("%c : %c\n",ft_toupper(80), toupper(80));//P
	
	
	//ft_strchr.c
        printf("%s\n", "***********");
        printf("%s\n", "*ft_strchr*");
        printf("%s\n", "***********");
		
	char *ptr;
   	char *ptr1;
  
  // void *memchr(const void *s, int c, size_t n)									
        // Retourner un pointeur sur la première occurence
   		ptr = strchr("Apprendre à programmer en C/C++1", 'C');
   		ptr1 = ft_strchr("Apprendre à programmer en C/C++2", 'C');
// *memchr(const void *s, int c, size_t n)		
        //Afficher la chaîne à partir de premier char trouvé
		printf("%s\n",ptr);
   		printf("%s\n",ptr1);

		//ft_strrchr.c
        printf("%s\n", "************");
        printf("%s\n", "*ft_strrchr*");
        printf("%s\n", "************");

        // Retourner un pointeur sur la dernière occurence
        ptr = strrchr("Apprendre à programmer en C/C++1", 'C');
        ptr1 = ft_strrchr("Apprendre à programmer en C/C++2", 'C');

        //Afficher la chaîne à partir de premier char trové
        printf("%s\n",ptr);
        printf("%s\n",ptr1);
		

		//ft_strncmp.c
        printf("%s\n", "************");
        printf("%s\n", "*ft_strncmp*");
        printf("%s\n", "************");

		char *str = "tralalalala";

   		printf("%d : %d\n", strncmp("abcdef", "ABCDEF", 20), ft_strncmp("abcdef", "ABCDEF", 20));
		printf("%d : %d\n", strncmp("Hello", "HEllo", 0), ft_strncmp("Hello", "HEllo", 0));
		printf("%d : %d\n", strncmp("Hello", "HEllo", 6), ft_strncmp("Hello", "HEllo", 6));
		printf("%d : %d\n", strncmp(str+3, str, 10), ft_strncmp(str+3, str, 10));
		printf("%d : %d\n", strncmp("totototo", "toto", 10), ft_strncmp("totototo", "toto", 10));
		printf("%d : %d\n", strncmp("vvv", "", 77), ft_strncmp("vvv", "", 77));

	
	//ft_atoi.c
        printf("%s\n", "*********");
        printf("%s\n", "*ft_atoi*");
        printf("%s\n", "*********");
	printf("%d\n", ft_atoi("-7"));
	printf("%d\n", atoi("-7"));
	printf("%d\n", ft_atoi("99999999999"));
        printf("%d\n", atoi("9999999999"));
	//printf("%d\n", ft_atoi(NULL));
       	//printf("%d\n", atoi(NULL));
	printf("%d\n", ft_atoi("\e06050"));
        printf("%d\n", atoi("\e06050"));
	printf("%d\n", ft_atoi("       +78atata"));
        printf("%d\n", atoi("       +78atata"));

        return (0);
}
