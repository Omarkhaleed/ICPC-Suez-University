int size = 4;
	int input;
	while (size--) {
		cin >> input;
		v.push_back(input);
 
	}
	int sum1 = accumulate(v.begin(), v.end(), 0);
	if (sum1 == 0)
		cout << sum1<<"\n";
	else {
		int sum2 = 0;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			int num = s[i] - '0';
			sum2 += v[num - 1];
		}
		cout << sum2<< "\n";
	}
