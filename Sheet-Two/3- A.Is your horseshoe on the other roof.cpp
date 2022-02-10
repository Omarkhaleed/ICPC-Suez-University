 vector<int>v;
		int size = 4;
		int input;
		while (size--) {
			cin >> input;
			v.push_back(input);
		}
		sort(v.begin(), v.end());
		int count = 0;
		for (int i = 0; i < v.size() - 1; i++) {
			if (v[i] == v[i + 1])
				count++;
		}
 
		cout << (count) << "\n";
