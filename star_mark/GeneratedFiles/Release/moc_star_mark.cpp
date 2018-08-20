/****************************************************************************
** Meta object code from reading C++ file 'star_mark.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../star_mark.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'star_mark.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Star_mark[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   10,   11,   10, 0x08,
      23,   10,   11,   10, 0x08,
      34,   10,   11,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Star_mark[] = {
    "Star_mark\0\0int\0onAdd()\0onRemove()\0"
    "onFilterChanged()\0"
};

void Star_mark::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Star_mark *_t = static_cast<Star_mark *>(_o);
        switch (_id) {
        case 0: { int _r = _t->onAdd();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->onRemove();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: { int _r = _t->onFilterChanged();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Star_mark::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Star_mark::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Star_mark,
      qt_meta_data_Star_mark, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Star_mark::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Star_mark::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Star_mark::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Star_mark))
        return static_cast<void*>(const_cast< Star_mark*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Star_mark::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
