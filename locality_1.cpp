const int M = 2;
const int N = 3;

int main()
{
    int arr[M][N] = {{1, 2, 3}, {4, 5, 6}};
    //print(arr);

    int i, j;
    int sum = 1;

    for (i=0;i < M; i++)
      for (j =0; j<N; j++){
	sum += arr[i][j];
      }


    
    return 0;
}
