string convert(string s) {
	for_each(s.begin(), s.end(), [](char& c) {
		c = tolower(c);
		});
	return s;
}

string s1, s2;
	cin >> s1 >> s2;
	string s1new=convert(s1);
	string s2new=convert(s2);
	int flag = 0;
	int n = s1.size();
	
	int i = 0;
	
	
		for (int j = 0; j < n; j++) {
			if (s1new[j] < s2new[j]) {
				flag = -1;
				break;
			}
			else if (s1new[j] > s2new[j]) {
				flag = 1;
				break;
			}
			else
				flag = 0;
			
	
	    } 
	cout << flag << "\n";
