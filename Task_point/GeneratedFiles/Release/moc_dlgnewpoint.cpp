/****************************************************************************
** Meta object code from reading C++ file 'dlgnewpoint.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dlgnewpoint.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dlgnewpoint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DlgNewPoint[] = {

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
      17,   12,   13,   12, 0x08,
      27,   12,   13,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DlgNewPoint[] = {
    "DlgNewPoint\0\0int\0onBtnOK()\0onBtnCancel()\0"
};

void DlgNewPoint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DlgNewPoint *_t = static_cast<DlgNewPoint *>(_o);
        switch (_id) {
        case 0: { int _r = _t->onBtnOK();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->onBtnCancel();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DlgNewPoint::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DlgNewPoint::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DlgNewPoint,
      qt_meta_data_DlgNewPoint, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DlgNewPoint::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DlgNewPoint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DlgNewPoint::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DlgNewPoint))
        return static_cast<void*>(const_cast< DlgNewPoint*>(this));
    return QDialog::qt_metacast(_clname);
}

int DlgNewPoint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
