/****************************************************************************
** Meta object code from reading C++ file 'ShapesWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ShapesWidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShapesWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_demo__ishapes__ShapesWidget[] = {

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
      29,   28,   28,   28, 0x0a,
      56,   50,   28,   28, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_demo__ishapes__ShapesWidget[] = {
    "demo::ishapes::ShapesWidget\0\0"
    "nextAnimationFrame()\0shape\0"
    "addShape(Shape::ref_type)\0"
};

void demo::ishapes::ShapesWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ShapesWidget *_t = static_cast<ShapesWidget *>(_o);
        switch (_id) {
        case 0: _t->nextAnimationFrame(); break;
        case 1: _t->addShape((*reinterpret_cast< Shape::ref_type(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData demo::ishapes::ShapesWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject demo::ishapes::ShapesWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_demo__ishapes__ShapesWidget,
      qt_meta_data_demo__ishapes__ShapesWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &demo::ishapes::ShapesWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *demo::ishapes::ShapesWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *demo::ishapes::ShapesWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_demo__ishapes__ShapesWidget))
        return static_cast<void*>(const_cast< ShapesWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int demo::ishapes::ShapesWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
