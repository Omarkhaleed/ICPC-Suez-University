int size;
	cin >> size;
	int sum = 0, count = 0;
	int num1,num2,num3;
	while(size--){
		cin >> num1 >> num2 >> num3;
		if ((num1 + num2 + num3) >= 2)
			count++;
	}
	cout << count << "\n";
