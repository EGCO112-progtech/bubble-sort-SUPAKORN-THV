// selection sort function module in C

void display(int a[], int n) {

  int i;

  for (i = 0; i < n; i++)
    printf("%5d", a[i]);
  printf("\n");
}

void selectionSort(int data[], int length) {
  int i, j, m, mi;
  display(data, length);
}

void insertion(int a[], int n) {}

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int a[], int n) {

  int i, j;
  int sorted;
  // how may pair to compare?
  //
  /* for (i = 0; i <= n-1; i++) {
    printf("ROUND %d\n",i);
    for(j= i+1; j <= n-1; j++)
      {
        if(a[i] > a[j])
         swap(&a[i], &a[j]);
      }
  */
  
  //Aj.Ming Preview
  /*
  for(i=n-1; i>0; i--) {
    printf("ROUND %d\n", i);
    for (j = 0; j < i; j++)
      {
        if (a[j] > a[j+1])
          swap(&a[j], &a[j+1]);
      }
  */
/*
  //Aj.Ming UPGRADE
  for(i=0; i<n-1; i++) {
    //printf("ROUND %d\n", i+1);
    sorted = 0;
    for (j = 0; j < n-1-i; j++)
      {
        if (a[j] > a[j+1])
        {
          swap(&a[j], &a[j+1]);
          sorted = 1;
        }
      }
    display(a, n);
    if(sorted == 0) break;
  }
*/
    //Aj.Ming Modify
  for(i=0; i<n-1; i++) {
    //printf("ROUND %d\n", i+1);
    for (j = 0; j < n-1-i; j++)
      {
        if (a[j] > a[j+1])
        {
          swap(&a[j], &a[j+1]);
        }
      }
    display(a, n);
  }
}

int IsPrime (int check){
  int i,prime=0;
  for(i=1; i<=check/2; i++) // Only can divided by 1
    {
      if(check%i == 0)
        {
        prime++;
        //printf(">>%d Prime is %d\n",check,prime);
        }
    }
  return prime;
}
