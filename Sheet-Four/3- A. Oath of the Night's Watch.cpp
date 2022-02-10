vector<int>v;
 
	int size;
	cin >> size;
	int input;
	while (size--) {
		cin >> input;
		v.push_back(input);
	}
	int length = v.size() - 1, count = 0;
	sort(v.begin(), v.end());
	for (int i = 1; i < length; i++) {
		if (v[0]<v[i] && v[length]>v[i])
			count++;
	}
	cout << count << "\n";
