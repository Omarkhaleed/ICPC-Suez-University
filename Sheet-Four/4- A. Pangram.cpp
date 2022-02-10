string Lower(string s) {
	for_each(s.begin(), s.end(), [](char& c) {
		c = tolower(c);
		});
	return s;
}

        int n;
	cin >> n;
	string s;
	cin >> s;
	string snew = Lower(s);
 
	if (n < 26)
		cout << "NO"<<"\n";
	else
	{
		set<char>ss;
		for (int i = 0; i < snew.size(); i++) {
			ss.insert(snew[i]);
		}
		if (ss.size() == 26)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
