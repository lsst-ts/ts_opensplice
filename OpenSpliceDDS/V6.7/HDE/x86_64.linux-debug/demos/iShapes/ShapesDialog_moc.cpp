/****************************************************************************
** Meta object code from reading C++ file 'ShapesDialog.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ShapesDialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShapesDialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_demo__ishapes__ShapesDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      29,   28,   28,   28, 0x0a,
      54,   28,   28,   28, 0x0a,
      81,   28,   28,   28, 0x0a,
     108,   28,   28,   28, 0x0a,
     135,   28,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_demo__ishapes__ShapesDialog[] = {
    "demo::ishapes::ShapesDialog\0\0"
    "onPublishButtonClicked()\0"
    "onSubscribeButtonClicked()\0"
    "onReaderQosButtonClicked()\0"
    "onWriterQosButtonClicked()\0"
    "onFilterButtonClicked()\0"
};

void demo::ishapes::ShapesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShapesDialog *_t = static_cast<ShapesDialog *>(_o);
        switch (_id) {
        case 0: _t->onPublishButtonClicked(); break;
        case 1: _t->onSubscribeButtonClicked(); break;
        case 2: _t->onReaderQosButtonClicked(); break;
        case 3: _t->onWriterQosButtonClicked(); break;
        case 4: _t->onFilterButtonClicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData demo::ishapes::ShapesDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject demo::ishapes::ShapesDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_demo__ishapes__ShapesDialog,
      qt_meta_data_demo__ishapes__ShapesDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &demo::ishapes::ShapesDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *demo::ishapes::ShapesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *demo::ishapes::ShapesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_demo__ishapes__ShapesDialog))
        return static_cast<void*>(const_cast< ShapesDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int demo::ishapes::ShapesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
