#include <stdio.h>
#include <stdlib.h>

int main() {

	enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT };

	enum Company xerox = FACEBOOK;
	enum Company google = GOOGLE;
	enum Company ebay = MICROSOFT;

	printf("The value of facebook is: %d\n", facebook);
	printf("The value of google is: %d\n", google);
	printf("The value of microsoft is: %d\n", microsoft);

	return 0;
}


