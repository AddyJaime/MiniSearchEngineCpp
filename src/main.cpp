#include <iostream>
using namespace  std;

//  \n al principio: baja una linea y luego imprimie hello
// \n al final: imprime Hello y luego baja una linea
// \n  al prinicpio y al final: aisla el texto completamente


string getSearchQuery()
{
  cout << " 🔍 Search Engine Mini\n";
  cout << "-----------------------------\n";
 cout << "Type a word to Search: ";

  string query;
  getline(cin, query);
  return query;
}
int main()
{
 string query = getSearchQuery();
}