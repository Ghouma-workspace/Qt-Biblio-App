/****************************************************************************
** Meta object code from reading C++ file 'abonnedialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../abonnedialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'abonnedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AbonneDialog_t {
    QByteArrayData data[14];
    char stringdata[344];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_AbonneDialog_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_AbonneDialog_t qt_meta_stringdata_AbonneDialog = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 23),
QT_MOC_LITERAL(2, 37, 0),
QT_MOC_LITERAL(3, 38, 21),
QT_MOC_LITERAL(4, 60, 23),
QT_MOC_LITERAL(5, 84, 23),
QT_MOC_LITERAL(6, 108, 24),
QT_MOC_LITERAL(7, 133, 24),
QT_MOC_LITERAL(8, 158, 39),
QT_MOC_LITERAL(9, 198, 4),
QT_MOC_LITERAL(10, 203, 40),
QT_MOC_LITERAL(11, 244, 24),
QT_MOC_LITERAL(12, 269, 34),
QT_MOC_LITERAL(13, 304, 38)
    },
    "AbonneDialog\0on_pushButton_2_clicked\0"
    "\0on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0"
    "on_pushButton_24_clicked\0"
    "on_pushButton_23_clicked\0"
    "on_comboBox_titre_3_currentIndexChanged\0"
    "arg1\0on_comboBox_auteur_3_currentIndexChanged\0"
    "on_pushButton_31_clicked\0"
    "on_comboBox_re_currentIndexChanged\0"
    "on_comboBox_non_re_currentIndexChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AbonneDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08,
       3,    0,   70,    2, 0x08,
       4,    0,   71,    2, 0x08,
       5,    0,   72,    2, 0x08,
       6,    0,   73,    2, 0x08,
       7,    0,   74,    2, 0x08,
       8,    1,   75,    2, 0x08,
      10,    1,   78,    2, 0x08,
      11,    0,   81,    2, 0x08,
      12,    1,   82,    2, 0x08,
      13,    1,   85,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

void AbonneDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AbonneDialog *_t = static_cast<AbonneDialog *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_3_clicked(); break;
        case 3: _t->on_pushButton_4_clicked(); break;
        case 4: _t->on_pushButton_24_clicked(); break;
        case 5: _t->on_pushButton_23_clicked(); break;
        case 6: _t->on_comboBox_titre_3_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_auteur_3_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_31_clicked(); break;
        case 9: _t->on_comboBox_re_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_comboBox_non_re_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AbonneDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AbonneDialog.data,
      qt_meta_data_AbonneDialog,  qt_static_metacall, 0, 0}
};


const QMetaObject *AbonneDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AbonneDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbonneDialog.stringdata))
        return static_cast<void*>(const_cast< AbonneDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int AbonneDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
