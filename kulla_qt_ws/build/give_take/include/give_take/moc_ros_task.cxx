/****************************************************************************
** Meta object code from reading C++ file 'ros_task.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/give_take/include/give_take/ros_task.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ros_task.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_give_take__ros_task[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   34,   34,   34, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_give_take__ros_task[] = {
    "give_take::ros_task\0give_one_ui()\0\0"
};

void give_take::ros_task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ros_task *_t = static_cast<ros_task *>(_o);
        switch (_id) {
        case 0: _t->give_one_ui(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData give_take::ros_task::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject give_take::ros_task::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_give_take__ros_task,
      qt_meta_data_give_take__ros_task, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &give_take::ros_task::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *give_take::ros_task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *give_take::ros_task::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_give_take__ros_task))
        return static_cast<void*>(const_cast< ros_task*>(this));
    return QThread::qt_metacast(_clname);
}

int give_take::ros_task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void give_take::ros_task::give_one_ui()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
