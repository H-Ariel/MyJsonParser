#include "json.h"

using namespace std;

int main()
{
	json j, child;
	j["name"] = "John";
	j["age"] = 25;
	j["phoneNumbers"] = { "010-1234-5678", "010-9876-5432" };
	j["children"] = {};
	child["name"] = "Smith";
	child["age"] = 6;
	j["children"].append(child);
	child["name"] = "Jane";
	child["age"] = 2;
	j["children"].append(child);

	cout << j << endl;

	return 0;
}
