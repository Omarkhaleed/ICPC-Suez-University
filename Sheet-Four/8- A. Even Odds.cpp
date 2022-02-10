ll n, k;
	cin >> n >> k;
	if (n % 2 == 0) {
		if (k <= n / 2)
			cout << (k * 2) - 1 << "\n";
		else
			cout << (k-(n/2))*2 << "\n";
	}
	else {
		if (k <= (n / 2) + 1)
			cout << (k * 2) - 1 << "\n";
		else
			cout << (k - ((n / 2) + 1)) * 2 << "\n";
	}
