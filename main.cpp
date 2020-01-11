#include <iostream>
#include "Polygon.hpp"
#include "list.hpp"
#include <string.h>
#include <algorithm>

int main() {
    char str[10];
    containers::list<Triangle> l;
    auto it = l.begin();
    while(std::cin >> str){
        if(strcmp(str, "push") == 0){
            Triangle t;
            t.scan(std::cin);
            l.add(t);
        }else if(strcmp(str,"delete")==0){
            int t;
            std::cin >> t;

            //std::next(it, t);
            l.erase(l.begin() + t);
            std::cout << "\n";
        }
        else if(strcmp(str, "front") == 0) {
            l.front().print(std::cout);
            std::cout << "\n";
        }if(strcmp(str, "get") == 0) {
            int r;
            std::cin >> r;
            l[r].print(std::cout);
            std::cout << "\n";
        } else if(strcmp(str, "end") == 0){
            l.End().print(std::cout);
        } else if(strcmp(str,"insert") == 0){
            int r;
            std::cin >>r;
            Triangle t;
            t.scan(std::cin);
            l.insert(l.begin() + r, t);
        }else if(strcmp(str, "all") == 0){
            if (l.begin()!=nullptr) {
                std::for_each(l.begin(), l.end(), [](Triangle t){t.print(std::cout); });
                std::cout<< "\n";
            } else {
                std::cout << "Empty" << std::endl;
            }
        } else if(strcmp(str, "q") == 0) {
            return 0;
        }
    }
}