#include"Analyzer.h"


int main(void){

Analyzer *analyzer = new Analyzer();
analyzer -> Plot();

analyzer -> ~Analyzer();

return 0;
}