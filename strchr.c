#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
char* Strchr(const char* str, int character) {
	assert(str != NULL);
//	char* ret = NULL;
	for (; *str != '\0'; ++str) {
		if(*str == (char)character)
		return str;
	}
	//while (*str) {
	//	ret = str;
	//	if (*str == (char)character) {
	//		return ret;
	//	}
	//	else ++str;
	//}
	if (*str == '\0') {
		return NULL;
	}
}
int main() {
	char str[] = "hello world";
	char* pch;
	printf("²éÕÒ'l'·ûºÅÔÚ×Ö·û´®\%sÖĞ \n", str);
	pch = Strchr(str, 'l');
	while (pch != NULL) {
		printf("found at %d\n", pch - str + 1);
		pch = Strchr((pch + 1), 'l');
	}
	system("pause");
	return 0;
}
