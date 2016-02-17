bool all_unique(const char* str) {
	int is_unique[256] = {0};
	for (int i = 0; str[i] != '\0'; ++i) {
		char current = str[i];
		if (is_unique[str[i] == 0) {
			is_unique[str[i]] = str[i];
		} else {
			return false;
		}
	}
	return true;
}

