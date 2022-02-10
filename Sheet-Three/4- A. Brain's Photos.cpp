int rows, columns;
	cin >> rows >> columns;
	char ch;
	bool flag = true;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cin >> ch;
			if (ch == 'C' || ch == 'Y' || ch=='M') {
				flag = false;
				break;
			}
		}
	 }
	if (flag == true)
		
	cout << "#Black&White" << "\n";
 
	else
		cout << "#Color" << "\n";
