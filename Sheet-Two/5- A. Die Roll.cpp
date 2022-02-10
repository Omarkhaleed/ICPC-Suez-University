int num1, num2;
	cin >> num1 >> num2;
	int big = max(num1, num2);
                        //    1     2     3    4     5      6
	vector<string>v = { "1/6","1/3","1/2","2/3","5/6","1/1" };
	cout << v[6 - big] << "\n";
