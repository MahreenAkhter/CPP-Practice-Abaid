#include <iostream>
using namespace std;
int main() {
	int choice;
	string name;
	cout<<"How many students records you want to save: ";
	cin>>choice;
    int count = 1;

    while (count <= choice) {
        cout << "Roll No:" << count <<endl;
        cout<<"Enter name:";
        cin>>name;
        count++;
    }

    return 0;
}
