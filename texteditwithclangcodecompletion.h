#ifndef TEXTEDITWITHCLANGCODECOMPLETION_H
#define TEXTEDITWITHCLANGCODECOMPLETION_H

#include <QTextEdit>

#include <clang-c/Index.h>

class QCompleter;

class TextEditWithClangCodeCompletion : public QTextEdit
{
    Q_OBJECT
public:
    TextEditWithClangCodeCompletion(QWidget *parent = 0);
    virtual ~TextEditWithClangCodeCompletion() { }
protected:
    virtual void keyPressEvent(QKeyEvent *e);
    virtual void focusInEvent(QFocusEvent *e);
private:
    QCompleter *m_CompleterPopup;

    CXIndex m_ClangIndex;

    void populateCompleterPopupViaClangCodeComplete(const QString &token);
private slots:
    void insertCompletion(const QString &completion);
};

#endif // TEXTEDITWITHCLANGCODECOMPLETION_H
