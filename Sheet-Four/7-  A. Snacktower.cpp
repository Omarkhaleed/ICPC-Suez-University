bool arr[100001];
int now = 0;
void store(int x, int current2) {

	if (x == current2);
	{
		// cout<<current2<<" *"<<endl;
		for (int i = current2; i > 0; i--) {
			if (arr[i]) {
				cout << i << " ";
				arr[i] = 0;
				now = i - 1;
			}
			else {
				break;
			}

		}


	}

}

-----> in main 
int numbers;
	cin >> numbers;
	now = numbers;
	for (int i = 0; i < numbers; i++) {
		int x;
		cin >> x;
		arr[x] = 1;
		store(x, now);
		cout << endl;

	}
