/****************************************************************************
** Meta object code from reading C++ file 'colorgradientinterpolator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.11)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/code/colorgradientinterpolator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'colorgradientinterpolator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.11. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorGradientInterpolator_t {
    QByteArrayData data[8];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorGradientInterpolator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorGradientInterpolator_t qt_meta_stringdata_ColorGradientInterpolator = {
    {
QT_MOC_LITERAL(0, 0, 25), // "ColorGradientInterpolator"
QT_MOC_LITERAL(1, 26, 15), // "progressChanged"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 20), // "gradientStopsChanged"
QT_MOC_LITERAL(4, 64, 12), // "colorChanged"
QT_MOC_LITERAL(5, 77, 5), // "color"
QT_MOC_LITERAL(6, 83, 8), // "progress"
QT_MOC_LITERAL(7, 92, 13) // "gradientStops"

    },
    "ColorGradientInterpolator\0progressChanged\0"
    "\0gradientStopsChanged\0colorChanged\0"
    "color\0progress\0gradientStops"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorGradientInterpolator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QColor, 0x00495001,
       6, QMetaType::Double, 0x00495103,
       7, QMetaType::QVariantList, 0x00495103,

 // properties: notify_signal_id
       2,
       0,
       1,

       0        // eod
};

void ColorGradientInterpolator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ColorGradientInterpolator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->progressChanged(); break;
        case 1: _t->gradientStopsChanged(); break;
        case 2: _t->colorChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ColorGradientInterpolator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorGradientInterpolator::progressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ColorGradientInterpolator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorGradientInterpolator::gradientStopsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ColorGradientInterpolator::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ColorGradientInterpolator::colorChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ColorGradientInterpolator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->progress(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->gradientStops(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ColorGradientInterpolator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setProgress(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setGradientStops(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ColorGradientInterpolator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ColorGradientInterpolator.data,
    qt_meta_data_ColorGradientInterpolator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ColorGradientInterpolator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorGradientInterpolator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ColorGradientInterpolator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ColorGradientInterpolator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ColorGradientInterpolator::progressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ColorGradientInterpolator::gradientStopsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ColorGradientInterpolator::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
