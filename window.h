#ifndef WINDOW_H
#define WINDOW_H

#include <QMainWindow>
#include <ctype.h>

using namespace std;

namespace Ui {
class window;
}

class window : public QMainWindow
{
    Q_OBJECT

public:
    explicit window(QWidget *parent = nullptr);
    ~window();
    string sortString(string word)
    {
        int len=word.length(); //length of given word
        for(int i=0; i<len; i++) // loop for converting lower alpha to upper alpha
        {
            if(islower(word[i])) word[i]=toupper(word[i]);
        }
        std::string Jumble;
        int TEMP[len];
        for(int i=0; i<len; i++) TEMP[i]=0; //initializing array TEMP with 0.
        for(int i=0; i<len; i++) //loop for storing ascii code of alphabets in given word
        {
            TEMP[i]=word[i];
        }
        for(int i=0; i<len; i++) // loop for sorting numbers
        {
            for(int j=0; j<len; j++)
            {
                if(TEMP[j]>TEMP[j+1])
                {
                    int temp=TEMP[j];
                    TEMP[j]=TEMP[j+1];
                    TEMP[j+1]=temp;
                }
            }
        }
        for(int i=0; i<len; i++) //loop for creating sorted string of given word like: dance will be ACDEN
        {
            Jumble.push_back(TEMP[i]);
        }
        return Jumble; //returning sorted string
    }

private slots:
    void on_Button_Solve_clicked();

private:
    Ui::window *ui;
};

#endif // WINDOW_H
