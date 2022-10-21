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
//		cout << "打开文件失败" << endl;
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

	cout << "输入学生个数:";
	cout << endl;
	cin >> n;
	cout << "输入学生分数:";
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
//	static double sum;     //定义总成绩变量为静态数据
//private:
//	string name, sex, number;
//	int year;
//	double result;
//public:
//	Student();         //构造函数
//	~Student() {};      //析构函数
//	void input();      //信息输入函数
//	void display();    //信息输出函数
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
//	cout << "姓名：";
//	cin >> name;
//	cout << "成绩：";
//	cin >> result;
//}
//void Student::display()
//{
//	cout << "姓名：" << name << "  成绩：" << result << endl;
//}
//
//double Student::sum = 0;   //初始化总成绩为0
//int main()
//{
//	int i, j;
//	char x = '0';
//	Student b;	           //创建b对象
//	Student a[100];        //对象数组
//	cout << "请输入学生的信息：" << endl;
//	for (i = 0; x != 'n'; i++)
//	{
//		cout << i + 1 << "号 ";
//		a[i].input();
//		cout << "是否结束输入（按n键结束，按0继续）：";
//		cin >> x;
//	}
//	cout << endl << "学生的最低分是：" << endl;
//	cout << endl << "学生的最高分是：" << endl;
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
//	//定义空间
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



