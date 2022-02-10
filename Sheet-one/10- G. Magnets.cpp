 int n;
    cin>>n;
    int magnets[n],count=1;
    for (int i=0; i<n;i++)
        cin>>magnets[i];
    for (int j=0 ;j<n-1;j++){
        if (magnets[j]!=magnets[j+1])
            count++;
    }   
    cout<<count<<endl;
