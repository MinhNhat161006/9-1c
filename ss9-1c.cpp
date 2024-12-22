#include <stdio.h>

int main() {
    int arr[100], currentLength = 0, numElements, addValue, addIndex;

    printf("Nhập số phần tử muốn nhập (tối đa 100): ");
    scanf("%d", &numElements);

    if (numElements < 0 || numElements > 100) {
        printf("Số phần tử không hợp lệ.\n");
        return 1;
    }

    printf("Nhập các phần tử:\n");
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &arr[i]);
    }
    currentLength = numElements;

    printf("Nhập giá trị muốn thêm: ");
    scanf("%d", &addValue);
    printf("Nhập vị trí muốn thêm (0 - 99): ");
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex >= 100) {
        printf("Vị trí không hợp lệ.\n");
        return 1;
    }

    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }

    printf("Mảng sau khi thêm: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
