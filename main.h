#include <stdio.h>
#include <stdlib.h>

int main() {

	enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT };

	enum Company xerox = FACEBOOK;
	enum Company google = GOOGLE;
	enum Company ebay = MICROSOFT;

	printf("The value of facebook is: %d\n", xerox);
	printf("The value of google is: %d\n", google);
	printf("The value of microsoft is: %d\n", ebay);

	return 0;
}


