#include "logwidget.h"
#include <QScrollBar>

LogWidget::LogWidget(QWidget *parent):QPlainTextEdit(parent)
{
    setReadOnly(true);
    setFrameStyle(QFrame::StyledPanel);
    setStyleSheet("color: black;");
}

void LogWidget::AppendMessage(const QString& message)
{
    appendPlainText(message);
    verticalScrollBar()->setValue(verticalScrollBar()->maximum());
}
