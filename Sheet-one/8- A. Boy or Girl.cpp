string removeDuplicate(string str)
{
	int length = str.length();
	for (unsigned int i = 0; i < length-1; i++)
	{
		char currChar = str[i]; //holds current character
		for (unsigned int j = i + 1; j < length; j++)
		{
			if (currChar == str[j])
				str.erase(std::remove(str.begin() + j, str.end(), str[j]), str.end());
		}
	}
	return str;
 
}

string s;
cin >> s;

if ((removeDuplicate(s).size()) % 2 == 0)
		cout << "CHAT WITH HER!" << "\n";
	else
		cout << "IGNORE HIM!" << "\n";

     /////// another solutuon 

  string s;

    cin>>s;

    l=s.length();

    sort(s.begin(),s.end());

    for (i = 1; i<l; i++)
    {
        if (s[i] != s[i -1] )

        {
            count++;
        }

    }
 if((count+1)%2==0)

    {
        cout<<<<"CHAT WITH HER!"<<"\n";
    }

    else

    {
        else<<"IGNORE HIM!"<<"\n";
    }
