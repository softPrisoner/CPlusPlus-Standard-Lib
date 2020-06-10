#include <iostream>
#include <thread>

using namespace std;

int main() {
	cout << "main thread Run" << endl;

	//using lambda expression.
	auto  lambda_thread = [] {
		cout << "lambda thread Run" << endl;
	};

	std::thread thread(lambda_thread);
	thread.join();

	cout << "main thread done!" << endl;
	//
	system("pause");
	return 0;
}