//#include<iostream>
//#include<fstream>
//using namespace std;
//
//
//int main()
//{
//	ifstream fin;
//	ofstream fout;
//	fin.open("mfFile.txt", ios::in);
//	fout.open("otherFile.txt", ios::out);
//
//	if (!fin.is_open() || !fout.is_open())
//		cout << "���ļ�ʧ��" << endl;
//	return 0;
//
//	string name;
//	int id;
//
//
//
//
//
//	return 0;
//}


#include<iostream>
using namespace std;
template <typename T>
void bubblesort(T arr[], int n)
{
	bool done = 0;
	for (int i = 1; i < n && !done; i++)
	{
		done = 1;
		for (int j = 1; j <= n - 1; j++)
			if (arr[j - 1] < arr[j])
			{
				T temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
				done = 0;
			}
	}
}

int main()
{
	int const len = 20;
	int i, n, a[len], name[len];

	cout << "����ѧ������:";
	cout << endl;
	cin >> n;
	cout << "����ѧ������:";
	for (i = 0; i < n; i++)
		cin >> a[i];
	bubblesort(a, n);
	for (i = 0; i < n; i++)
	int left = 0;
	int right = n - 1;
	cout << a[0] << endl;;
	cout << a[0];
	return 0;
}



//#include<iostream>
//#include<string>
//using namespace std;
//class Student
//{
//	static double sum;     //�����ܳɼ�����Ϊ��̬����
//private:
//	string name, sex, number;
//	int year;
//	double result;
//public:
//	Student();         //���캯��
//	~Student() {};      //��������
//	void input();      //��Ϣ���뺯��
//	void display();    //��Ϣ�������
//};
//Student::Student()
//{
//	name = "no mane";
//	sex = "no";
//	number = "0";
//	year = 0;
//	result = 0;
//}
//
//void Student::input()
//{
//	cout << "������";
//	cin >> name;
//	cout << "�ɼ���";
//	cin >> result;
//}
//void Student::display()
//{
//	cout << "������" << name << "  �ɼ���" << result << endl;
//}
//
//double Student::sum = 0;   //��ʼ���ܳɼ�Ϊ0
//int main()
//{
//	int i, j;
//	char x = '0';
//	Student b;	           //����b����
//	Student a[100];        //��������
//	cout << "������ѧ������Ϣ��" << endl;
//	for (i = 0; x != 'n'; i++)
//	{
//		cout << i + 1 << "�� ";
//		a[i].input();
//		cout << "�Ƿ�������루��n����������0��������";
//		cin >> x;
//	}
//	cout << endl << "ѧ������ͷ��ǣ�" << endl;
//	cout << endl << "ѧ������߷��ǣ�" << endl;
//
//	for (j = 0; j < i; j++)
//		a[j].display();
//}


//#include <iostream>
//#include <cstring>
//using namespace std;
//
//struct student {
//	char name[11];
//	char number[11];
//	int score;
//};
//
//int main() {
//	int n;
//	cin >> n;
//	//����ռ�
//	student* stu = new student[n];
//	for (int i = 0; i < n; i++) {
//		cin >> stu[i].name >> stu[i].number >> stu[i].score;
//	}
//	int max = stu[0].score;
//	int min = stu[0].score;
//	int count1 = 0, count2 = 0;
//	for (int i = 0; i < n; i++) {
//		if (max < stu[i].score) {
//			max = stu[i].score;
//			count1 = i;
//		}
//		if (min > stu[i].score) {
//			min = stu[i].score;
//			count2 = i;
//		}
//	}
//	cout << stu[count1].name << " " << stu[count1].number << endl;
//	cout << stu[count2].name << " " << stu[count2].number;
//
//	return 0;
//}



