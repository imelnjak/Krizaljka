// MD5:EFee2g8fwhdF6j3J4/efPg==// Verifikator 4.00b// Program:Krizaljka// Opis zadatka:Seminar - krizaljka// Autor:Iva Melnjak 44303// Poèetno vrijeme:21.12.2018. 2:04:02// Završno vrijeme:21.12.2018. 2:40:45// IP:fe80::bdec:db12:b711:e2cb%16 ( 2584 )// #:#include <iostream>,#include <cstring>,	rjesenje[3].opis="4. Ukljucuje se pomocu instrukcije #include.";,// Uspješnih/neuspješnih prevoðenja:24/2#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
void test(int i){fstream dat;dat.clear(); 
  static int p[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}; 
  static int suma=0;static int zag=0;static int zaglavlje=0;static int br=0;p[i]++;suma++;int f,s=0;char c;
  for (f=0;f<60;f++)s=s+p[f];if (s!=suma){cout<<"Neispravna suma brojaca. Poziv: test("<<i<<")"<<endl;cin>>c;return;} 
  zag=(int)time(0);if (zag==zaglavlje){br++;if ((br>1)&&(p[i]>1))return;} else br=0;zaglavlje = (int)time(0);
  dat.open("testiranje.txt",ios::out);
  dat << zaglavlje << endl <<"Rezultati testiranja (test N = 13):" << endl; 
  for (f=0;f<60;f++){if (p[f]>0) dat << f << char(58) << p[f] << endl;} 
  dat.close();dat.clear(); 
}; 
 #include <iostream>
#include <cstring>
using namespace std;

struct trjesenja{
  string opis;
  string rj;
};

trjesenja rjesenje[8];

void rjesenja(){test(1);
  rjesenje[0].opis="1. Niz instrukcija obrade koje se izvode uzastopno.";
  rjesenje[0].rj="sekvenca";
  rjesenje[1].opis="2. Grananja ili: ";
  rjesenje[1].rj="selekcije";
  rjesenje[2].opis="3. deklaracija: <tip><naziv>; ";
  rjesenje[2].rj="varijabla";
  rjesenje[3].opis="4. Ukljucuje se pomocu instrukcije #include.";
  rjesenje[3].rj="biblioteka";
  rjesenje[4].opis="5. Prvi element vezane liste.";
  rjesenje[4].rj="glava";
  rjesenje[5].opis="6. Aritmeticki, logicki i _ usporedivanja. (MN)";
  rjesenje[5].rj="operatori";
  rjesenje[6].opis="7. Struktura podataka s elementima istog naziva i istog tipa.";
  rjesenje[6].rj="polje";
  rjesenje[7].opis="8. Drugo ime za neki memorijski prostor.";
  rjesenje[7].rj="referenca";
}

void pomoc(){test(2);
  cout<<"  _1_ ___ ___ ___ ___ ___ ___ ___ ___"<<endl;
  cout<<"2|_S_|___|___|___|___|___|___|___|___|"<<endl;
  cout<<" |___|"<<endl;
  cout<<" |___|___ ___ ___ ___ ___ _4_ ___ ___"<<endl;
  cout<<"3|_V_|___|___|___|___|___|_B_|___|___|                _8_"<<endl;
  cout<<" |___|                   |___|                       |_R_|"<<endl;
  cout<<" |___|                ___|___|___ ___ ___            |___|"<<endl;
  cout<<" |___|              5|_G_|___|___|___|___|           |___|"<<endl;
  cout<<" |___|                   |___|___ ___ ___ ___ ___ ___|___|___"<<endl;
  cout<<"                        6|_O_|___|___|___|___|___|___|___|___|"<<endl;
  cout<<"              ___ ___ ___|___|                       |___|"<<endl;
  cout<<"            7|_P_|___|___|___|                       |___|"<<endl;
  cout<<"                         |___|                       |___|"<<endl;
  cout<<"                         |___|                       |___|"<<endl<<endl;
}

