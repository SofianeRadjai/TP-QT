#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include <QPushButton>


QT_BEGIN_NAMESPACE
class QLineEdit;
QT_END_NAMESPACE

//! [0]
class Window : public QWidget
{
Q_OBJECT

public:

     Window(QWidget *parent = nullptr);
     void echoChanged(int);
     void echoChanged2(int);

     QPushButton *B0= new QPushButton("0");
     QPushButton *B1= new QPushButton("1");
     QPushButton *B2= new QPushButton("2");
     QPushButton *B3= new QPushButton("3");
     QPushButton *B4= new QPushButton("4");
     QPushButton *B5= new QPushButton("5");
     QPushButton *B6= new QPushButton("6");
     QPushButton *B7= new QPushButton("7");
     QPushButton *B8= new QPushButton("8");
     QPushButton *B9= new QPushButton("9");


public slots:

     void bouton();

private:

     QLineEdit *echoLineEdit;
     QLineEdit *echoLineEdit2;

};
//! [0]

#endif
