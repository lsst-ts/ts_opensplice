/****************************************************************************
** demo::ishapes::ShapesWidget meta object code from reading C++ file 'ShapesWidget.hpp'
**
** Created: Wed Jun 21 13:35:21 2017
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ShapesWidget.hpp"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *demo::ishapes::ShapesWidget::className() const
{
    return "demo::ishapes::ShapesWidget";
}

QMetaObject *demo::ishapes::ShapesWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_demo__ishapes__ShapesWidget( "demo::ishapes::ShapesWidget", &demo::ishapes::ShapesWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString demo::ishapes::ShapesWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "demo::ishapes::ShapesWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString demo::ishapes::ShapesWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "demo::ishapes::ShapesWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* demo::ishapes::ShapesWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"nextAnimationFrame", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "shape", &static_QUType_ptr, "Shape::ref_type", QUParameter::In }
    };
    static const QUMethod slot_1 = {"addShape", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "nextAnimationFrame()", &slot_0, QMetaData::Public },
	{ "addShape(Shape::ref_type)", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"demo::ishapes::ShapesWidget", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_demo__ishapes__ShapesWidget.setMetaObject( metaObj );
    return metaObj;
}

void* demo::ishapes::ShapesWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "demo::ishapes::ShapesWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool demo::ishapes::ShapesWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: nextAnimationFrame(); break;
    case 1: addShape((Shape::ref_type)(*((Shape::ref_type*)static_QUType_ptr.get(_o+1)))); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool demo::ishapes::ShapesWidget::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool demo::ishapes::ShapesWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool demo::ishapes::ShapesWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
