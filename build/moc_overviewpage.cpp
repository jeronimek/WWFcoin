/****************************************************************************
** Meta object code from reading C++ file 'overviewpage.h'
**
** Created: Fri May 30 16:09:35 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/overviewpage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'overviewpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OverviewPage[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      20,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      95,   52,   13,   13, 0x0a,
     134,  128,   13,   13, 0x0a,
     158,   13,   13,   13, 0x08,
     178,   14,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_OverviewPage[] = {
    "OverviewPage\0\0index\0transactionClicked(QModelIndex)\0"
    "balance,unconfirmedBalance,immatureBalance\0"
    "setBalance(qint64,qint64,qint64)\0count\0"
    "setNumTransactions(int)\0updateDisplayUnit()\0"
    "handleTransactionClicked(QModelIndex)\0"
};

void OverviewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OverviewPage *_t = static_cast<OverviewPage *>(_o);
        switch (_id) {
        case 0: _t->transactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->setBalance((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])),(*reinterpret_cast< qint64(*)>(_a[3]))); break;
        case 2: _t->setNumTransactions((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->updateDisplayUnit(); break;
        case 4: _t->handleTransactionClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData OverviewPage::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject OverviewPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OverviewPage,
      qt_meta_data_OverviewPage, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OverviewPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OverviewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OverviewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OverviewPage))
        return static_cast<void*>(const_cast< OverviewPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int OverviewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OverviewPage::transactionClicked(const QModelIndex & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
