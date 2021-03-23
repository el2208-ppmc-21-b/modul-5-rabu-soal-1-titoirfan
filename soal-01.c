/** EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*   Modul               : 5
*   Soal                : 1
*   Hari dan Tanggal    : 
*   Nama (NIM)          : 
*   Asisten (NIM)       : 
*   Nama File           : soal-01.c
*   Deskripsi           : Deskripsi file ini.
*/

#include <stdio.h>
#include <stdbool.h>

enum {
  TRIPLET = 3,
  QUADRUPLET = 4
};

bool isTripletExist(...) {
  // isi dengan kode rekursi
}

bool isQuadrupletExist(...) {
  // isi dengan kode rekursi
}

int main() {
  int arr_len = 0;
  int sum = 0;
  int tuple_type = 0;

  printf("Array Size: ");
  scanf("%d", &arr_len);
  // lakukan pengecekan panjang array 
  // printf("Array Size Must be Bigger than 0");

  int arr[arr_len];
  printf("Array Elements: ");
  for (int i = 0; i < arr_len; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Desired Sum: ");
  scanf("%d", &sum);

  // 3 = TRIPLET
  // 4 = QUADRUPLET
  // others = BOTH
  printf("Tuple: ");
  scanf("%d", &tuple_type);

  if (tuple_type == QUADRUPLET) {
    if (...) printf("Quadruplet Exists");
    else printf("Quadruplet Don't Exists");
  } 
  else if (tuple_type == TRIPLET) {
    if (...) printf("Triplet Exists");
    else printf("Triplet Don't Exists");
  } 
  else {
    if (...) printf("Both Exists");
    else if (...) printf("Only Triplet Exists");
    else if (...) printf("Only Quadruplet Exists");
    else printf("Both Don't Exists");
  }

  return 0;
}
