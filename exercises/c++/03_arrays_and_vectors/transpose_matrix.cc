/*
    "Advanced Programming"
    Target: Write a function that computes the transpose of a matrix.
    The matrix is represented by a simple `array<double,N>` where N is the total size of the matrix.
    The original array must be modified inside the a function `transpose`.
    Author: Daniele Bruno
    Version: 28/08/19
*/

#include <iomanip>
#include <array>
#include <iostream>
using namespace std;

//template delle funzioni usate nel main
template< typename T, size_t num> void print_matrix(array<T,num>& _matrix, int _row, int _col);
template< size_t num> array<double, num> fill_matrix(int row, int col);
template< size_t num> array<double, num> transpose_matrix(array<double, num>& _matrix, int _row, int _col);

int main()
{

//Definisco la matrice
   int r = 0;
   int c = 0;
   int* const _row = &r;
   int* const _col = &c;
   cout << "please, insert the number of rows you want" << "\t";
   cin >> *_row;
   cout << "please, insert the number of coloumns you want" << "\t";
   cin >> *_col;

   //-----------------------------------------------------------------
   // Uso la reference per calcolare il prodotto tra due puntatori const
   // e inserirlo come const nella variabile size

   //const int _s = *_row * *_col;
   //const int size = _size;

   //----------------------------------------
   //non riesco a rendere la variabile "size" (const int) del tipo adatto ad essere inserita dall'utente.

   const int size = 9;

   //----------------------------------------

   cout << "\n" << "Number of rows " << *_row << "\n" <<
                   "Number of coloumns " << *_col << "\n"
                   "Matrix size " << size << "\t" << "\n";

   cout << "\n" << "Insert Matrix elements, Row-wise" << "\n";
   array<double, size> matrix = fill_matrix<size>(*_row, *_col);
   cout << "Inserted Matrix" << "\n" << "\n";
   print_matrix<double, size>(matrix, *_row, *_col);
   cout << "" << "\n";
   array<double, size> transposematrix = transpose_matrix(matrix, *_row, *_col);
   cout << "Transposed Matrix" << "\n" << "\n";
   print_matrix<double, size>(transposematrix, *_col, *_row);

   return 0;
}

//template dell'array di numeri
template <size_t num>
//funzione per creare una matrice
array<double, num> fill_matrix(int _row, int _col)
{
   array<double, num> _matrix;
   for (int i = 0; i < _row; ++i){
      for (int j = 0; j < _col; ++j){
         cout << "please, insert the element" << "\n";
         cin >> _matrix[i * _row + j];
      }
   }
   return _matrix;
}

//template dell'array di numeri
template <size_t num>
//funzione per fare la trasposta di una matrice
array<double, num> transpose_matrix(array<double, num>& _matrix, int _row, int _col)
{
   array<double, num> _transposematrix;
   for (int j = 0; j < _row; j++){
      for (int i = 0; i < _col; i++){
         _transposematrix[j * _col+ i] = _matrix[i * _row + j];
      } //c'è un problema con la trasposta di matrici rettangolari
   }
   return _transposematrix;
}

//template dell'array di numeri
template <typename T, size_t num>
//funzione per stampare a schermo la matrice
void print_matrix(array<T, num>& _matrix, int _row, int _col)
{
  for (int i = 0; i < _row; i++) {
    for (int j = 0; j < _col; j++)
      cout << _matrix[i * _row + j] << "\t";
    cout << endl;
  }
}
