int size, count = 0;
    cin >> size;
    vector<int>v(size);
    while (size--) {
        int input;
        cin >> input;
        v[input - 1] = ++count;
 
    }
    for (int i : v) {
        cout << i << " ";
    }
