#include <iostream>
using namespace std;

int main() 
{
  int qntvotos, voto, acumulativo, bolsonaro, lula, ciro, tebet, luiz, branco;
  acumulativo = 0;
  bolsonaro = 0;
  lula = 0;
  ciro = 0;
  tebet = 0;
  luiz = 0;
  branco = 0;
  cout<<"quantas pessoas irão votar?\n";
  cin>>qntvotos;
  system("pause");
  system("clear");
  while (acumulativo<qntvotos)
    {
      acumulativo = acumulativo + 1;
      cout<<"\nVote no canditado de sua preferência ou vote em branco\nvote 1: se deseja votar em Jair Messias Bolsonaro\nvote 2: se deseja votar em Luiz Inácio Lula da Silva\nvote 3: se deseja votar em Ciro Gomes\nvote 4: se deseja votar em Simone Tebet\nvote 5: se deseja votar em Luiz Felipe d’Avila\nvote 6: se deseja votar em branco\n";
      cin>>voto;      
      switch (voto)
        {
        case 1:
          cout<<"\nVocê votou em Jair Messias Bolsonaro, obrigado pelo voto!\n";
          bolsonaro = bolsonaro + 1;
          system("pause");
          system("clear");
          break;
        case 2: 
          cout<<"\nVocê votou em Luiz Inácio Lula da Silva, obrigado pelo voto!\n";
          lula = lula + 1;
          system("pause");
          system("clear");
          break;
        case 3:
          cout<<"\nVocê votou em Ciro Gomes, obrigado pelo voto!\n";
          ciro = ciro + 1;
          system("pause");
          system("clear");
          break;
        case 4:
          cout<<"\nVocê votou em Simone Tebet, obrigado pelo voto!\n";
          tebet = tebet + 1;
          system("pause");
          system("clear");
          break;
        case 5: 
        cout<<"\nVocê votou em Luiz Felipe d’Avila, obrigado pelo voto!\n";
          luiz = luiz + 1;
          system("pause");
          system("clear");
          break;
        case 6:
        cout<<"\nVocê votou em branco, obrigado pelo voto!\n";
          branco = branco + 1;
          system("pause");
          system("clear");
          break;     
        default:
          cout<<"\nEssa opção é inválida!\n";         
        }
    }    
      system("clear");
  cout<<"\n"<<bolsonaro<<" Votaram em Jair Messias Bolsonaro";
  cout<<"\n"<<lula<<" Votaram em Luiz Inácio Lula da silva";
  cout<<"\n"<<ciro<<" Votaram em Ciro Gomes";
  cout<<"\n"<<tebet<<" Votaram em Simone Tebet";
  cout<<"\n"<<luiz<<" Votaram em Luiz Felipe d’Avila";
  cout<<"\n"<<branco<<"votaram em branco";
}