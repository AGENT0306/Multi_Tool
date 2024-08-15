/****************************************************************************
** Meta object code from reading C++ file 'calc.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../calc.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASScalcENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASScalcENDCLASS = QtMocHelpers::stringData(
    "calc",
    "digit_pressed",
    "",
    "on_pushButton_dot_released",
    "clear_pressed",
    "unary_operation_pressed",
    "equals_pressed",
    "operator_pressed",
    "text_enter",
    "on_goBack_released"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScalcENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[5];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[14];
    char stringdata5[24];
    char stringdata6[15];
    char stringdata7[17];
    char stringdata8[11];
    char stringdata9[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScalcENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScalcENDCLASS_t qt_meta_stringdata_CLASScalcENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "calc"
        QT_MOC_LITERAL(5, 13),  // "digit_pressed"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 26),  // "on_pushButton_dot_released"
        QT_MOC_LITERAL(47, 13),  // "clear_pressed"
        QT_MOC_LITERAL(61, 23),  // "unary_operation_pressed"
        QT_MOC_LITERAL(85, 14),  // "equals_pressed"
        QT_MOC_LITERAL(100, 16),  // "operator_pressed"
        QT_MOC_LITERAL(117, 10),  // "text_enter"
        QT_MOC_LITERAL(128, 18)   // "on_goBack_released"
    },
    "calc",
    "digit_pressed",
    "",
    "on_pushButton_dot_released",
    "clear_pressed",
    "unary_operation_pressed",
    "equals_pressed",
    "operator_pressed",
    "text_enter",
    "on_goBack_released"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScalcENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject calc::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASScalcENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScalcENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScalcENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<calc, std::true_type>,
        // method 'digit_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_dot_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clear_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'unary_operation_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'equals_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'operator_pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'text_enter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_goBack_released'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void calc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<calc *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->digit_pressed(); break;
        case 1: _t->on_pushButton_dot_released(); break;
        case 2: _t->clear_pressed(); break;
        case 3: _t->unary_operation_pressed(); break;
        case 4: _t->equals_pressed(); break;
        case 5: _t->operator_pressed(); break;
        case 6: _t->text_enter(); break;
        case 7: _t->on_goBack_released(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *calc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *calc::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScalcENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int calc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
