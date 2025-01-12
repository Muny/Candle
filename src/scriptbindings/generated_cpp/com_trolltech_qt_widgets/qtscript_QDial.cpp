#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>
#include <__package_shared.h>

#include <qdial.h>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdial.h>
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
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qwidget.h>

#include "qtscriptshell_QDial.h"

static const char * const qtscript_QDial_function_names[] = {
    "QDial"
    // static
    // prototype
    , "minimumSizeHint"
    , "setNotchTarget"
    , "sizeHint"
    , "toString"
};

static const char * const qtscript_QDial_function_signatures[] = {
    "QWidget parent"
    // static
    // prototype
    , ""
    , "double target"
    , ""
""
};

static const int qtscript_QDial_function_lengths[] = {
    1
    // static
    // prototype
    , 0
    , 1
    , 0
    , 0
};

static QScriptValue qtscript_QDial_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QDial::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QDial*)
Q_DECLARE_METATYPE(QtScriptShell_QDial*)
Q_DECLARE_METATYPE(QWidget*)
Q_DECLARE_METATYPE(QAbstractSlider*)

//
// QDial
//

static QScriptValue qtscript_QDial_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 3;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QDial* _q_self = qscriptvalue_cast<QDial*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QDial.%0(): this object is not a QDial")
            .arg(qtscript_QDial_function_names[_id+1]));
    }

    switch (_id) {
    case 0:
    if (context->argumentCount() == 0) {
        QSize _q_result = _q_self->minimumSizeHint();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 1:
    if (context->argumentCount() == 1) {
        double _q_arg0 = context->argument(0).toNumber();
        _q_self->setNotchTarget(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 2:
    if (context->argumentCount() == 0) {
        QSize _q_result = _q_self->sizeHint();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 3: {
    QString result = QString::fromLatin1("QDial");
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QDial_throw_ambiguity_error_helper(context,
        qtscript_QDial_function_names[_id+1],
        qtscript_QDial_function_signatures[_id+1]);
}

static QScriptValue qtscript_QDial_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QDial(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QtScriptShell_QDial* _q_cpp_result = new QtScriptShell_QDial();
        QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QDial*)_q_cpp_result, QScriptEngine::AutoOwnership);
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    } else if (context->argumentCount() == 1) {
        QWidget* _q_arg0 = qscriptvalue_cast<QWidget*>(context->argument(0));
        QtScriptShell_QDial* _q_cpp_result = new QtScriptShell_QDial(_q_arg0);
        QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QDial*)_q_cpp_result, QScriptEngine::AutoOwnership);
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QDial_throw_ambiguity_error_helper(context,
        qtscript_QDial_function_names[_id],
        qtscript_QDial_function_signatures[_id]);
}

static QScriptValue qtscript_QDial_toScriptValue(QScriptEngine *engine, QDial* const &in)
{
    return engine->newQObject(in, QScriptEngine::QtOwnership, QScriptEngine::PreferExistingWrapperObject);
}

static void qtscript_QDial_fromScriptValue(const QScriptValue &value, QDial* &out)
{
    out = qobject_cast<QDial*>(value.toQObject());
}

QScriptValue qtscript_create_QDial_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QDial*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QDial*)0));
    proto.setPrototype(engine->defaultPrototype(qMetaTypeId<QAbstractSlider*>()));
    for (int i = 0; i < 4; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QDial_prototype_call, qtscript_QDial_function_lengths[i+1]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i)));
        proto.setProperty(QString::fromLatin1(qtscript_QDial_function_names[i+1]),
            fun, QScriptValue::SkipInEnumeration);
    }

    qScriptRegisterMetaType<QDial*>(engine, qtscript_QDial_toScriptValue, 
        qtscript_QDial_fromScriptValue, proto);

    QScriptValue ctor = engine->newFunction(qtscript_QDial_static_call, proto, qtscript_QDial_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));

    return ctor;
}
