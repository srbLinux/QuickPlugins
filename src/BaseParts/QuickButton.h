#ifndef QUICKBUTTON_H
#define QUICKBUTTON_H

#include <QObject>
#include <QPainter>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QPushButton>

typedef enum
{
    _normalBtn = 0,
    _enterBtn = 1,
    _pressBtn = 2,
    _nostatusBtn = 3
}BtnStatus;

class QuickButton : public QPushButton
{
    Q_OBJECT
public:
    explicit QuickButton(QWidget* parent = nullptr);
protected:
    void enterEvent(QEvent*);
    void leaveEvent(QEvent*) override;
    void paintEvent(QPaintEvent*) override;
    void mousePressEvent(QMouseEvent*) override;
    void mouseReleaseEvent(QMouseEvent*) override;
public:
    void setText(const QString&);
    QString text() const;
private:
    BtnStatus statu;
    QString BtnText;
    int BtnWidth;
    int BtnHeight;
    bool _mousepress = _nostatusBtn;
public slots:
signals:
    void clicked();
};

#endif // QUICKBUTTON_H
