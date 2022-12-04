#include <iostream>
#include <string>

class Postac {

    
public:
    Postac(const std::string& imie, int zdrowie, int sila) {
       this->imie = imie;
       this->zdrowie = zdrowie;
       zdrowie_maks = zdrowie;
       this->sila = sila;
    }
    
    void wypisz() const {
        std::cout << imie << ", " << zdrowie << "/" << zdrowie_maks << '\n';
    }
    
     void otrzymaj_obrazenia(int ile) {
         if (ile > zdrowie) 
             zdrowie = 0;
         else 
             zdrowie -= ile;
        
     }
    bool czy_zyje() const { 
        return zdrowie > 0;
        }
            
    
     
     void wylecz(int n) { 
         if (!czy_zyje())
             return;
         
        zdrowie += n;
        
         if (zdrowie > zdrowie_maks)
             zdrowie = zdrowie_maks;
         
     }
     
      Postac walka(Postac& b) {
          while (zdrowie > 0 && b.zdrowie > 0) {
              otrzymaj_obrazenia(b.sila);
              b.otrzymaj_obrazenia(sila);
              wypisz();
              b.wypisz();
        }
        if (zdrowie = 0)
            return czy_zyje();
        else 
            return b.czy_zyje();
      }
    
private:
    std::string imie;
    int zdrowie_maks;
    int zdrowie;
    int sila;
     
};

int main() {
    Postac Rufus{"Rufus", 110, 50};
    Rufus.wypisz();
    Rufus.otrzymaj_obrazenia(10);
    Rufus.wypisz();
    Rufus.czy_zyje();
    Rufus.wylecz(5);
    Rufus.wypisz();
    Postac Roman{"Roman", 100, 40};
    Rufus.walka(Roman);    
}
