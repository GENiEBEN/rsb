/****************************************************************************
** Meta object code from reading C++ file 'picker.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../picker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'picker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_picker_t {
    QByteArrayData data[12];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_picker_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_picker_t qt_meta_stringdata_picker = {
    {
QT_MOC_LITERAL(0, 0, 6), // "picker"
QT_MOC_LITERAL(1, 7, 15), // "benchmarkChosen"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 20), // "on_GUI_OKBtn_clicked"
QT_MOC_LITERAL(4, 45, 36), // "on_GUI_BenchType_currentIndex..."
QT_MOC_LITERAL(5, 82, 5), // "index"
QT_MOC_LITERAL(6, 88, 36), // "on_GUI_BenchName_currentIndex..."
QT_MOC_LITERAL(7, 125, 4), // "arg1"
QT_MOC_LITERAL(8, 130, 24), // "on_GUI_CancelBtn_clicked"
QT_MOC_LITERAL(9, 155, 31), // "on_GUI_LODDial_AMD_valueChanged"
QT_MOC_LITERAL(10, 187, 5), // "value"
QT_MOC_LITERAL(11, 193, 38) // "on_GUI_BenchPreset_currentInd..."

    },
    "picker\0benchmarkChosen\0\0on_GUI_OKBtn_clicked\0"
    "on_GUI_BenchType_currentIndexChanged\0"
    "index\0on_GUI_BenchName_currentIndexChanged\0"
    "arg1\0on_GUI_CancelBtn_clicked\0"
    "on_GUI_LODDial_AMD_valueChanged\0value\0"
    "on_GUI_BenchPreset_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_picker[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   54,    2, 0x08 /* Private */,
       4,    1,   55,    2, 0x08 /* Private */,
       6,    1,   58,    2, 0x08 /* Private */,
       8,    0,   61,    2, 0x08 /* Private */,
       9,    1,   62,    2, 0x08 /* Private */,
      11,    1,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void picker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        picker *_t = static_cast<picker *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->benchmarkChosen((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->on_GUI_OKBtn_clicked(); break;
        case 2: _t->on_GUI_BenchType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_GUI_BenchName_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_GUI_CancelBtn_clicked(); break;
        case 5: _t->on_GUI_LODDial_AMD_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_GUI_BenchPreset_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (picker::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&picker::benchmarkChosen)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject picker::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_picker.data,
      qt_meta_data_picker,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *picker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *picker::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_picker.stringdata0))
        return static_cast<void*>(const_cast< picker*>(this));
    return QDialog::qt_metacast(_clname);
}

int picker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void picker::benchmarkChosen(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
