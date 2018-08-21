/****************************************************************************
** Meta object code from reading C++ file 'ReaderQosDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ReaderQosDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ReaderQosDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_demo__ishapes__ReaderQosDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x0a,
      41,   31,   31,   31, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_demo__ishapes__ReaderQosDialog[] = {
    "demo::ishapes::ReaderQosDialog\0\0"
    "accept()\0reject()\0"
};

void demo::ishapes::ReaderQosDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ReaderQosDialog *_t = static_cast<ReaderQosDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData demo::ishapes::ReaderQosDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject demo::ishapes::ReaderQosDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_demo__ishapes__ReaderQosDialog,
      qt_meta_data_demo__ishapes__ReaderQosDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &demo::ishapes::ReaderQosDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *demo::ishapes::ReaderQosDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *demo::ishapes::ReaderQosDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_demo__ishapes__ReaderQosDialog))
        return static_cast<void*>(const_cast< ReaderQosDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int demo::ishapes::ReaderQosDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
