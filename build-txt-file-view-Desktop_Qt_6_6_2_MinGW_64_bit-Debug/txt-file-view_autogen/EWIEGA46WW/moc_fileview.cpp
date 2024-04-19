/****************************************************************************
** Meta object code from reading C++ file 'fileview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../txt-file-view/fileview.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileview.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFileViewENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSFileViewENDCLASS = QtMocHelpers::stringData(
    "FileView",
    "displayContents",
    "",
    "fileName",
    "createList",
    "initializeFileListWidget",
    "onDisplayContents",
    "testList",
    "path",
    "recursive",
    "testModify",
    "QDir",
    "root",
    "on_fileList_clicked",
    "QModelIndex",
    "index"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFileViewENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[9];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[11];
    char stringdata5[25];
    char stringdata6[18];
    char stringdata7[9];
    char stringdata8[5];
    char stringdata9[10];
    char stringdata10[11];
    char stringdata11[5];
    char stringdata12[5];
    char stringdata13[20];
    char stringdata14[12];
    char stringdata15[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFileViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFileViewENDCLASS_t qt_meta_stringdata_CLASSFileViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "FileView"
        QT_MOC_LITERAL(9, 15),  // "displayContents"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 8),  // "fileName"
        QT_MOC_LITERAL(35, 10),  // "createList"
        QT_MOC_LITERAL(46, 24),  // "initializeFileListWidget"
        QT_MOC_LITERAL(71, 17),  // "onDisplayContents"
        QT_MOC_LITERAL(89, 8),  // "testList"
        QT_MOC_LITERAL(98, 4),  // "path"
        QT_MOC_LITERAL(103, 9),  // "recursive"
        QT_MOC_LITERAL(113, 10),  // "testModify"
        QT_MOC_LITERAL(124, 4),  // "QDir"
        QT_MOC_LITERAL(129, 4),  // "root"
        QT_MOC_LITERAL(134, 19),  // "on_fileList_clicked"
        QT_MOC_LITERAL(154, 11),  // "QModelIndex"
        QT_MOC_LITERAL(166, 5)   // "index"
    },
    "FileView",
    "displayContents",
    "",
    "fileName",
    "createList",
    "initializeFileListWidget",
    "onDisplayContents",
    "testList",
    "path",
    "recursive",
    "testModify",
    "QDir",
    "root",
    "on_fileList_clicked",
    "QModelIndex",
    "index"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFileViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   65,    2, 0x0a,    3 /* Public */,
       5,    0,   66,    2, 0x0a,    4 /* Public */,
       6,    1,   67,    2, 0x0a,    5 /* Public */,
       7,    2,   70,    2, 0x0a,    7 /* Public */,
       7,    1,   75,    2, 0x2a,   10 /* Public | MethodCloned */,
      10,    1,   78,    2, 0x0a,   12 /* Public */,
      13,    1,   81,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    8,    9,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject FileView::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSFileViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFileViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFileViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileView, std::true_type>,
        // method 'displayContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'createList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initializeFileListWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisplayContents'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'testList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'testList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'testModify'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QDir, std::false_type>,
        // method 'on_fileList_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void FileView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->displayContents((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->createList(); break;
        case 2: _t->initializeFileListWidget(); break;
        case 3: _t->onDisplayContents((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->testList((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 5: _t->testList((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->testModify((*reinterpret_cast< std::add_pointer_t<QDir>>(_a[1]))); break;
        case 7: _t->on_fileList_clicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileView::*)(QString );
            if (_t _q_method = &FileView::displayContents; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *FileView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFileViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FileView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void FileView::displayContents(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
