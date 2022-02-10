vector<ll>v1;
	
	ll n, size, bigSize;
	cin >> n >> size >> bigSize;
	ll input;
	while (n--)
	{
		cin >> input;
		v1.push_back(input);
	}
	ll sum = 0, count = 0;
	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] <= size) {
			sum += v1[i];
			if(sum>bigSize){
				count++;
			sum = 0;
			}
		}
	
	  }
	cout << count << "\n";
