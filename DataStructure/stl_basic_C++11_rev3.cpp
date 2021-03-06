#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <tuple>
#include <set>
#include <map>
#include <cstring>
#include <algorithm>
#include <functional>
using namespace std;
/*
	STL 정리 - https://baactree.tistory.com/29

*/
//typedef pair<int, string> pis;

//void print(set<int> &s, set<int>::iterator it) {
//	if (it == s.end()) {
//		cout << "end\n";
//	}
//	else {
//		cout << *it << '\n';
//	}
//}

/*------------------------------------------------------------------------------------------------*/
//class Student{
//public:
//	string name;
//	int score;
//	Student(string name, int score) {
//		this->name = name;
//		this->score = score;
//	}
//	
//	bool operator <(Student &stu) {
//		return this->score < stu.score;
//	}
//};
// 동빈씨
/*------------------------------------------------------------------------------------------------*/


int main() {
	/*---------------------------- vector --------------------------*/
	
	// 1) push_back, pop_back, resize, clear, size, empty
	//vector<pis> v;

	//v.push_back(pis(3, "Dok2"));
	//v.push_back(pis(6, "DMask"));
	//v.push_back(pis(1, "Tiger JK"));
	//v.push_back(pis(2, "Banana"));
	//v.push_back(pis(2, "Apple"));
	//vector<int> a = { 1, 2, 3, 4, 5 };

	//a.push_back(6);
	//a.push_back(7);
	//a.pop_back();
	//a.pop_back();
	//a.pop_back();

	//a.clear(); //[ ]

	//a.resize(5); //[0, 0, 0, 0, 0]

	//a.clear(); //[ ]

	//a.push_back(1);
	//a.push_back(2); //[1, 2]
	//a.resize(5); //[1, 2, 0, 0, 0]
	//a.resize(3); //[1, 2, 0]

	//vector<int> a = { 1, 2, 3, 4 };
	//cout << "size = " << a.size() << '\n'; //4

	//a.push_back(5);
	//cout << "size = " << a.size() << '\n'; //5
	//cout << "empty = " << a.empty() << '\n'; //0

	//a.clear();
	//cout << "size = " << a.size() << '\n'; //0
	//cout << "empty = " << a.empty() << '\n'; //1

	//vector<int> a = { 1, 2, 3 };
	//cout << "front = " << a.front() << '\n'; //1
	//cout << "a[1] = " << a[1] << '\n'; //2
	//cout << "back = " << a.back() << '\n'; //3

	//a.push_back(4);

	//for (int i = 0; i<a.size(); i++) {
	//	cout << a[i] << ' ';
	//}
	//cout << '\n'; //1 2 3 4

	//for (int &x : a) {
	//	cout << x << ' ';
	//}
	//cout << '\n'; //1 2 3 4


	// 2) iterator & sort
	//vector<pis>::iterator iter;
	//for (iter = v.begin(); iter != v.end(); iter++) {
	//	cout << "[" << iter->first << "," << iter->second << "]" << endl;
	//}
	//cout << endl;

	//sort(v.begin(), v.end());
	//cout << "===== After Sort =====" << endl;
	//for (iter = v.begin(); iter != v.end(); iter++) {
	//	cout << "[" << iter->first << "," << iter->second << "]" << endl;
	//}

	//for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
	//	cout << *it << ' ';
	//}

	//for (auto it = a.begin(); it != a.end(); ++it) {
	//	cout << "a[" << (it - a.begin()) << "]= " << *it << '\n';
	//}


	// 3) Copy
	//// vec7은 vec1의 두 번재 원소부터 마지막 원소까지 복사하여 생성.
	//vector<int> vec7 = vector<int>(vec1.begin() + 2, vec1.end());


	// 4) Initilization
	//vector<int> v1;
	//vector<int> v2(10); //int v2[10];
	//vector<int> v3(15, 1); //길이가 15, 초기값 1
	//vector<int> v4 = { 1, 2, 3, 4, 5 };


	// 5) pair as element
	//vector<pair<int, int>> v5;
	//vector<pair<int, int>> v6 = { {1, 2}, {3, 4} };
	//vector<vector<int>> v7;


	// 6) 2D vector
	//int n = 10, m = 20;
	//vector<vector<int>> v8(n, vector<int>(m)); // int v8[n][m]


	// 7) find
	//vector<int> a = { 1, 4, 1, 2, 4, 2, 4, 2, 3, 4, 4 };

	//for (int i = 0; i < 5; i++) {
	//	auto it = find(a.begin(), a.end(), i);
	//	cout << i << "의 위치: ";
	//	if (it == a.end())
	//		cout << "Cannot find" << " " << i;
	//	else
	//		cout << it - a.begin(); //★위치를 찾은 때는 이런 식으로!! 이때 첫번째 인덱스는 0으로 친다.
	//	cout << '\n';
	//}

	//vector<int> vec = { 10, 20, 30, 40 };
	//vector<int>::iterator it;
	//

	//it = find(vec.begin(), vec.end(), 30);
	////혹은 auto it = fine(vec.begin(), vec.enc(), 30);
	//if (it == vec.end())
	//	cout << "Cannot find" << '\n';
	//else
	//	cout << "Can find" << '\n';

	


	/*---------------------------------------------------------------*/

	/*------------------------------ pair ----------------------------*/
	//pair<int, int> p1;
	//cout << p1.first << ' ' << p1.second << '\n';

	//p1 = make_pair(10, 20);
	//cout << p1.first << ' ' << p1.second << '\n';

	//p1 = pair<int, int>(30, 40);
	//cout << p1.first << ' ' << p1.second << '\n';

	//pair<int, int> p2(50, 60);
	//cout << p2.first << ' ' << p2.second << '\n';

	//pair<pair<int, int>, pair<int, int>> p = make_pair(make_pair(10, 20), make_pair(30, 40)); //pair의 원소를 pair로 한 경우 

	//cout << p.first.first << ' ' << p.first.second << '\n';
	//cout << p.second.first << ' ' << p.second.second << '\n';

	/*---------------------------------------------------------------*/

	/*---------------------------- tuple ----------------------------*/
	//tuple<int, int, int> t1 = make_tuple(1, 2, 3);
	//cout << get<0>(t1) << ' ';//get< > 사이에 변수를 넣을 수 없다. 
	//cout << get<1>(t1) << ' ';
	//cout << get<2>(t1) << '\n';

	//auto t = make_tuple(10, 20, 30);

	//int x = get<0>(t);
	//int y = get<1>(t);
	//int z = get<2>(t);

	//cout << x << ' ' << y << ' ' << z << '\n';

	//x = y = z = 0;
	//tie(x, y, z) = t;

	//cout << x << ' ' << y << ' ' << z << '\n';

	//int a, b;
	//tie(a, b, ignore) = make_tuple(10, 20, 30);

	//cout << a << ' ' << b << '\n';


	//set<int> s;
	//s.insert(1); s.insert(3); s.insert(2);

	//cout << "s.size() = " << s.size() << '\n'; //3

	//pair<set<int>::iterator, bool> result = s.insert(4);
	//cout << "result iterator = " << *result.first << '\n'; //4
	//cout << "result bool = " << result.second << '\n'; //1

	//auto result2 = s.insert(3);
	//cout << "result2 iterator = " << *result2.first << '\n'; //3
	//cout << "result2 bool = " << result2.second << '\n'; //0

	//set<int> s = { 1,2,3,4,5 };
	//s.erase(s.begin());
	//cout << "s.size() = " << s.size() << '\n'; //4

	//auto it = s.begin();
	//++it;
	//cout << "*it = " << *it << '\n'; //3
	//it = s.erase(it);
	//cout << "*it = " << *it << '\n'; //4
	//cout << "s.size() = " << s.size() << '\n'; //3

	//set<int> s = { 5,2,4,1,3,7,6 }; //오름차순 자동 정렬 된다.
	//for (auto it = s.begin(); it != s.end(); ++it) {
	//	cout << *it << ' ';
	//}
	//cout << '\n';

	//for (auto x : s) {
	//	cout << x << ' ';
	//}
	//cout << '\n';

	//set<int> s = { 7, 5, 3, 1 }; //1 3 5 7
	//auto it = s.find(1); // it은 set<int>::iterator
	//print(s, it); //있으면 1

	//it = s.find(2);
	//print(s, it); // 없으면 end

	//it = s.find(3);
	//print(s, it);

	//it = s.find(4);
	//print(s, it);

	//set<int> s = { 7, 1, 5, 3 };

	//for (int i = 1; i <= 9; i++) {
	//	cout << "s.count(" << i << ") =" << s.count(i) << '\n';
	//}

	//map<int, int> d1;
	//map<int, int> d2 = { { 1,2 },{ 3,4 },{ 5,6 } };

	//cout << "d1.size() = " << d1.size() << '\n'; //0
	//cout << "d2.size() = " << d2.size() << '\n'; //3


	//d1[10] = 20;
	//cout << "d1[10] = " << d1[10] << '\n'; //20
	//cout << "d2[1] = " << d2[1] << '\n'; //2
	//cout << "d2[2] = " << d2[2] << '\n'; //0 왜??
	//cout << "d2[3] = " << d2[3] << '\n'; //4
	//cout << "d2[4] = " << d2[4] << '\n'; //0
	//cout << "d2[5] = " << d2[5] << '\n'; //6

	//map<int, int> d1;
	//map<int, int> d2;

	//for (int i = 1; i <= 9; i += 2) {
	//	d1[i] = i*i;
	//	d2[i] = i*i;
	//}

	//cout << "d1.size() = " << d1.size() << '\n';
	//cout << "d2.size() = " << d2.size() << '\n';

	//for (int i = 1; i <= 10; i++) {
	//	if (d1[i]) { //왜 사이즈가 늘어나는 거지..?
	//		cout << i << ' ';
	//	}
	//}

	//cout << '\n';
	//for (int i = 1; i<10; i++) {
	//	if (d2.count(i)) { //d2[i]랑 같은 말
	//		cout << i << ' ';
	//	}
	//}

	//cout << '\n';
	//cout << "d1.size() = " << d1.size() << '\n'; //10 
	//cout << "d2.size() = " << d2.size() << '\n'; //5 

	//map<int, int> d = { { 1,2 },{ 3,4 },{ 5,6 } };

	//for (auto it = d.begin(); it != d.end(); ++it) {
	//	cout << (it->first) << ' ' << (it->second) << '\n';
	//}

	//for (auto p : d) { //p는 뭐??
	//	cout << p.first << ' ' << p.second << '\n';
	//}

	/*------------------------------ set ----------------------------*/
	// 균형 잡힌 이진 트리이다.
	// 원소 삽입, 삭제, 탐색 등 연산은 O(logn)을 보장한다. 
	//set<int> s;
	//pair<set<int>::iterator, bool> pr;
	//pr = s.insert(50);
	//s.insert(40);
	//s.insert(80);

	//if (true == pr.second)
	//	cout << *pr.first << "Success!" << endl;
	//else
	//	cout << *pr.first << "Failure!" << endl;

	//if (s.find(30) != s.end()) 
	//	cout << "Exist!" << endl;
	//else
	//	cout << "Not exist" << endl;


	// vector<int> 를 원소로 가지는 set의 출력, BOJ 15663 참고.
	// https://stackoverflow.com/questions/4653836/set-of-vectors-in-c
	set<vector<int>> s;

	//for (auto it = s.begin(); it != s.end(); it++) { //In this case, it is pointer of set. ->
	//	for (int i = 0; i <(*it).size() ; i++) { //In this case, (*it) is pointer of it. ↑
	//		cout << (*it)[i] << " ";
	//	}
	//	cout << "\n";
	//}
	
	/*---------------------------------------------------------------*/

	/*------------------------------ map ----------------------------*/
	// int 자료형을 key로 int 자료형을 데이터로 저장하는 딕셔너리 자료구조 생성
	//map<int, int> m;

	//m.insert(make_pair(4, 5));
	////or
	//m[5] = 6;

	////key와 연관된 원소를 pair<key 자료형, data 자료형> 형태로 리턴함
	//printf("%d\n", m.find(4)->second);
	//
	//// key와 연관된 원소의 개수를 리턴함.
	//printf("%d\n", m.count(4));

	////해당 주소의 원소 삭제
	//m.erase(++m.begin());
	////모든 원소 삭제
	//m.clear();
		

	/*--------------------------- priority queue ---------------------------*/
	// 따로 파일 만듬

	/*---------------------------------------------------------------------*/

	/*------------------------------ Algorithm ----------------------------*/
	
	//vector<int> arr2;

	//cout << *max_element(arr2.begin(), arr2.end());
	//cout << *min_element(arr2.begin(), arr2.end());


	//lower_bound
	//첫 원소의 주소와 마지막 원소의 다음 주소와 비교할 원소를 넘겨준다.
	//구간내의 원소들은 정렬되어 있어야한다.
	//리턴 값은 해당 원소의 주소값이다. 없다면 arr1+n을 리턴한다.
	//또는 arr2.end()를 리턴한다.
	
	// 나중에 알아보자.
	//int idx = lower_bound(arr2, arr1 + n, 42) - arr1;
	//printf("%d\n", idx);

	//upper_bound
	//사용법은 같다.
	//vector<int>::iterator it = upper_bound(arr2.begin(), arr2.end(), 54);
	//if (it != arr2.end())
	//	printf("%d\n", *it);


	//unique
	//중복된 값이 존재하는 벡터의 첫 번째 원소와 마지막 원소의 주소를 인자로 넘겨준다.
	//구간 내에 중복된 원소를 구간의 끝 부분으로 밀어준다. 그리고 중복되지 않은 원소들의 마지막 원소의 다음 주소를 리턴한다.
	//용법
	//arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end());


	// Vector에서 중복값 삭제
	//https://goodgid.github.io/Vector-Delete-Duplicate-Value/
    // https://stackoverflow.com/questions/1041620/whats-the-most-efficient-way-to-erase-duplicates-and-sort-a-vector

	//Student students[] = {
	//	Student("ndb", 90),
	//	Student("lsw", 93),
	//	Student("phw", 97),
	//	Student("kjg", 87),
	//	Student("lti", 92)
	//};

	//sort(students, students + 5);
	//for (int i = 0; i < 5; i++) {
	//	//cout << students[i].name << ' ';
	//	printf("%s\n", students[i].name.c_str());
	//}

	//bool compare(pair<string, pair<int, > > a, pair<string, pair<int, int> > b) 
	//{
	//	if (a.second.first == b.second.first) {
	//		return a.second.second > b.second.second;
	//	}
	//	else
	//		return a.second.first > b.second.first;
	//};

	//vector<pair<string, int>> v;
	//v.push_back({ "ndb", 90 });
	//v.push_back({ "lsw", 93 });
	//v.push_back({ "phw", 97 });
	//v.push_back({ "kjg", 87 });
	//v.push_back({ "lti", 92 });

	//sort(v.begin(), v.end());
	//for (int i = 0; i < v.size(); i++) {
	//	//cout << students[i].name << ' ';
	//	//printf("%s\n", v[i].first);
	//	cout << v[i].first << " ";
	//}

	/*-----------------------Range based for------------------------------*/
	//C++11
	//https://boycoding.tistory.com/210

	return 0;
}