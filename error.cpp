#include "std_lib_facilities.h"


int main(){

	try {
	cout << "1. Success!\n";
	cout << "2. Success!\n";
	cout << "3. Success!" << "\n";
	cout << "4. Success!" << "\n";
	//int res = 7; vector<int> v(10); v[5] = res; cout << "5. Success!\n";
	//vector<int> v(10); v[5] = 7; if (v[5] == 7) cout << "Success!\n";
	//if (true) cout << "7.Success!\n"; else cout << "Fail!\n";
	//bool c = true; if (c) cout << "8.Success!\n"; else cout << "Fail!\n";
 	//string s = "ape"; bool c = "fool" > s; if (c) cout << "9.Success!\n";
	//string s = "ape"; if (s != "fool") cout << "10.Success!\n";
	//string s = "ape"; if (s != "fool") cout << "11.Success!\n";
	//string s = "ape"; string check = "nothing"; if (check != s + "fool") { cout << "Success!\n"; } //12
	//vector<char> v(5); for (int i = 0; i < v.size(); ++i)/*;*/ cout << "Success!\n"; //13
	//vector<char> v(5); for (int i = 0; i <= v.size(); ++i)/*;*/ cout << "Success!\n"; //14
	//string s = "Success!"; for (int i = 0; i < s.size(); ++i) cout << s[i]; //15
	//if (true) cout << "Success!\n"; else cout << "Fail!\n"; //16
	//int x = 2000; int c = x; if (c == 2000) cout << "Success!\n"; //17
	//string s = "Success!\n"; for (int i = 0; i < 7; i++) cout << s[i]; //18
	vector<int> v(5); for (int i = 0; i <= v.size(); ++i); cout << "Success!\n"; //19
	//int i = 0; int j = 9; while (i < 10) {i++; if (j > i) cout << "Success!\n";} //20
	//double x = 2; double d = 5 / (x – 1); if (d == 2 * (x + 0.5)) cout << "Success!\n"; //21
        //vector<string> s; s.push_back("Success!\n"); for (int i = 0; i < s.size(); ++i) cout << s[i];
	//int i = 0; int j = 11; while (i < 10) ++i; if (j > i) cout << "Success!\n";
	//double x = 2; double d = 5 / (x – 1); if (d = 2 * (x + 0.5)) cout << "Success!\n";
	//cout << "Success!\n";
	keep_window_open();
	return 0;
	}
	catch (exception& e) {
		cerr << "error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		keep_window_open();
		return 2;
	}
}
