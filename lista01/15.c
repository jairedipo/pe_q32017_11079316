int main()
{
    /*definição das váriaveis e scan*/
    int n, i;
    scanf("%d", &n);
    
    /*imprime os numeros entre 100 e n divisiveis por 2*/
    if (n>100) {
      printf("100");
      
      for (i=102; i<=n; i+=2){
        printf(", %d", i);
      }
    }
    
}
