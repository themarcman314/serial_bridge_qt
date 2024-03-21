#include <QSqlDatabase>
#include <iostream>

void InitDb(void)
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE"); // specify the driver type
    db.setDatabaseName("mydatabase.db");
    if(db.open() == true)
        std::cout << "successfully opened database!" << std::endl;
    else
        std::cerr << "error opening database!" << std::endl;
    db.close();
}
