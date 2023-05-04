#include "Header.h"

int main()
{
    DiabetesCreator* CreatorDiabetes = new DiabetesCreator();
    SARSCreator* CreatorSARS = new SARSCreator();

    //Массив создателей
    Creator* creators[] = { CreatorDiabetes, CreatorSARS };

    //Перебираем создателей и создаем диагнозы
    for (auto&& creator : creators)
    {
        Diagnosis* diagnosis = creator->FactoryMethod();
        cout << diagnosis->GetName() << endl;
        delete diagnosis;
    }

    return 0;
}


