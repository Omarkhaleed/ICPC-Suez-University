int length, k;
	string s="";
	cin >> length >> k;
	int dif = length - k;
		for(char ch='a';ch<='z';ch++){
			if (s.size() != length) {
				s += ch;
				if (s.size() == k) {
					for (int i = 0; i < s.size(); i++) {
						if (dif == 0)
							break;
						else {
							s += s[i];
							dif--;
						}
					}
				}
			}
			else
				break;
		    
 
		}
		cout << s << "\n";
