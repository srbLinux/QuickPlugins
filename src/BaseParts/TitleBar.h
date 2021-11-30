#ifndef TITLEBAR_H
#define TITLEBAR_H

#include <QTimer>
#include <QLabel>
#include <QWidget>
#include <QBoxLayout>
#include <QPushButton>

typedef enum
{
    _maxWin = 0,
    _normalWin = 1
}WindowStatu;

typedef enum
{
    _minNUM = 0,
    _nomalNUM = 1,
    _maxNUM = 2
}ButtonType;

class TitleBar : public QWidget
{
    Q_OBJECT
public:
    explicit TitleBar(QWidget *parent = nullptr);
    virtual ~TitleBar(){};
    void setTitleIcon();
    void setTitleBackground(int r,int b,int g);
protected:
    void InitControl();
    void paintEvent(QPaintEvent*) override;
    void mouseMoveEvent(QMouseEvent*) override;
    void mousePressEvent(QMouseEvent*) override;
    void mouseReleaseEvent(QMouseEvent*) override;
    void mouseDoubleClickEvent(QMouseEvent*) override;
public slots:
    void MinBtnClicked();
    void MaxBtnClicked();
    void CloseBtnClicked();
    void RestartBtnClicked();
private:
    ButtonType BtnType = _minNUM;
    WindowStatu WinStatu = _normalWin;
    QLabel* IconLabel;
    QLabel* ContentLabel;
    QPushButton* MinBtn;
    QPushButton* MaxBtn;
    QPushButton* CloseBtn;
    QPushButton* RestartBtn;
    QHBoxLayout* TitleLayout;
    int TitleColorR;
    int TitleColorG;
    int TitleColorB;
    QString TitleContent;
signals:

};

#endif // TITLEBAR_H
