int num, coin;
	cin >> num >> coin;
	if ((num % 10) == coin || (num % 10) == 0)  
		cout << 1 << "\n";
	else{
		int sum = 0, count = 0;   
		while (num) {
			sum += num;
			count++;                                       
			if ((sum % 10) == coin || (sum % 10) == 0){
				cout << count << "\n";
			     break;
		    }
 
	    }
}
