string s;
    cin >> s;
    char first = 'a';
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
        int distanceOne = abs(s[i]-first);
        first = s[i];
        int distance2 = 26 - abs(distanceOne);
        if (distanceOne <= distance2)
            sum += distanceOne;
        else
            sum += distance2;
       
    }
    cout << sum << "\n";
