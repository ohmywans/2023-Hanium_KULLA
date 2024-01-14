/****************************************************************************
** Meta object code from reading C++ file 'give_two.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/give_two/include/give_two/give_two.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'give_two.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_give_two__give_two[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   30,   30,   30, 0x0a,
      31,   30,   30,   30, 0x0a,
      41,   30,   30,   30, 0x0a,
      69,   30,   30,   30, 0x0a,
      95,   30,   30,   30, 0x0a,
     118,   30,   30,   30, 0x0a,
     141,   30,   30,   30, 0x0a,
     164,   30,   30,   30, 0x0a,
     187,   30,   30,   30, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_give_two__give_two[] = {
    "give_two::give_two\0close_w1()\0\0open_w1()\0"
    "on_Button_unlock1_clicked()\0"
    "on_Button_lock1_clicked()\0"
    "on_Button_p1_clicked()\0on_Button_p2_clicked()\0"
    "on_Button_p3_clicked()\0on_Button_p4_clicked()\0"
    "on_Button_back_clicked()\0"
};

void give_two::give_two::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        give_two *_t = static_cast<give_two *>(_o);
        switch (_id) {
        case 0: _t->close_w1(); break;
        case 1: _t->open_w1(); break;
        case 2: _t->on_Button_unlock1_clicked(); break;
        case 3: _t->on_Button_lock1_clicked(); break;
        case 4: _t->on_Button_p1_clicked(); break;
        case 5: _t->on_Button_p2_clicked(); break;
        case 6: _t->on_Button_p3_clicked(); break;
        case 7: _t->on_Button_p4_clicked(); break;
        case 8: _t->on_Button_back_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData give_two::give_two::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject give_two::give_two::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_give_two__give_two,
      qt_meta_data_give_two__give_two, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &give_two::give_two::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *give_two::give_two::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *give_two::give_two::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_give_two__give_two))
        return static_cast<void*>(const_cast< give_two*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int give_two::give_two::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
