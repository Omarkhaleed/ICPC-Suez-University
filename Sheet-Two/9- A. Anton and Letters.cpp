string s;
	getline(cin, s);
	string ss = "";
	int count = 0;
	for (int i = 1; i < s.size(); i++) {
		if(s[i] >= 'a' && s[i] <= 'z')
		  ss += s[i];
	}
	//
	int length = ss.size();
	sort(ss.begin(), ss.end());
	for (int i = 0; i < length - 1; i++) {
		if (ss[i] == ss[i + 1])
			count++;
	}
	cout << length - count << "\n";
	
	// The best Code
	string s;
	set<char> st;
	getline(cin, s);
	int le = s.size();
	for (int i = 0; i < le; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			st.insert(s[i]);
	cout << st.size() << endl;
