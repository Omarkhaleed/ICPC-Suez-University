int n, t, k, d;
		cin >> n >> t >> k >> d;
		double div = n / k;
		int oven1 = 0;
		if (n%k==0) {
			 oven1 = (n / k) * t;
		}
		else
			 oven1 =( (n / k)+1) * t;
 
		
		int oven2 = t + d;
		if (oven2 >= oven1 || n<k)
			cout << "NO" << "\n";
		else
			cout << "YES" << "\n";
