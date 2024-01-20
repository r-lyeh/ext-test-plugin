API int plugme();

#if CODE

int plugme() {
	return 2024;
}

AUTORUN {
	puts("ext-plugin-test installed");
}

#endif
