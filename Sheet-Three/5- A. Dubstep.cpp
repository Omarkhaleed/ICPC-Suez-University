
string s;
	bool flag = true;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
			i += 2;
			if (!flag) {
				cout << " ";
			}
			continue;
		}
		else {
			flag = false;
			cout << s[i];
		}
	}
