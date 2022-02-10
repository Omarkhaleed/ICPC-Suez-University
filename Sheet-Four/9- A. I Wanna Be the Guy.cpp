int n;
	cin >> n;
	set<int>guys;
	int p, q;
	cin >> p;
	int inputs;
	for (int i= 0; i < p; i++) {
		
		cin >> inputs;
		guys.insert(inputs);
	}
	cin >> q;
	for (int i = 0; i < q; i++) {
		
		cin >> inputs;
		guys.insert(inputs);
	}
	if (guys.size() == n)
		cout << "I become the guy.";
	else
		cout << "Oh, my keyboard!";
