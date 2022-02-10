int number;
		string s;
		cin >> number >> s;
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'A')
				sum1++;
			else
				sum2++;
 
		}
		string result = sum1 > sum2 ? "Anton" : sum2 > sum1 ? "Danik" : "Friendship";
		cout << result << "\n";
