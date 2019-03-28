/********************************************************************************
** Form generated from reading UI file 'roomh13688.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ROOMH13688_H
#define ROOMH13688_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SelectRoomDialog
{
public:
	QDialogButtonBox *buttonBox;
	QComboBox *comboBox;
	QLabel *label;

	void setupUi(QDialog *SelectRoomDialog)
	{
		if (SelectRoomDialog->objectName().isEmpty())
			SelectRoomDialog->setObjectName(QStringLiteral("SelectRoomDialog"));
		SelectRoomDialog->resize(421, 187);
		buttonBox = new QDialogButtonBox(SelectRoomDialog);
		buttonBox->setObjectName(QStringLiteral("buttonBox"));
		buttonBox->setGeometry(QRect(40, 120, 341, 32));
		buttonBox->setOrientation(Qt::Horizontal);
		buttonBox->setStandardButtons(QDialogButtonBox::Cancel | QDialogButtonBox::Ok);
		comboBox = new QComboBox(SelectRoomDialog);
		comboBox->setObjectName(QStringLiteral("comboBox"));
		comboBox->setGeometry(QRect(120, 60, 201, 21));
		label = new QLabel(SelectRoomDialog);
		label->setObjectName(QStringLiteral("label"));
		label->setGeometry(QRect(40, 60, 71, 16));

		retranslateUi(SelectRoomDialog);
		QObject::connect(buttonBox, SIGNAL(accepted()), SelectRoomDialog, SLOT(accept()));
		QObject::connect(buttonBox, SIGNAL(rejected()), SelectRoomDialog, SLOT(reject()));

		QMetaObject::connectSlotsByName(SelectRoomDialog);
	} // setupUi

	void retranslateUi(QDialog *SelectRoomDialog)
	{
		SelectRoomDialog->setWindowTitle(QApplication::translate("SelectRoomDialog", "room.title", Q_NULLPTR));
		SelectRoomDialog->setWindowFlags(SelectRoomDialog->windowFlags()&~Qt::WindowContextHelpButtonHint);

		label->setText(QApplication::translate("SelectRoomDialog", "select.room", Q_NULLPTR));
	} // retranslateUi

};

namespace Ui {
	class SelectRoomDialog : public Ui_SelectRoomDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // ROOMH13688_H
