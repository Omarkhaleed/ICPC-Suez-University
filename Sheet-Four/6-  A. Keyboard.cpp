string ss = "qwertyuiopasdfghjkl;zxcvbnm,./";
	   
	char x;
	cin >> x;
	string s;
	cin >> s;
	if (x == 'R') {
		for (int i = 0; i < s.size(); i++)
			cout << ss[(ss.find(s[i])) - 1];
		     
	}
	else
	{
		for (int i = 0; i < s.size(); i++)
			cout << ss[(ss.find(s[i])) + 1];
	}
	
