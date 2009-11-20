/****************************************************************************
** Meta object code from reading C++ file 'addplaindialog.h'
**
** Created: Fri Nov 20 12:46:13 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addplaindialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addplaindialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddPlainDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_AddPlainDialog[] = {
    "AddPlainDialog\0"
};

const QMetaObject AddPlainDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddPlainDialog,
      qt_meta_data_AddPlainDialog, 0 }
};

const QMetaObject *AddPlainDialog::metaObject() const
{
    return &staticMetaObject;
}

void *AddPlainDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddPlainDialog))
        return static_cast<void*>(const_cast< AddPlainDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddPlainDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
