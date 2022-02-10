string convert(string s) {
	for_each(s.begin(), s.end(), [](char& c) {
		c = tolower(c);
		});
	return s;
}
