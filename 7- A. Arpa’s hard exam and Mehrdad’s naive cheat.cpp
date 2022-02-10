int n;
	cin >> n;
	int numbers[] = { 8,4,2,6};
	if (n == 0)
		cout << 1 << "\n";
	else {
		n = (n - 1) % 4;
		cout << numbers[n] << "\n";
	}
