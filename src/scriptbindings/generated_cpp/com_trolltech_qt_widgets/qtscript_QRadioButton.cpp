#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>
#include <__package_shared.h>

#include <qradiobutton.h>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qradiobutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

#include "qtscriptshell_QRadioButton.h"

static const char * const qtscript_QRadioButton_function_names[] = {
    "QRadioButton"
    // static
    // prototype
    , "minimumSizeHint"
    , "sizeHint"
    , "toString"
};

static const char * const qtscript_QRadioButton_function_signatures[] = {
    "QWidget parent\nString text, QWidget parent"
    // static
    // prototype
    , ""
    , ""
""
};

static const int qtscript_QRadioButton_function_lengths[] = {
    2
    // static
    // prototype
    , 0
    , 0
    , 0
};

static QScriptValue qtscript_QRadioButton_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QRadioButton::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QRadioButton*)
Q_DECLARE_METATYPE(QtScriptShell_QRadioButton*)
Q_DECLARE_METATYPE(QWidget*)
Q_DECLARE_METATYPE(QAbstractButton*)

//
// QRadioButton
//

static QScriptValue qtscript_QRadioButton_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 2;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QRadioButton* _q_self = qscriptvalue_cast<QRadioButton*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QRadioButton.%0(): this object is not a QRadioButton")
            .arg(qtscript_QRadioButton_function_names[_id+1]));
    }

    switch (_id) {
    case 0:
    if (context->argumentCount() == 0) {
        QSize _q_result = _q_self->minimumSizeHint();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 1:
    if (context->argumentCount() == 0) {
        QSize _q_result = _q_self->sizeHint();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 2: {
    QString result = QString::fromLatin1("QRadioButton");
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QRadioButton_throw_ambiguity_error_helper(context,
        qtscript_QRadioButton_function_names[_id+1],
        qtscript_QRadioButton_function_signatures[_id+1]);
}

static QScriptValue qtscript_QRadioButton_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QRadioButton(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QtScriptShell_QRadioButton* _q_cpp_result = new QtScriptShell_QRadioButton();
        QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QRadioButton*)_q_cpp_result, QScriptEngine::AutoOwnership);
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    } else if (context->argumentCount() == 1) {
        if (qscriptvalue_cast<QWidget*>(context->argument(0))) {
            QWidget* _q_arg0 = qscriptvalue_cast<QWidget*>(context->argument(0));
            QtScriptShell_QRadioButton* _q_cpp_result = new QtScriptShell_QRadioButton(_q_arg0);
            QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QRadioButton*)_q_cpp_result, QScriptEngine::AutoOwnership);
            _q_cpp_result->__qtscript_self = _q_result;
            return _q_result;
        } else if (context->argument(0).isString()) {
            QString _q_arg0 = context->argument(0).toString();
            QtScriptShell_QRadioButton* _q_cpp_result = new QtScriptShell_QRadioButton(_q_arg0);
            QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QRadioButton*)_q_cpp_result, QScriptEngine::AutoOwnership);
            _q_cpp_result->__qtscript_self = _q_result;
            return _q_result;
        }
    } else if (context->argumentCount() == 2) {
        QString _q_arg0 = context->argument(0).toString();
        QWidget* _q_arg1 = qscriptvalue_cast<QWidget*>(context->argument(1));
        QtScriptShell_QRadioButton* _q_cpp_result = new QtScriptShell_QRadioButton(_q_arg0, _q_arg1);
        QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QRadioButton*)_q_cpp_result, QScriptEngine::AutoOwnership);
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QRadioButton_throw_ambiguity_error_helper(context,
        qtscript_QRadioButton_function_names[_id],
        qtscript_QRadioButton_function_signatures[_id]);
}

static QScriptValue qtscript_QRadioButton_toScriptValue(QScriptEngine *engine, QRadioButton* const &in)
{
    return engine->newQObject(in, QScriptEngine::QtOwnership, QScriptEngine::PreferExistingWrapperObject);
}

static void qtscript_QRadioButton_fromScriptValue(const QScriptValue &value, QRadioButton* &out)
{
    out = qobject_cast<QRadioButton*>(value.toQObject());
}

QScriptValue qtscript_create_QRadioButton_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QRadioButton*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QRadioButton*)0));
    proto.setPrototype(engine->defaultPrototype(qMetaTypeId<QAbstractButton*>()));
    for (int i = 0; i < 3; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QRadioButton_prototype_call, qtscript_QRadioButton_function_lengths[i+1]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i)));
        proto.setProperty(QString::fromLatin1(qtscript_QRadioButton_function_names[i+1]),
            fun, QScriptValue::SkipInEnumeration);
    }

    qScriptRegisterMetaType<QRadioButton*>(engine, qtscript_QRadioButton_toScriptValue, 
        qtscript_QRadioButton_fromScriptValue, proto);

    QScriptValue ctor = engine->newFunction(qtscript_QRadioButton_static_call, proto, qtscript_QRadioButton_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));

    return ctor;
}
