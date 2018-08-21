/****************************************************************************
** Meta object code from reading C++ file 'FilterDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FilterDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilterDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_demo__ishapes__FilterDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x0a,
      38,   28,   28,   28, 0x0a,
      49,   47,   28,   28, 0x0a,
      65,   63,   28,   28, 0x0a,
      81,   79,   28,   28, 0x0a,
      97,   95,   28,   28, 0x0a,
     114,  111,   28,   28, 0x0a,
     144,   28,  139,   28, 0x0a,
     162,   28,  156,   28, 0x0a,
     180,   28,  139,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_demo__ishapes__FilterDialog[] = {
    "demo::ishapes::FilterDialog\0\0accept()\0"
    "reject()\0x\0updateX0(int)\0y\0updateY0(int)\0"
    "w\0updateX1(int)\0h\0updateY1(int)\0on\0"
    "updateFilterStatus(bool)\0bool\0isEnabled()\0"
    "QRect\0getFilterBounds()\0filterOutside()\0"
};

void demo::ishapes::FilterDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FilterDialog *_t = static_cast<FilterDialog *>(_o);
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->updateX0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateY0((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->updateX1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->updateY1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateFilterStatus((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: { bool _r = _t->isEnabled();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: { QRect _r = _t->getFilterBounds();
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = _r; }  break;
        case 9: { bool _r = _t->filterOutside();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData demo::ishapes::FilterDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject demo::ishapes::FilterDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_demo__ishapes__FilterDialog,
      qt_meta_data_demo__ishapes__FilterDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &demo::ishapes::FilterDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *demo::ishapes::FilterDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *demo::ishapes::FilterDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_demo__ishapes__FilterDialog))
        return static_cast<void*>(const_cast< FilterDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int demo::ishapes::FilterDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
