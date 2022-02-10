vector<int>v1;
	
	int wires;
	cin >> wires;
	int boxes;
	while (wires--) {
		cin >> boxes;
		v1.push_back(boxes);
	}
	int shots;
	cin >> shots;
	int row, birdNumber;
	while (shots--) {
		cin >> row >> birdNumber;
		row--;
		//up
		if(row!=0)
		v1[row - 1] += birdNumber - 1;
		//down
		if (row != v1.size() - 1)
			v1[row + 1] += v1[row] - birdNumber;
		//clear
		v1[row] = 0;
	}
	
	for(int i=0;i<v1.size();i++){
		cout << v1[i] << "\n";
	}
