 int points, papers;                                                                                              
    cin >> points >> papers;
    double x2, y2, x1, y1, Distance=0.0;
    cin >> x1 >> y1;
    points--;
        while (points--)
        {
            cin >> x2 >> y2; 
                Distance += sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
            x1 = x2;
            y1 = y2;
        }
    cout << fixed << setprecision(9) << Distance * papers / 50 << endl;  
