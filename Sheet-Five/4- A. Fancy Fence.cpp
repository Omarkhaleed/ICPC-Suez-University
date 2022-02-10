all sides equal and angles

Angle=((sides-2)*180)/sides  -->1

 to get sides 
 div by 180
    

Angle/180=(sides-2)/sides  -->  2
 
by multi sides
 
sides*(Angle/180)  = sides-2
 
2=sides- (sides*(Angle/180))

let x=angle/180
 
2=sides-sides(x)
2=sides(1-x)

sides=2/(1-x)

--------------------------------------> the code 


int n;
	cin >> n;
	int angle;
	float sides;
	float newangle;
	while (n--) {
		cin >> angle;
		newangle = angle / 180.00;
		sides= 2.00 / (1.00 - newangle);
		
		if (int(round(sides * 100)) % 100 != 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
