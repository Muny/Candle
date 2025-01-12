#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>
#include <__package_shared.h>

#include <qthreadpool.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qrunnable.h>
#include <qthreadpool.h>

#include "qtscriptshell_QThreadPool.h"

static const char * const qtscript_QThreadPool_function_names[] = {
    "QThreadPool"
    // static
    , "globalInstance"
    // prototype
    , "cancel"
    , "clear"
    , "releaseThread"
    , "reserveThread"
    , "start"
    , "tryStart"
    , "waitForDone"
    , "toString"
};

static const char * const qtscript_QThreadPool_function_signatures[] = {
    "QObject parent"
    // static
    , ""
    // prototype
    , "QRunnable runnable"
    , ""
    , ""
    , ""
    , "QRunnable runnable, int priority"
    , "QRunnable runnable"
    , "int msecs"
""
};

static const int qtscript_QThreadPool_function_lengths[] = {
    1
    // static
    , 0
    // prototype
    , 1
    , 0
    , 0
    , 0
    , 2
    , 1
    , 1
    , 0
};

static QScriptValue qtscript_QThreadPool_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QThreadPool::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QThreadPool*)
Q_DECLARE_METATYPE(QtScriptShell_QThreadPool*)
Q_DECLARE_METATYPE(QRunnable*)

//
// QThreadPool
//

static QScriptValue qtscript_QThreadPool_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 7;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QThreadPool* _q_self = qscriptvalue_cast<QThreadPool*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QThreadPool.%0(): this object is not a QThreadPool")
            .arg(qtscript_QThreadPool_function_names[_id+2]));
    }

    switch (_id) {
    case 0:
    if (context->argumentCount() == 1) {
        QRunnable* _q_arg0 = qscriptvalue_cast<QRunnable*>(context->argument(0));
        _q_self->cancel(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 1:
    if (context->argumentCount() == 0) {
        _q_self->clear();
        return context->engine()->undefinedValue();
    }
    break;

    case 2:
    if (context->argumentCount() == 0) {
        _q_self->releaseThread();
        return context->engine()->undefinedValue();
    }
    break;

    case 3:
    if (context->argumentCount() == 0) {
        _q_self->reserveThread();
        return context->engine()->undefinedValue();
    }
    break;

    case 4:
    if (context->argumentCount() == 1) {
        QRunnable* _q_arg0 = qscriptvalue_cast<QRunnable*>(context->argument(0));
        _q_self->start(_q_arg0);
        return context->engine()->undefinedValue();
    }
    if (context->argumentCount() == 2) {
        QRunnable* _q_arg0 = qscriptvalue_cast<QRunnable*>(context->argument(0));
        int _q_arg1 = context->argument(1).toInt32();
        _q_self->start(_q_arg0, _q_arg1);
        return context->engine()->undefinedValue();
    }
    break;

    case 5:
    if (context->argumentCount() == 1) {
        QRunnable* _q_arg0 = qscriptvalue_cast<QRunnable*>(context->argument(0));
        bool _q_result = _q_self->tryStart(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 6:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->waitForDone();
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        bool _q_result = _q_self->waitForDone(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 7: {
    QString result = QString::fromLatin1("QThreadPool");
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QThreadPool_throw_ambiguity_error_helper(context,
        qtscript_QThreadPool_function_names[_id+2],
        qtscript_QThreadPool_function_signatures[_id+2]);
}

static QScriptValue qtscript_QThreadPool_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QThreadPool(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QtScriptShell_QThreadPool* _q_cpp_result = new QtScriptShell_QThreadPool();
        QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QThreadPool*)_q_cpp_result, QScriptEngine::AutoOwnership);
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    } else if (context->argumentCount() == 1) {
        QObject* _q_arg0 = context->argument(0).toQObject();
        QtScriptShell_QThreadPool* _q_cpp_result = new QtScriptShell_QThreadPool(_q_arg0);
        QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QThreadPool*)_q_cpp_result, QScriptEngine::AutoOwnership);
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    }
    break;

    case 1:
    if (context->argumentCount() == 0) {
        QThreadPool* _q_result = QThreadPool::globalInstance();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QThreadPool_throw_ambiguity_error_helper(context,
        qtscript_QThreadPool_function_names[_id],
        qtscript_QThreadPool_function_signatures[_id]);
}

static QScriptValue qtscript_QThreadPool_toScriptValue(QScriptEngine *engine, QThreadPool* const &in)
{
    return engine->newQObject(in, QScriptEngine::QtOwnership, QScriptEngine::PreferExistingWrapperObject);
}

static void qtscript_QThreadPool_fromScriptValue(const QScriptValue &value, QThreadPool* &out)
{
    out = qobject_cast<QThreadPool*>(value.toQObject());
}

QScriptValue qtscript_create_QThreadPool_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QThreadPool*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QThreadPool*)0));
    proto.setPrototype(engine->defaultPrototype(qMetaTypeId<QObject*>()));
    for (int i = 0; i < 8; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QThreadPool_prototype_call, qtscript_QThreadPool_function_lengths[i+2]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i)));
        proto.setProperty(QString::fromLatin1(qtscript_QThreadPool_function_names[i+2]),
            fun, QScriptValue::SkipInEnumeration);
    }

    qScriptRegisterMetaType<QThreadPool*>(engine, qtscript_QThreadPool_toScriptValue, 
        qtscript_QThreadPool_fromScriptValue, proto);

    QScriptValue ctor = engine->newFunction(qtscript_QThreadPool_static_call, proto, qtscript_QThreadPool_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));
    for (int i = 0; i < 1; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QThreadPool_static_call,
            qtscript_QThreadPool_function_lengths[i+1]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i+1)));
        ctor.setProperty(QString::fromLatin1(qtscript_QThreadPool_function_names[i+1]),
            fun, QScriptValue::SkipInEnumeration);
    }

    return ctor;
}
