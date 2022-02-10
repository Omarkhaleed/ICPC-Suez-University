int rows;
	cin >> rows;
	char array[299][299];
	char ch;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			cin >> ch;
			array[i][j] = ch;
		}
	 }
	bool flag = true;
	char first, second;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			first = array[0][0];
			second = array[0][1];
			if (i == j) {
				if (array[i][j] != first) {
					flag = false;
					break;
				}
			}
			else if(i==rows-1-j){
				if (array[i][j] != first) {
					flag = false;
					break;
				}
				
			}
			else{
				if (second != array[i][j] || array[i][j] == first) {
					flag = false;
					break;
				}
			
			}
			
		}
		if (flag==false)
			break;
	
	}
	if (flag == false)
		cout << "NO" << "\n";
	else
		cout << "YES" << "\n";
