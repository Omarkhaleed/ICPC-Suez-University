 string s;
    cin >> s;
    bool flag = 1;
    while (flag) {
        flag = 0;
        for (int i = 0; i < s.size() - 1; i += 2) {
            if (s[i] > s[i + 2]) {
                swap(s[i], s[i + 2]);
                flag = 1;
            }
        }
    }
    cout << s << "\n";
