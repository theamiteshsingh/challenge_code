void bubbleSortAdaptive(int *A, int n)
// {
//     int temp;
//     int isSorted = 0;
//     for (int i = 0; i < n - 1; i++) 
//     {
//         printf("Working on pass number %d\n", i + 1);
//         isSorted = 1;
//         for (int j = 0; j < n - 1 - i; j++) 
//         {
//             if (A[j] > A[j + 1])
//             {
//                 temp = A[j];
//                 A[j] = A[j + 1];
//                 A[j + 1] = temp;
//                 isSorted = 0;
//             }
//         }
//         if (isSorted)
//         {
//             return;
//         }
//     }
// }