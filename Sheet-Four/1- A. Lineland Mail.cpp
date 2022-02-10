vector<int>v;
	int size;
	cin >> size;
	int input;
	while (size--) {
		cin >> input;
		v.push_back(input);
	}
	int length = v.size();
	for (int i = 0; i < length; i++) {
		if (i != 0 && i != length - 1) {
			cout << min(abs(v[i] - v[i + 1]), abs(v[i] - v[i - 1])) << " ";
			cout << max(abs(v[i] - v[0]), abs(v[i] - v[length - 1])) << "\n";
		}
		else if (i == 0 && i != length - 1) {
			cout << abs(v[i] - v[i + 1]) << " ";
			cout << max(abs(v[i] - v[length - 1])) << "\n";
		}
		else {
			cout <<abs(v[i] - v[i - 1]) << " ";
			cout <<abs(v[i] - v[0]) << "\n";
		}
	}
