#include "lib/gtest.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

//#include <iostream>
//#include <vector>
////#include "opcion1.h"
//#include "src/opcion2.h"
//
//int main() {
////    vector<int> v{0, 0, 1, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0};
//    vector<int> v{0, 0, 1, 2, 8, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0};
//
////    obtener(v, 6);
//
//    int i = 0;
//    while (i < v.size()) {
//        if (v[i] == 0) {
//            obtener(v, i);
//        }
//        i++;
//    }
//
//    return 0;
//}
