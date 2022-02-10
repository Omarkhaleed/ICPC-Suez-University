double d, h, v, e;
    cin >> d >> h >> v >> e;
    double pi = 2 * asin(1.0);
    double ve = pi * (diameter / 2) * (d / 2) * e;
    double v1 = pi * (diameter / 2) * (d / 2) * h;
    if (v <= speed)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        cout << setprecision(13)<<(v1 / (v - speeed));
    }
   
    