void unos(){test(3);
  string a;
  int brojac=0, broj=0;
  rjesenja();
  for(int i=0;i<8;i++){test(4);
    do{test(5);
      cout<<rjesenje[i].opis<<endl;
      cout<<"Unesite odgovor: "<<endl;
      cin>>a;
      cout<<endl;
      
      if(a=="p"){test(6);
        pomoc();
      }else{test(7);
        if(a==rjesenje[i].rj){test(8);
          cout<<"TOCNO!"<<endl;
          broj++;
        }
        else{test(9);
          cout<<"POGRESNO!Pokusajte ponovo."<<endl<<endl;
          brojac++;
        }
      }
    }while(a!=rjesenje[i].rj);
    cout<<endl;
  }
  if(broj==8){test(10);
    cout<<"BRAVO!!Uspjeli ste!"<<endl;
    cout<<"Konacan rezultat:"<<endl;
    cout<<"  _1_ ___ ___ ___ ___ ___ ___ ___ ___"<<endl;
    cout<<"2|_S_|_E_|_L_|_E_|_K_|_C_|_I_|_J_|_E_|"<<endl;
    cout<<" |_E_|"<<endl;
    cout<<" |_K_|___ ___ ___ ___ ___ _4_ ___ ___"<<endl;
    cout<<"3|_V_|_A_|_R_|_I_|_J_|_A_|_B_|_L_|_A_|                _8_"<<endl;
    cout<<" |_E_|                   |_I_|                       |_R_|"<<endl;
    cout<<" |_N_|                ___|_B_|___ ___ ___            |_E_|"<<endl;
    cout<<" |_C_|              5|_G_|_L_|_A_|_V_|_A_|           |_F_|"<<endl;
    cout<<" |_A_|                   |_I_|___ ___ ___ ___ ___ ___|_E_|___"<<endl;
    cout<<"                        6|_O_|_P_|_E_|_R_|_A_|_T_|_O_|_R_|_I_|"<<endl;
    cout<<"              ___ ___ ___|_T_|                       |_E_|"<<endl;
    cout<<"            7|_P_|_O_|_LJ|_E_|                       |_N_|"<<endl;
    cout<<"                         |_K_|                       |_C_|"<<endl;
    cout<<"                         |_A_|                       |_A_|"<<endl<<endl;


  }
  cout<<"Broj vasih pogresaka je "<<brojac<<endl;
}

int main(){test(11);
  cout<<"DOBRODOSLI! \nOva krizaljka sastoji se od pojmova iz kolegija Programiranje 2. \nRjesava se slijedno. \nPomoc su prva slova svih pojmova. \nMoze se pozvati odmah na pocetku, a i tijekom samog rijesavanja pomocu slova 'p'. "<<endl;
  cout<<"-----------------------"<<endl;
  
  cout<<"  _1_ ___ ___ ___ ___ ___ ___ ___ ___"<<endl;
  cout<<"2|___|___|___|___|___|___|___|___|___|"<<endl;
  cout<<" |___|"<<endl;
  cout<<" |___|___ ___ ___ ___ ___ _4_ ___ ___"<<endl;
  cout<<"3|___|___|___|___|___|___|___|___|___|                _8_"<<endl;
  cout<<" |___|                   |___|                       |___|"<<endl;
  cout<<" |___|                ___|___|___ ___ ___            |___|"<<endl;
  cout<<" |___|              5|___|___|___|___|___|           |___|"<<endl;
  cout<<" |___|                   |___|___ ___ ___ ___ ___ ___|___|___"<<endl;
  cout<<"                        6|___|___|___|___|___|___|___|___|___|"<<endl;
  cout<<"              ___ ___ ___|___|                       |___|"<<endl;
  cout<<"            7|___|___|___|___|                       |___|"<<endl;
  cout<<"                         |___|                       |___|"<<endl;
  cout<<"                         |___|                       |___|"<<endl<<endl;
  
  int izbor;
  do{test(12);
    cout<<"Odaberite aktivnost:"<<endl;
    cout<<"1 - Zapocni rjesavanje krizaljke"<<endl;
    cout<<"2 - Pomoc - prva slova"<<endl;
    cout<<"9 - Izlaz iz programa"<<endl;
    cin>>izbor;
    test(13); switch(izbor){
      case 1:
        unos();
        break;
      case 2:
        pomoc();
        break;
      case 9:
        break;
      default:
        cout<<"Pogresan unos. Molimo ponovite!"<<endl<<endl;
    }
  }while(izbor!=9);
  system("pause");
  return 0;
}  
// Postoci testiranja: 100% 100% 100%
