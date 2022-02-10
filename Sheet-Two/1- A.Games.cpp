vector<int>v1;
	vector<int>v2;
	int size;
	cin >> size;
	int input1,input2;
	while (size--) {
		cin >> input1 >> input2;
		v1.push_back(input1);
		v2.push_back(input2);
	}
 
	int count=0;
	for (int i = 0; i < v1.size(); i++) {
		for (int j = 0; j < v2.size(); j++) {
			if (v1[i] == v2[j])
				count++;
		}
	}
		cout << count<< "\n";
