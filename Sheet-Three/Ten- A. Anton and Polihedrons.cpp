vector<string>v = { "Tetrahedron","Cube","Octahedron","Dodecahedron","Icosahedron"};
	int n, sum = 0;
	cin >> n;
	 string s;
	while (n--) {
		cin >> s;
		auto it = find(v.begin(), v.end(), s);
		int index = it-v.begin();
		
		switch (index)
		{
		case 0:
			sum += 4;
			break;
		case 1:
			sum += 6;
			break;
		case 2:
			sum += 8;
			break;
		case 3:
			sum += 12;
			break;
		case 4:
			sum += 20;
			break;
		default:
			break;
		}
	}
	cout << sum << "\n";
