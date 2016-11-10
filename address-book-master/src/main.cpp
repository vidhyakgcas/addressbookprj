#include "addressbookcontroller.h"
#include "sqlitedatasource.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SQLiteDataSource dSrc("contacts.db", true);  
    AddressBookController myBook(dSrc);
    myBook.start();
    app.setStyleSheet("QMainWindow{background-image:url(E:/gitnew/addressbookprj/address-book-master/src/Tulips.jpg)}");
    return app.exec();
}

