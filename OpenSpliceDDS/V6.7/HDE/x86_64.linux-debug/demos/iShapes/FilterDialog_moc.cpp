/****************************************************************************
** demo::ishapes::FilterDialog meta object code from reading C++ file 'FilterDialog.hpp'
**
** Created: Wed Jun 21 13:35:21 2017
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "FilterDialog.hpp"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *demo::ishapes::FilterDialog::className() const
{
    return "demo::ishapes::FilterDialog";
}

QMetaObject *demo::ishapes::FilterDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_demo__ishapes__FilterDialog( "demo::ishapes::FilterDialog", &demo::ishapes::FilterDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString demo::ishapes::FilterDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "demo::ishapes::FilterDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString demo::ishapes::FilterDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "demo::ishapes::FilterDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* demo::ishapes::FilterDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"accept", 0, 0 };
    static const QUMethod slot_1 = {"reject", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"updateX0", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"updateY0", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "w", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"updateX1", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "h", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"updateY1", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"updateFilterStatus", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_7 = {"isEnabled", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_QVariant, "\x08", QUParameter::Out }
    };
    static const QUMethod slot_8 = {"getFilterBounds", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_9 = {"filterOutside", 1, param_slot_9 };
    static const QMetaData slot_tbl[] = {
	{ "accept()", &slot_0, QMetaData::Public },
	{ "reject()", &slot_1, QMetaData::Public },
	{ "updateX0(int)", &slot_2, QMetaData::Public },
	{ "updateY0(int)", &slot_3, QMetaData::Public },
	{ "updateX1(int)", &slot_4, QMetaData::Public },
	{ "updateY1(int)", &slot_5, QMetaData::Public },
	{ "updateFilterStatus(bool)", &slot_6, QMetaData::Public },
	{ "isEnabled()", &slot_7, QMetaData::Public },
	{ "getFilterBounds()", &slot_8, QMetaData::Public },
	{ "filterOutside()", &slot_9, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"demo::ishapes::FilterDialog", parentObject,
	slot_tbl, 10,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_demo__ishapes__FilterDialog.setMetaObject( metaObj );
    return metaObj;
}

void* demo::ishapes::FilterDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "demo::ishapes::FilterDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool demo::ishapes::FilterDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: accept(); break;
    case 1: reject(); break;
    case 2: updateX0((int)static_QUType_int.get(_o+1)); break;
    case 3: updateY0((int)static_QUType_int.get(_o+1)); break;
    case 4: updateX1((int)static_QUType_int.get(_o+1)); break;
    case 5: updateY1((int)static_QUType_int.get(_o+1)); break;
    case 6: updateFilterStatus((bool)static_QUType_bool.get(_o+1)); break;
    case 7: static_QUType_bool.set(_o,isEnabled()); break;
    case 8: static_QUType_QVariant.set(_o,QVariant(getFilterBounds())); break;
    case 9: static_QUType_bool.set(_o,filterOutside()); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool demo::ishapes::FilterDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool demo::ishapes::FilterDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool demo::ishapes::FilterDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
