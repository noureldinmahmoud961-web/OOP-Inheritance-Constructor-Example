#include < iostream>
using namespace std;

class first {
private:
	int age;
	string name;
public:

	first() {
		cout << "iam the first constructor" << endl;
	}
};

class secound : public first {
private:
	int id;
public:
	secound() {

		cout << "iam the secound constructor" << endl;
	 }

};

int main() {
	secound ob1;
	return 0;
}