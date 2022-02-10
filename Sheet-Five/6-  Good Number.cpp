int size;
    cin >> size;
    int k;
    cin >> k;
 
    int  count = 0;
    while (size--) {
        bool flag= 1;
        string input;
        cin >> input;
        for (int i = 0; i <=k; i++) {
            int ch = input.find(to_string(i));
            if (ch != -1)
                flag = 1;
            else {
                flag = 0;
                break;
            }
        }
        if (flag)
            count++;
    }
    cout << count<< "\n";
