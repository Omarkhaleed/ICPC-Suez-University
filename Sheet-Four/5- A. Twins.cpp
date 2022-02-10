vector<int>v;
 
	int size,input, sum = 0, count = 0;
	cin >> size;
	
	while (size--) {
		cin >> input;
		sum += input;
		v.push_back(input);
	}
	sort(v.rbegin(), v.rend());
	int sumfinal = 0;
	for (int i = 0; i < v.size(); i++) {
		if (sumfinal > (sum / 2))
			break;
		sumfinal += v[i];
		count++;
	}
	cout << count << "\n";
