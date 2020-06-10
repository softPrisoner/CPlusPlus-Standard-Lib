#include <iostream>
#include <thread>

using namespace std;

void childThread() {
	cout << "Child thread Run." << endl;
	for (int i = 0;i < 15;i++) {
		cout << "child thread output:" << i << endl;
	}
	cout << "child thread done!" << endl;
}

int main() {
	cout << "main thread Run." << endl;
		thread th(childThread);
		th.join();
		//main thread detach with child thread
		th.detach();

		for (int i = 21;i < 38;i++) {
			cout << "main thread>>>" << i << endl;
		}

		cout << "main thread done!";
}
