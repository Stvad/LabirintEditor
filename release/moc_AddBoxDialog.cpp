/****************************************************************************
** Meta object code from reading C++ file 'AddBoxDialog.h'
**
** Created: Wed Nov 18 16:28:34 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AddBoxDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddBoxDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AddBoxDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_AddBoxDialog[] = {
    "AddBoxDialog\0\0slAddBox()\0"
};

const QMetaObject AddBoxDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AddBoxDialog,
      qt_meta_data_AddBoxDialog, 0 }
};

const QMetaObject *AddBoxDialog::metaObject() const
{
    return &staticMetaObject;
}

void *AddBoxDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AddBoxDialog))
        return static_cast<void*>(const_cast< AddBoxDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AddBoxDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slAddBox(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
