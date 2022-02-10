int size, top,face1, face2;
	cin >> size >> top;
	bool flag = true;
  while(size--){
		cin >> face1 >>face2 ;
		if (face1 == top || face1 == 7 - top || face2 == top || face2 == 7 - top)
		{
			cout << "NO" << endl;
			flag = false;
			break;
		}
	}
  if(flag)
	cout << "YES";
