vector<int>v;
    int size; int num; int one = 0, two = 0, three = 0;
    int array1[5000], array2[5000], array3[5000];
    cin >> size;
    while (size--)
    {   
        cin >> num;
        v.push_back(num);
       
 
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) {
            array1[one] = i + 1;   // {1,3,6}  there are 3 childern
            one++;
        }
        if (v[i] == 2) {
            array2[two] = i + 1; // {5,7}       2  
            two++;
        }
        if (v[i] == 3) {
            array3[three] = i + 1;  // {2,4}    2
            three++;
        }
 
    }
    int min3 = min({one,two,three});   min of( 3,2,2}
    cout << min3 << "\n";                is 2   so we can only form 2 teams
    for (int i = 0; i < min3; i++) {
        cout << array1[i] << " " << array2[i] << " " << array3[i] << "\n";
    }
