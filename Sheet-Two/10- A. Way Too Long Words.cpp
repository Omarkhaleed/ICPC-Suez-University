 int size, length;
		cin >> size;
		string s;
		while (size--) {
			cin >> s;
			length = s.size();
			if (length <= 10)
				cout << s << "\n";
			else
				cout << s[0] << length - 2 << s[length - 1] << "\n";
 
		}
