#include <iostream>

int main(int argc, char* argv[]) {
    //how command line arguments are passed to main()
    //in questo modo gli argomenti vengono passati quando si lancia il comando dal terminale

  for (auto i = 0; i < argc; ++i)
    std::cout << "argv[" << i << "] = " << argv[i] << std::endl;
  return 0;
}

//"argc" argument count
//"argv" argument vectors
