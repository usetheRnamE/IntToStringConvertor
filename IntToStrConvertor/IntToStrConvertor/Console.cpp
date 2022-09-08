#include "LogTemplate.h"
#include "Console.h"
#include "Convertor.h"

Convertor con;

Console::Console()
{
    lg::Log("Yes");

    std::shared_ptr<Number> num;
    {
        std::shared_ptr<Number> exampleSHR = std::make_shared<Number>();

        num = exampleSHR;

        int x;
        std::cin >> x;

        exampleSHR->SetInt(x);
    }

    con.Convert(*num->GetInt());
}
