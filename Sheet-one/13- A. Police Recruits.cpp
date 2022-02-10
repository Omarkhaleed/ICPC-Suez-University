int police = 0, crime = 0, crime2 = 0;
    int size; int count=0;
    cin >> size;
    while (size--) {
        int input;
        cin >> input;
        if (input > 0) {
            police += input;
        }
        else
        {
            if (police == 0) 
                count++;
            else 
                police--;
        }
    }
    cout << count << "\n";
