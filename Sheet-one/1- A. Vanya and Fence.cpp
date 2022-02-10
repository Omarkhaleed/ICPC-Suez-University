int number, height;
		cin >> number >> height;
		int input;
		int sum = 0;
		while (number--) {
			cin >> input;
			if (input <= height)
				sum += 1;
			else
				sum += 2;
 
		}
		cout << sum << "\n";
