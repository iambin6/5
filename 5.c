#include <stdio.h>
#include <math.h>
#define PI 3.14159
double dientichhinhtron(double r) {
  if (r <= 0) {
    return -1;
  }
  return PI * pow(r, 2);
}
int kiemtrasochinhphuong(int num) {
  if (num <= 0) {
    return 0;
  }

  int sqrt_num = (int) sqrt(num);
  return (sqrt_num * sqrt_num == num);
}

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void sapxep(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] < arr[j]) {
        swap(&arr[i], &arr[j]);
      }
    }
  }
}

void binhphuongmang(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    arr[i] = arr[i] * arr[i];
  }
}

int main() {
  int choice, num, arr[5];
  double r;

  while (1) {
    printf("\nMenu:\n");
    printf("1. Tinh dien tich hinh tron\n");
    printf("2. Kiem tra so chinh phuong\n");
    printf("3. Sap xep mang\n");
    printf("4. Binh phuong mang\n");
    printf("5. Exit\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        printf("Nhap ban kinh hinh tron: ");
        scanf("%lf", &r);
        double dientich = dientichhinhtron(r);
        if (dientich == -1) {
          printf("Ban kinh sai.\n");
        } else {
          printf("Dien tich hinh tron la: %.2lf\n", dientich);
        }
        break;

      case 2:
        printf("Nhap 1 so: ");
        scanf("%d", &num);
        if (kiemtrasochinhphuong(num)) {
          printf("%d la so chinh phuong.\n", num);
        } else {
          printf("%d khong phai la so chinh phuong.\n", num);
        }
        break;

      case 3:
        printf("Nhap 5 so: ");
        for (int i = 0; i < 5; i++) {
          scanf("%d", &arr[i]);
        }
        sapxep(arr, 5);
        printf("Mang sap xep theo thu tu giam dan: ");
        for (int i = 0; i < 5; i++) {
          printf("%d ", arr[i]);
        }
        printf("\n");
        break;

      case 4:
        printf("Nhap 5 so: ");
        for (int i = 0; i < 5; i++) {
          scanf("%d", &arr[i]);
        }
        binhphuongmang(arr, 5);
        printf("Mang sau khi binh phuong: ");
        for (int i = 0; i < 5; i++) {
          printf("%d ", arr[i]);
        }
        printf("\n");
        break;

      case 5:
        printf("Exiting ...\n");
        return 0;

      default:
        printf("Lua chon khong hop le");
	}
  }
  return 0;
}

