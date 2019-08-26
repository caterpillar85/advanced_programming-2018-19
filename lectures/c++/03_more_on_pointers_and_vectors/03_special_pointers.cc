#include <cstring>  // strcmp
#include <iostream>

//dichiara delle funzioni

int func1(const char* a) {
  std::cout << "func1: " << a << std::endl;
  return 1;
}

int func2(const char* a) {
  std::cout << "func2: " << a << std::endl;
  return 2;
}

void func3(const char* a) {
  std::cout << "func3: " << a << std::endl;
  //void non ha "return"
}

//chima le funzioni
int func1(const char* a);
int func2(const char* a);
void func3(const char* a);

int main() {
  int a{8};       //inizializza "a"
  int* pi{&a};    //inizializza "pi", che è un pointer, al valore della reference di "a"

  char** ppc;     //pointer di un pointer di type "char"

  int* ap[7];     //pointer ad un elemento di un array

  void* pv{pi};
  // *pv; // we cannot dereference void*
  // ++pv; // we cannot increment. Why?
              // perchè non è stato assegnato il tipo
              //"pi" è di tipo int e vogliamo assegnare il suo valore ad un type void
  int* pi2 {
    static_cast<int*>(pv)
  };  //converte il type di pv (void) ad int* se un elemento di int* può essere convertito in pv

  // pv è stato convertito in int*
  pv = ppc;   //il valore di un pointer di qualcosa (char) viene assegnato ad un pointer int
  pv = ap;    //il valore di un pointer int (di un solo elememto di un array) viene assegnato ad un pointer int
  pv = pi;    //il valore di un pointer int viene assegnato ad un pointer int

  pi = nullptr;   //ok, perchè pi è un pointer int
  ppc = nullptr;  //ok, perchè ppc è un pointer char
  // ap = nullptr;  // error, why?
                        //perchè ap è un pointer ad un array, mentre nullptr punta ad un solo oggetto
  ap[0] = nullptr;  //ok, perchè con nullptr sto verificando un solo elemento di ap[0]

  int** bbb;      //pointer di un pointer di type "int"
  bbb = ap;    //sto assegnando il valore di un pointer (di un elemento di un array) ad un pointer di pointers
  pv = nullptr;  //pv è ancora un pointer di tipo int
  pi2 = 0;  // older codes. gets the nullptr
  pi2 = nullptr;  //new codes.

  // pi = NULL; // please don't do this

  double* da{new double[5]{}};    //creo un nuovo array di 5 double
  delete[] da;  // dangling pointer  //svuota la memoria occupata
  da = nullptr;  // il tipo di "da" è ancora un pointer int

  if (pi != nullptr)
    std::cout << "pi is not nullptr and I can dereference it " << *pi
              << std::endl;

  if (pi)   //new codes
    std::cout << "pi is not nullptr and I can dereference it " << *pi
              << std::endl;

  if (pi == nullptr)    //negazione del nullptr --> pi = 0
    std::cout << "pi is nullptr and I CANNOT dereference it \n";

  if (!pi)    //negazione del nullptr --> pi = 0
    std::cout << "pi is nullptr and I CANNOT dereference it \n";

  // strings are special type of char[] --> ovvero array di elementi char
  char word[]{"Hello"};                                     //array di elementi char (in questo caso un solo elemento)
  char word2[]{'H', 'e', 'l', 'l', 'o', 0};                 //array di elementi char

  // strcmp è una funzione di "cstring" che serve a comparare due stringhe
  if (strcmp(word, word2) == 0)  // word == word2 is
                                 // implementation-dependent (it might
                                 // compare the two pointers, i.e. the
                                 // two addresses of word and word2)
    std::cout << "same\n";
  else
    std::cout << "different\n";


  int (*fp)(const char*);   //pointer ad una funzione
  fp = func1;               //gli passa elementi di tipo char

  fp("hello");

  fp = &func2;              //inizializza "fp" come la reference alla "func2"
  fp("world");

  //fp = func3;       // error: wrong signature
                      //func3 è di tipo "void" e fp in questo momento è invece int

  //se metto auto si inizializza correttamente
  auto xx = func3;

  xx("auto");

  decltype(&func3) x = func3;
  x("decltype");

  return 0;
}
