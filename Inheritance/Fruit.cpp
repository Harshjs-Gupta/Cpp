/*Make a class named Fruit with a data member to calculate the number of fruits in a basket.
Create two other class named Apples and Mangoes to calculate the number of apples and mangoes in the basket. 
Print the number of fruits of each type and 
the total number of fruits in the basket*/

#include<iostream>
using namespace std;

class Fruit
{
    protected:
    int numfruit;
    public:
    Fruit (int numfruit=0) {}

    void setnumfruits(int num)
    {
        numfruit=num;
    }
    int getnumfruits()
    {
        return numfruit;
    }
};
class Apples : public Fruit
{
    public:
    Apples(int numapple=0) {}

    void setnumapples(int num)
    {
        setnumfruits(num);
    }
    int getnumapples()
    {
        return numfruit;
    }
    
};
class Mangoes : public Fruit
{
    public:
    Mangoes(int nummangoes=0) {}

    void setnummangoes(int num)
    {
        setnumfruits(num);
    }
    int getnummangoes()
    {
        return numfruit;
    }
};
int main()
{
    Apples apples;
    Mangoes mangoes;

    apples.setnumapples(5);
    mangoes.setnummangoes(3);

    std::cout << "Number of Apples: " << apples.getnumapples() << std::endl;
    std::cout << "Number of Mangoes: " << mangoes.getnummangoes() << std::endl;

    int totalFruits = apples.getnumfruits() + mangoes.getnumfruits();
    std::cout << "Total Number of Fruits: " << totalFruits << std::endl;

       
    return 0;
}