
int main(int argc, char const *argv[])
{
  char line[20];

  FILE *file;
  file = fopen(argv[1], "r");

  //create matrix of size rows x columns
  fgets(line, sizeof(line), file);
  int rows = atoi(&line[0]);
  int columns = atoi(&line[2]);

  //create 3 matricies of size rows x columns
  int m1[rows][columns];
  int m2[rows][columns];
  int mFinal[rows][columns];

  int i,j;
  for(i=0; i<rows; i++)
  {
    for(j=0; j<columns; j++)
    {
      fscanf(file, "%d", &m1[i][j]);
    }
  }
  fgets(line, sizeof(line), file);
  for(i=0; i<rows; i++)
  {
    for(j=0; j<columns; j++)
    {
      fscanf(file, "%d", &m2[i][j]);
    }
  }
  for(i=0; i<rows; i++)
  {
    for(j=0; j<columns; j++)
    {
      mFinal[i][j] = m1[i][j]+m2[i][j];
    }
  }
  for(i =0; i<rows; i++)
  {
    for(j =0; j<columns; j++)
    {
      printf("%d\t", mFinal[i][j]);
    }
    printf("\n");
  }
  return 0;
}
