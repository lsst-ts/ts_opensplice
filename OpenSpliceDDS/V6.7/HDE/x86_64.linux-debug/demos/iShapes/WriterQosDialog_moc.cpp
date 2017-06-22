/****************************************************************************
** demo::ishapes::WriterQosDialog meta object code from reading C++ file 'WriterQosDialog.hpp'
**
** Created: Wed Jun 21 13:35:21 2017
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "WriterQosDialog.hpp"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *demo::ishapes::WriterQosDialog::className() const
{
    return "demo::ishapes::WriterQosDialog";
}

QMetaObject *demo::ishapes::WriterQosDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_demo__ishapes__WriterQosDialog( "demo::ishapes::WriterQosDialog", &demo::ishapes::WriterQosDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString demo::ishapes::WriterQosDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "demo::ishapes::WriterQosDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString demo::ishapes::WriterQosDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "demo::ishapes::WriterQosDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* demo::ishapes::WriterQosDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"accept", 0, 0 };
    static const QUMethod slot_1 = {"reject", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "accept()", &slot_0, QMetaData::Public },
	{ "reject()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"demo::ishapes::WriterQosDialog", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_demo__ishapes__WriterQosDialog.setMetaObject( metaObj );
    return metaObj;
}

void* demo::ishapes::WriterQosDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "demo::ishapes::WriterQosDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool demo::ishapes::WriterQosDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: accept(); break;
    case 1: reject(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool demo::ishapes::WriterQosDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool demo::ishapes::WriterQosDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool demo::ishapes::WriterQosDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
