/****************************************************************************
** Meta object code from reading C++ file 'profildialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../logiComptaProject/profildialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profildialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
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
struct qt_meta_stringdata_CLASSprofilDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSprofilDialogENDCLASS = QtMocHelpers::stringData(
    "profilDialog",
    "logoutRequested",
    "",
    "on_cancelButton_clicked",
    "on_makeChangeButton_clicked",
    "on_discoButton_clicked",
    "on_resetButton_clicked",
    "on_changeInfoButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSprofilDialogENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[28];
    char stringdata5[23];
    char stringdata6[23];
    char stringdata7[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSprofilDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSprofilDialogENDCLASS_t qt_meta_stringdata_CLASSprofilDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "profilDialog"
        QT_MOC_LITERAL(13, 15),  // "logoutRequested"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 23),  // "on_cancelButton_clicked"
        QT_MOC_LITERAL(54, 27),  // "on_makeChangeButton_clicked"
        QT_MOC_LITERAL(82, 22),  // "on_discoButton_clicked"
        QT_MOC_LITERAL(105, 22),  // "on_resetButton_clicked"
        QT_MOC_LITERAL(128, 27)   // "on_changeInfoButton_clicked"
    },
    "profilDialog",
    "logoutRequested",
    "",
    "on_cancelButton_clicked",
    "on_makeChangeButton_clicked",
    "on_discoButton_clicked",
    "on_resetButton_clicked",
    "on_changeInfoButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSprofilDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject profilDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSprofilDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSprofilDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSprofilDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<profilDialog, std::true_type>,
        // method 'logoutRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancelButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_makeChangeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_discoButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_resetButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_changeInfoButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void profilDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<profilDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logoutRequested(); break;
        case 1: _t->on_cancelButton_clicked(); break;
        case 2: _t->on_makeChangeButton_clicked(); break;
        case 3: _t->on_discoButton_clicked(); break;
        case 4: _t->on_resetButton_clicked(); break;
        case 5: _t->on_changeInfoButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (profilDialog::*)();
            if (_t _q_method = &profilDialog::logoutRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *profilDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *profilDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSprofilDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int profilDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void profilDialog::logoutRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
