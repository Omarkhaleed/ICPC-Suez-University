bool check(int first, int second, int third, int fourth) {
	if ((1 <= first && first<= 9) && (1 <= second && second <= 9) && (1 <= third && third <= 9) && (1 <= fourth && fourth <= 9)) {
		if(first!=second &&  first!=third && first!=fourth && second!=third && second !=fourth && third!=fourth)
		return true;
		return false;
	}
	else	
	  return false;	
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	////test cases
 
	//for (int i = 0; i < 7; i++) {
 
		int first, second = 0, third = 0, fourth = 0;
 
		int r1, r2, c1, c2, d1, d2;
		cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
		bool flag = false;
		for (int i = 1; i <= 9; i++) {
			first = i;
			second = r1 - first;
			third = c1 - first;
			fourth = r2 - third;
			if (check(first, second, third, fourth)) {
				if ((first + second == r1) && (first + third == c1) && (third + fourth == r2) &&
					(fourth + second == c2) && (first + fourth == d1) && (second + third == d2)) {
					cout << first << " " << second << "\n" << third << " " << fourth << "\n";
					flag = true;
				}
 
			}
			if (flag)
				break;
 
		}
		if (flag == false)
			cout << -1 << "\n";
