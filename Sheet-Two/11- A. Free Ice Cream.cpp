ll size, k; 
    ll count = 0;
    cin >> size >> k;;
    while (size--) {
        char x; int y;
        cin >> x >> y;
        if (x == '+')
            k += y;
        else
        {
            if (y > k)
                count++;
            else
                k -= y;
        }
        
    }
   
    cout << k << " " << count << "\n";
