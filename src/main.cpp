#include <iostream>
using namespace  std;
#include <vector>

//  \n al principio: baja una linea y luego imprimie hello
// \n al final: imprime Hello y luego baja una linea
// \n  al prinicpio y al final: aisla el texto completamente


string getSearchQuery()
{
cout << " Search Engine Mini\n";
cout << "-----------------------------\n";
cout << "🔍 Type a word to Search: ";

  string query;
  getline(cin, query);
  cout << endl;
  return query;
}

bool userWantsToExit(string input)
{
  
  transform(input.begin(), input.end(), input.begin(), ::tolower);
  // devuelve true si INPUT es igual a EXIT
return input == "exit";

}

void userWantsToGoToHelp()
{

    cout << "----------------------\n";
    cout << " Available commands: \n";
    cout << ":Help -> show this help \n";
    cout << ":Exit -> exit program \n";
    cout << "-------------------------\n";

}

struct Result
{
  string title;
  string url;
  string description;
};

// IMPORTANTE TODO LO QUE SE VAYA A EJECUTAR UNA ACCION VA DENTRO DE MAIN
// LO QUE SEA SOLO DEFINICION, DECLARACION PUEDE IR AFUERA

int main()
{
  
  vector<Result> results;
  
results.push_back({"Google", "https://www.google.com", "The world’s most popular search engine for finding information on the web."});

results.push_back({"GitHub", "https://github.com", "A platform for developers to host, share, and collaborate on code repositories."});

results.push_back({"Stack Overflow", "https://stackoverflow.com", "A question-and-answer site where programmers solve coding problems."});

results.push_back({"Wikipedia", "https://www.wikipedia.org", "A free online encyclopedia written and maintained by volunteers worldwide."});

results.push_back({"YouTube", "https://www.youtube.com", "A video-sharing platform for watching and uploading content on any topic."});

results.push_back({"Reddit", "https://www.reddit.com", "A social news and discussion platform organized into topic-based communities."});

results.push_back({"OpenAI", "https://www.openai.com", "An AI research organization focused on building safe and useful artificial intelligence."});

results.push_back({"MDN Web Docs", "https://developer.mozilla.org", "Official documentation and learning resources for web developers."});

bool  is_loop_active = true;
bool is_result_not_found = false;


while (is_loop_active)
{
  string query = getSearchQuery();

  if (query == "help")
  {
    userWantsToGoToHelp(); 
    
  }

  if (query == "exit")
  {
    
    // si userWantsToExit devuelve true sal del programa 
    if (userWantsToExit(query))
    {
      cout << "👋🏻 Exiting Search Engine Mini... \n";
      is_loop_active = false;   
  
    }   
  }
  
    
    for (int i = 0; i < results.size(); i++)
    {
// find() busca el texto dentro del título.
// Si lo encuentra, devuelve la posición donde empieza.
// Si NO lo encuentra, devuelve string::npos (significa: "no encontrado").
// Esta comparación devuelve true solo si el texto apareció.
    bool matchTitle = results[i].title.find(query) != string::npos;
    bool matchDescription = results[i].description.find(query) != string::npos;

    if (matchTitle || matchDescription)
    {
      cout << results[i].title << endl;
      cout << endl;
      cout <<  results[i].description << endl;
     cout << endl;
    }
    

    }
    
  };


  if (!is_result_not_found)
  {
    cout << "Result not found" << endl;
  }
  

return 0;
}