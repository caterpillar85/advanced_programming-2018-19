#include <array>
#include <iostream>

// template <class T, std::size_t N>
// struct array;

int main() {
  //creo un array di nome "a"
  std::array<int, 4> a{1, 2, 3, 4};
  //copio il contenuto di "a" in "b"
  std::array<int, 4> b{a};  // I can copy element-wise from another std::array
                            // this is not possible with plain built-in arrays
  b = a;
  for (auto x : a)
    std::cout << x << " ";
  std::cout << std::endl;

  for (auto x : b)
    std::cout << x << " ";
  std::cout << std::endl;

  a[0] = 0;  // same subscripting operator withouth bound checking
            // all'elemento in posizione 0 dell'array assegna il valore 0, al posto di uno

//solo l'array "a" è stato modificato
  for (const auto x : a)
    std::cout << x << " ";
  std::cout << std::endl;

//l'array "b" non è stato modificato e viene ristampato
  for (const auto x : b)
    std::cout << x << " ";
  std::cout << std::endl;

  for (auto& x : a)
    x *= 10;            //moltiplica per 10 e assegna il valore risultante

//per ogni i che va da 0 (unsigned) all'ultimo valore dell'array a, stampa il valore di a[i]
  for (auto i = 0u; i < a.size(); ++i)
    std::cout << "a[" << i << "] = " << a[i] << std::endl;

  b.at(30);  // bound checking at run-time
            //".at" è un parametro della funzione array ed esegue un controllo sul limite del valore e restituisce un errore nel caso venga superato

  return 0;
}
