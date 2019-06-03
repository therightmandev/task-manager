#include <iostream>
#include <vector>
#include <fstream>


int main() {
	std::vector<std::string> list;
	std::string new_item;
	bool done = false;
	std::ofstream out;

	while (!done) {
		std::cout << "Enter item (q to quit): ";
		std::cin >> new_item;
		if (new_item.compare("q") == 0) {
			break;
		}
		list.push_back(new_item);
		std::cout << "ADDED \"" << new_item << "\"\n";
	}

	std::cout << "FINISHED\nOutputing to list.txt\n";
	out.open("list.txt");
	if (out.is_open()) {
		out << "Insert the time in minutes for each task after the colon" << std::endl;
		for (std::vector<std::string>::iterator it = list.begin();
				it != list.end(); ++ it) {
			out << *it << ":" << std::endl;
		}
		out.close();
	} else {
		return 1;
	}

	return 0;
}
