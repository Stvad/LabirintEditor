/****************************************************************************
** Meta object code from reading C++ file 'ChangeBoxDialog.h'
**
** Created: Fri Nov 13 20:18:07 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ChangeBoxDialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChangeBoxDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ChangeBoxDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,
      35,   29,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ChangeBoxDialog[] = {
    "ChangeBoxDialog\0\0slChngBox()\0index\0"
    "update(int)\0"
};

const QMetaObject ChangeBoxDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ChangeBoxDialog,
      qt_meta_data_ChangeBoxDialog, 0 }
};

const QMetaObject *ChangeBoxDialog::metaObject() const
{
    return &staticMetaObject;
}

void *ChangeBoxDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ChangeBoxDialog))
        return static_cast<void*>(const_cast< ChangeBoxDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ChangeBoxDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: slChngBox(); break;
        case 1: update((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
