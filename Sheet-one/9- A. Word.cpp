string Upper(string s) {
	for_each(s.begin(), s.end(), [](char& c) {
		c = toupper(c);
		});
	return s;
}
string Lower(string s) {
	for_each(s.begin(), s.end(), [](char& c) {
		c = tolower(c);
		});
	return s;
}

              string s;
		cin >> s;
		int length = s.size();
		int capital = 0, small = 0;
		for (int j = 0; j < length; j++) {
			if (int(s[j]) >= 65 && int(s[j]) <= 90)
				capital++;
			else
				small++;
		}
		if (capital > small)
			cout << Upper(s) << "\n";
		else
			cout << Lower(s) << "\n";
