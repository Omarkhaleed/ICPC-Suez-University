vector<int>v;
	int size;
	cin >> size;
	int input;
	while(size--){
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	for (auto i : v)
		cout << i << " ";
