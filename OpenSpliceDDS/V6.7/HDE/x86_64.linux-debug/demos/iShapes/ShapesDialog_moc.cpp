/****************************************************************************
** demo::ishapes::ShapesDialog meta object code from reading C++ file 'ShapesDialog.hpp'
**
** Created: Wed Jun 21 13:35:21 2017
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "ShapesDialog.hpp"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8b. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *demo::ishapes::ShapesDialog::className() const
{
    return "demo::ishapes::ShapesDialog";
}

QMetaObject *demo::ishapes::ShapesDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_demo__ishapes__ShapesDialog( "demo::ishapes::ShapesDialog", &demo::ishapes::ShapesDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString demo::ishapes::ShapesDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "demo::ishapes::ShapesDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString demo::ishapes::ShapesDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "demo::ishapes::ShapesDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* demo::ishapes::ShapesDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"onPublishButtonClicked", 0, 0 };
    static const QUMethod slot_1 = {"onSubscribeButtonClicked", 0, 0 };
    static const QUMethod slot_2 = {"onReaderQosButtonClicked", 0, 0 };
    static const QUMethod slot_3 = {"onWriterQosButtonClicked", 0, 0 };
    static const QUMethod slot_4 = {"onFilterButtonClicked", 0, 0 };
    static const QUMethod slot_5 = {"CreatePublisher", 0, 0 };
    static const QUMethod slot_6 = {"CreateSubscriber", 0, 0 };
    static const QUMethod slot_7 = {"CreatePublisherMMQos", 0, 0 };
    static const QUMethod slot_8 = {"CreateSubscriberMMQos", 0, 0 };
    static const QUMethod slot_9 = {"logShape", 0, 0 };
    static const QUMethod slot_10 = {"logDDSShape", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "onPublishButtonClicked()", &slot_0, QMetaData::Public },
	{ "onSubscribeButtonClicked()", &slot_1, QMetaData::Public },
	{ "onReaderQosButtonClicked()", &slot_2, QMetaData::Public },
	{ "onWriterQosButtonClicked()", &slot_3, QMetaData::Public },
	{ "onFilterButtonClicked()", &slot_4, QMetaData::Public },
	{ "CreatePublisher()", &slot_5, QMetaData::Private },
	{ "CreateSubscriber()", &slot_6, QMetaData::Private },
	{ "CreatePublisherMMQos()", &slot_7, QMetaData::Private },
	{ "CreateSubscriberMMQos()", &slot_8, QMetaData::Private },
	{ "logShape()", &slot_9, QMetaData::Private },
	{ "logDDSShape()", &slot_10, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"demo::ishapes::ShapesDialog", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_demo__ishapes__ShapesDialog.setMetaObject( metaObj );
    return metaObj;
}

void* demo::ishapes::ShapesDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "demo::ishapes::ShapesDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool demo::ishapes::ShapesDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: onPublishButtonClicked(); break;
    case 1: onSubscribeButtonClicked(); break;
    case 2: onReaderQosButtonClicked(); break;
    case 3: onWriterQosButtonClicked(); break;
    case 4: onFilterButtonClicked(); break;
    case 5: CreatePublisher(); break;
    case 6: CreateSubscriber(); break;
    case 7: CreatePublisherMMQos(); break;
    case 8: CreateSubscriberMMQos(); break;
    case 9: logShape(); break;
    case 10: logDDSShape(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool demo::ishapes::ShapesDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool demo::ishapes::ShapesDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool demo::ishapes::ShapesDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
