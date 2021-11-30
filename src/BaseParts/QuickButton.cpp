#include "QuickButton.h"

QuickButton::QuickButton(QWidget* parent) : QPushButton(parent)
{

}

void QuickButton::enterEvent(QEvent *event)
{

}

void QuickButton::leaveEvent(QEvent *event)
{

}

void QuickButton::paintEvent(QPaintEvent *event)
{

}

void QuickButton::mousePressEvent(QMouseEvent *event)
{
    switch (BtnStatus) {
    case _normalBtn:
        {

        }
    }
}

void QuickButton::mouseReleaseEvent(QMouseEvent *event)
{

}
