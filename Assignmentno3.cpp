#include <iostream>
using namespace std;

struct East {
	
	float  fi_qua_sa;
	float  se_qua_sa;
	float th_qua_sa;
	float  fo_qua_sa;
};

struct West {
		float  fi_qua_sa;
	float  se_qua_sa;
	float  th_qua_sa;
	float  fo_qua_sa;
};

struct North {
		float  fi_qua_sa;
	float  se_qua_sa;
	float  th_qua_sa;
	float  fo_qua_sa;
	
};

struct South {
		float  fi_qua_sa;
	float  se_qua_sa;
	float  th_qua_sa;
	float  fo_qua_sa;

	
};

void Input (East e)
{
	
	int total;
	
		cout << "First Quater Sales is : " , cin >> e.fi_qua_sa;
		cout << "Second Quater Sales is : " , cin >> e.se_qua_sa;
		cout << "Third Quater Sales is : " , cin >> e.th_qua_sa;
		cout << "Fourth Quater Sales is : " , cin >> e.fo_qua_sa;
		total = e.fi_qua_sa+e.se_qua_sa+e.th_qua_sa+e.fo_qua_sa;
		cout << "Total is =" << total << endl;
		cout << "Average is = " << total/4 << endl;
}

void Input (West w)
{
	
	int total;
	
		cout << "First Quater Sales is : " , cin >> w.fi_qua_sa;
		cout << "Second Quater Sales is : " , cin >> w.se_qua_sa;
		cout << "Third Quater Sales is : " , cin >> w.th_qua_sa;
		cout << "Fourth Quater Sales is : " , cin >> w.fo_qua_sa;
		total = w.fi_qua_sa+w.se_qua_sa+w.th_qua_sa+w.fo_qua_sa;
		cout << "Total is =" << total << endl;
		cout << "Average is = " << total/4 << endl;
	
}

void Input (South s)
{
	
	int total;
	
		cout << "First Quater Sales is : " , cin >> s.fi_qua_sa;
		cout << "Second Quater Sales is : " , cin >> s.se_qua_sa;
		cout << "Third Quater Sales is : " , cin >> s.th_qua_sa;
		cout << "Fourth Quater Sales is : " , cin >> s.fo_qua_sa;
		total = s.fi_qua_sa+s.se_qua_sa+s.th_qua_sa+s.fo_qua_sa;
		cout << "Total is =" << total << endl;
		cout << "Average is = " << total/4 << endl;
	
}

void Input (North n)
{
	
	int total;
	
		cout << "First Quater Sales is : " , cin >> n.fi_qua_sa;
		cout << "Second Quater Sales is : " , cin >> n.se_qua_sa;
		cout << "Third Quater Sales is : " , cin >> n.th_qua_sa;
		cout << "Fourth Quater Sales is : " , cin >> n.fo_qua_sa;
		total = n.fi_qua_sa+n.se_qua_sa+n.th_qua_sa+n.fo_qua_sa;
		cout << "Total is =" << total << endl;
		cout << "Average is = " << total/4 << endl;
	
}


int main ()
{
	
	East sales;
	West sa;
	South sal;
	North	sale;
	
	cout << "________EAST SALES________" << endl;
	Input (sales);
	cout << "________WEST SALES________" << endl;
	Input (sa);
	cout << "________SOUTH SALES________" << endl;
	Input (sal);
	cout << "________NORTH SALES________" << endl;
	Input (sale);
	
}
