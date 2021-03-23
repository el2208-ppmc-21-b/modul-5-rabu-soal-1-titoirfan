// David Khowanto - 13217056
// Soal M05 - Rekursi
// https://www.techiedelight.com/4-sum-problem/

#include <stdio.h>
#include <stdbool.h>

enum {
  TRIPLET = 3,
  QUADRUPLET = 4
};

// Check if triplet Exists
bool isTripletExist(int arr[], int n, int sum, int count) {
  // if triplet has the desired sum, return true
  if (count == 3 && sum == 0) {
    return true;
  }

  // return false if the sum is not possible with the current configuration
  if (count == 3 || n == 0 || sum < 0) {
    return false;
  }

  // recur with including and excluding the current element
  return isTripletExist(arr, n - 1, sum - arr[n - 1], count + 1) ||
    isTripletExist(arr, n - 1, sum, count);
}

// Check if quadruplet Exists
bool isQuadrupletExist(int arr[], int n, int sum, int count) {
  // if the desired sum is reached with 4 elements, return true
  if (sum == 0 && count == 4) {
    return true;
  }

  // return false if the sum is not possible with the current configuration
  if (count > 4 || n == 0) {
    return false;
  }

  // Recur with
  // 1. Including the current element
  // 2. Excluding the current element

  return isQuadrupletExist(arr, n - 1, sum - arr[n - 1], count + 1) ||
    isQuadrupletExist(arr, n - 1, sum, count);
}

int main() {
  int arr_len = 0;
  int sum = 0;
  int tuple_type = 0;

  printf("Array Size: ");
  scanf("%d", &arr_len);
  if (arr_len <= 0) {
    printf("Array Size Must be Bigger than 0");
    return 0;
  }
  int arr[arr_len];
  printf("Array Elements: ");
  for (int i = 0; i < arr_len; i++) {
    scanf("%d", &arr[i]);
  }

  printf("Desired Sum: ");
  scanf("%d", &sum);

  // input 3 = TRIPLET
  // input 4 = QUADRUPLET
  // input others = BOTH
  printf("Tuple: ");
  scanf("%d", &tuple_type);

  bool hasTriplet = isTripletExist(arr, arr_len, sum, 0);
  bool hasQuadruplet = isQuadrupletExist(arr, arr_len, sum, 0);

  if (tuple_type == QUADRUPLET) {
    if (hasQuadruplet) printf("Quadruplet Exists");
    else printf("Quadruplet Don't Exists");
  } else if (tuple_type == TRIPLET) {
    if (hasTriplet) printf("Triplet Exists");
    else printf("Triplet Don't Exists");
  } else {
    if (hasTriplet && hasQuadruplet) printf("Both Exists");
    else if (hasTriplet) printf("Only Triplet Exists");
    else if (hasQuadruplet) printf("Only Quadruplet Exists");
    else printf("Both Don't Exists");
  }

  return 0;
}
