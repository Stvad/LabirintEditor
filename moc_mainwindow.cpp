/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Fri Nov 13 21:28:19 2009
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      28,   11,   11,   11, 0x0a,
      47,   11,   11,   11, 0x0a,
      65,   11,   11,   11, 0x0a,
      89,   11,   11,   11, 0x0a,
     101,   11,   11,   11, 0x0a,
     115,   11,   11,   11, 0x0a,
     123,   11,   11,   11, 0x0a,
     131,   11,   11,   11, 0x0a,
     139,   11,   11,   11, 0x0a,
     148,   11,   11,   11, 0x0a,
     157,   11,   11,   11, 0x0a,
     166,   11,   11,   11, 0x0a,
     176,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0ShowAddBoxDlg()\0"
    "ShowChangeBoxDlg()\0ShowDellNBoxDlg()\0"
    "ShowChangeSettingsDlg()\0DeLastBox()\0"
    "DelAllBoxes()\0setXP()\0setYP()\0setZP()\0"
    "setXYP()\0setYZP()\0setXZP()\0SaveMap()\0"
    "LoadMap()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ShowAddBoxDlg(); break;
        case 1: ShowChangeBoxDlg(); break;
        case 2: ShowDellNBoxDlg(); break;
        case 3: ShowChangeSettingsDlg(); break;
        case 4: DeLastBox(); break;
        case 5: DelAllBoxes(); break;
        case 6: setXP(); break;
        case 7: setYP(); break;
        case 8: setZP(); break;
        case 9: setXYP(); break;
        case 10: setYZP(); break;
        case 11: setXZP(); break;
        case 12: SaveMap(); break;
        case 13: LoadMap(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
