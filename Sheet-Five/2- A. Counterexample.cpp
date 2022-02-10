ll left, right;
    cin >> left >> right;
     
    if (left % 2 != 0)
        left++;
    if ((right - left) <= 1)
        cout << -1 << endl;
    else
        cout << left << " " << left+1<< " " << left+2 << endl;
