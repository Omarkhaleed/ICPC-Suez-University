int n, m; bool flag = 0;
        cin >> n >> m;
        if (n == m || m < n)
            cout << "NO" << "\n";
        else if (n == 2 && m == 3)
            cout << "YES" << "\n";
        else if (Isprime(m)) {
            while (!flag) {
 
                if (Isprime(m - 2) && (m - 2) == n) {
                    flag = 1;
                    cout << "YES" << "\n";
                }
                else if (Isprime(m - 2) && (m - 2) != n) {
                    flag = 1;
                    cout << "NO" << "\n";
                }
                else {
                    m -= 2;
                }
 
            }
        }
        else
            cout << "NO" << "\n";
