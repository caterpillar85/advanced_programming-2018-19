#include <iostream>
#include <string>
#include <vector>

// template<class T, class Allocator = std::allocator<T>>
// class vector;

template <typename T>
void print_vector(const std::vector<T>& v, const std::string& s);

int main() {
  std::vector<int> v0{1, 2, 4};
  std::vector<int> v1(4, 4);

  print_vector(v0, "v0");     //stampa il vettore v0
  print_vector(v1, "v1");     //stampa il vettore v1

  v1 = v0;      //copio gli elementi di v0 in v1

  print_vector(v1, "v1 after copy");    //stampo il nuovo v1

  for (auto x : {7, 8, 9})      //aggiunge dei nuovi elementi al vettore
    v1.push_back(x);

  print_vector(v1, "v1 after push_back");     //stampa il nuovo vettore

  //stampa i singoli elementi del vettore
  for (auto i = 0u; i < v1.size(); ++i)
    std::cout << "v[" << i << "] = " << v1[i] << std::endl;

    //stampa l'elemnto al posto 3 e quello al posto 78 che è nullo
  std::cout << v1[3] << " " << v1[78] << std::endl;        // no bounds checking

    //stampa l'elemento al posto 3 e quello al posto 78 controllando se rispetti il limite imposto, altrimenti da errore
  std::cout << v1.at(3) << " " << v1.at(78) << std::endl;  // bounds checking

  return 0;
}

template <typename T>
void print_vector(const std::vector<T>& v, const std::string& s) {
  std::cout << s << ": ";
  for (const auto& x : v)
    std::cout << x << " ";
  std::cout << std::endl;
}
