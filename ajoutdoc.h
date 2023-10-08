#ifndef AJOUTDOC_H
#define AJOUTDOC_H

#include <QDialog>

namespace Ui {
class AjoutDoc;
}

class AjoutDoc : public QDialog
{
    Q_OBJECT

public:
    explicit AjoutDoc(QWidget *parent = 0);
    ~AjoutDoc();

private slots:
    void on_pushButton_clicked();

private:
    Ui::AjoutDoc *ui;
};

#endif // AJOUTDOC_H
