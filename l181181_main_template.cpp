#include <iostream>
using namespace std;

                                                                 //TASK 1
//template <typename temp1>
//temp1 GetMax (temp1 a , temp1 b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//
//template <typename temp2>
//temp2 GetMin (temp2 a , temp2 b)
//{
//	if (a <= b)
//		return a;
//	else 
//		return b;
//}
//
//
//int main()
//{
//	int i =5 , j = 6 , k;
//	long l = 10, m = 5 , n ;
//	k = GetMax/*<int>*/(i,j);
//	n = GetMin/*<long>*/(l,m);
//	cout << k << endl;
//	cout << n << endl;
//}
                                                                //TASK 2

//template <typename temp1, typename temp2>
//temp1 GetMax (temp1 a , temp2 b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//
//template <typename temp3,typename temp4>
//temp4  GetMin (temp3 a , temp4 b)
//{
//	if (a <= b)
//		return a;
//	else 
//		return b;
//}
//
//
//
//
//
//
//
//int main()
//{
//	char i = 'Z';
//	int j = 6 , k;
//	long l = 10 , m = 5, n;
//	k = GetMax/*<int,long>*/(i,m);
//	n = GetMin/*<int,char>*/(j,l);
//	cout << k << endl;
//	cout << n << endl;
//	return 0;
//}
                                                       //TASK 3



template <typename T>
class Pair
{
	T values[2];

public:
	Pair(T a ,T b)
	{
		values[0] = a;
		values[1] = b;
	}
	T GetMax ()
	{
		if (values[0] >=values[1])
			return values[0];
		else
			return values[1];
	}
	friend ostream& operator << (ostream& out , Pair& other)
	{
		out << other.values[0] << " " << other.values[1];
		return out;
	}

	T GetMin ();
};


template<typename T>
T Pair<T>::GetMin()
{
	if (values[0] <= values[1])
			return values[0];
		else
			return values[1];
}



int main()
{
	Pair <double> myobject(1.012, 1.01234);
	cout << myobject.GetMax()<<endl;
	cout << myobject.GetMin()<<endl;
	cout << myobject<<endl; //exertion operator

	return 0;
}
