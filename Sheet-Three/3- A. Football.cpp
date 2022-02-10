int n, count = 0;
	string s;
	vector<string>v;
	cin >> n;
	while (n--) {
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	if (v.size() == 1)
		cout << v[0] << "\n";
	else {
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == v[i + 1])
				count++;
			else
				break;
		}
		if (count+1 > (v.size() / 2))
			cout << v[0] << "\n";
		else
			cout << v[v.size() - 1] << "\n";
	}
