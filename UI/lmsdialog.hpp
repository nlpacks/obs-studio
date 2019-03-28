/********************************************************************************
** Form generated from reading UI file 'lmsp13688.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LMSP13688_H
#define LMSP13688_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
	QDialogButtonBox *buttonBox;
	QLineEdit *lineEdit;
	QLineEdit *lineEdit_2;
	QLabel *label;
	QLabel *label_2;

	void setupUi(QDialog *LoginDialog)
	{
		if (LoginDialog->objectName().isEmpty())
			LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
		LoginDialog->resize(389, 217);
		buttonBox = new QDialogButtonBox(LoginDialog);
		buttonBox->setObjectName(QStringLiteral("buttonBox"));
		buttonBox->setGeometry(QRect(20, 160, 341, 32));
		buttonBox->setLayoutDirection(Qt::LeftToRight);
		buttonBox->setOrientation(Qt::Horizontal);
		buttonBox->setStandardButtons(QDialogButtonBox::Cancel | QDialogButtonBox::Ok);
		lineEdit = new QLineEdit(LoginDialog);
		lineEdit->setObjectName(QStringLiteral("lineEdit"));
		lineEdit->setGeometry(QRect(120, 60, 141, 20));
		lineEdit_2 = new QLineEdit(LoginDialog);
		lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
		lineEdit_2->setGeometry(QRect(120, 100, 141, 20));
		lineEdit_2->setEchoMode(QLineEdit::Password);
		label = new QLabel(LoginDialog);
		label->setObjectName(QStringLiteral("label"));
		label->setGeometry(QRect(50, 60, 54, 12));
		label_2 = new QLabel(LoginDialog);
		label_2->setObjectName(QStringLiteral("label_2"));
		label_2->setGeometry(QRect(50, 100, 54, 12));

		retranslateUi(LoginDialog);
		QObject::connect(buttonBox, SIGNAL(accepted()), LoginDialog, SLOT(accept()));
		QObject::connect(buttonBox, SIGNAL(rejected()), LoginDialog, SLOT(reject()));

		QMetaObject::connectSlotsByName(LoginDialog);
	} // setupUi

	void retranslateUi(QDialog *LoginDialog)
	{
		LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "login.title", Q_NULLPTR));
		LoginDialog->setWindowFlags(LoginDialog->windowFlags()&~Qt::WindowContextHelpButtonHint);
		label->setText(QApplication::translate("LoginDialog", "Username", Q_NULLPTR));
		label_2->setText(QApplication::translate("LoginDialog", "Password", Q_NULLPTR));
	} // retranslateUi

};

namespace Ui {
	class LoginDialog : public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LMSP13688_H
