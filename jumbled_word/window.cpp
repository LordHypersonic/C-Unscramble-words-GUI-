#include "window.h"
#include "ui_window.h"
#include <string>
#include <QTextStream>
#include <QFile>
#include <QMessageBox>

using namespace std;
window::window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::window)
{
    ui->setupUi(this);
}

window::~window()
{
    delete ui;
}

void window::on_Button_Solve_clicked() //if SOLVE button is pressed
{
    QString answer;
    ui->listWidget_SOLVED->clear(); //clearing listWiget
    QString QJword = ui->lineEdit_JWord->text(); //QString variable QJword equal to text in lineEdit.
    std::string Jword = QJword.toStdString(); // QString to string.
    std::string sortedJWord;
    sortedJWord=sortString(Jword); // sort Jowrd and sotre it in sortedJWord
    QFile file("words.txt"); //file object "file"
    if(file.open(QIODevice::ReadOnly)) // if file is open
    {
        QTextStream FileLine (&file); // creating text stream
        while(!FileLine.atEnd()) // read text stream till end
        {
            QString SFileL=FileLine.readLine(); // QString variable SFile equal to the line of file.
            string sFileL = SFileL.toStdString(); //converting QString to std::string
            string sortedWORD=sortString(sFileL);//sort the word from file
            if(sortedWORD==sortedJWord) //check both sorted words (jumbled and from file).
            {
                answer=QString::fromStdString(sFileL); // string to QString
                ui->listWidget_SOLVED->addItem(answer); // Adding item to list Widget.
            }
        }
        file.close(); // closing file.
    }
    else //if words.txt is not found
    {
        QMessageBox::warning(this,"Warning","Failed to open words.txt"); // display message box.
    }
}
