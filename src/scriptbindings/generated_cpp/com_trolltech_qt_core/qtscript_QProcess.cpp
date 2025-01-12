#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>
#include <__package_shared.h>

#include <qprocess.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qprocess.h>
#include <qstringlist.h>

#include "qtscriptshell_QProcess.h"

static const char * const qtscript_QProcess_function_names[] = {
    "QProcess"
    // static
    , "execute"
    , "nullDevice"
    , "startDetached"
    , "systemEnvironment"
    // prototype
    , "arguments"
    , "closeReadChannel"
    , "closeWriteChannel"
    , "environment"
    , "error"
    , "exitCode"
    , "exitStatus"
    , "processChannelMode"
    , "processEnvironment"
    , "processId"
    , "program"
    , "readAllStandardError"
    , "readAllStandardOutput"
    , "readChannel"
    , "setArguments"
    , "setEnvironment"
    , "setProcessChannelMode"
    , "setProcessEnvironment"
    , "setProgram"
    , "setReadChannel"
    , "setStandardErrorFile"
    , "setStandardInputFile"
    , "setStandardOutputFile"
    , "setStandardOutputProcess"
    , "setWorkingDirectory"
    , "start"
    , "state"
    , "waitForFinished"
    , "waitForStarted"
    , "workingDirectory"
    , "toString"
};

static const char * const qtscript_QProcess_function_signatures[] = {
    "QObject parent"
    // static
    , "String command\nString program, List arguments"
    , ""
    , "String command\nString program, List arguments\nString program, List arguments, String workingDirectory, qint64 pid"
    , ""
    // prototype
    , ""
    , "ProcessChannel channel"
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , "List arguments"
    , "List environment"
    , "ProcessChannelMode mode"
    , "QProcessEnvironment environment"
    , "String program"
    , "ProcessChannel channel"
    , "String fileName, OpenMode mode"
    , "String fileName"
    , "String fileName, OpenMode mode"
    , "QProcess destination"
    , "String dir"
    , "OpenMode mode\nString command, OpenMode mode\nString program, List arguments, OpenMode mode"
    , ""
    , "int msecs"
    , "int msecs"
    , ""
""
};

static const int qtscript_QProcess_function_lengths[] = {
    1
    // static
    , 2
    , 0
    , 4
    , 0
    // prototype
    , 0
    , 1
    , 0
    , 0
    , 0
    , 0
    , 0
    , 0
    , 0
    , 0
    , 0
    , 0
    , 0
    , 0
    , 1
    , 1
    , 1
    , 1
    , 1
    , 1
    , 2
    , 1
    , 2
    , 1
    , 1
    , 3
    , 0
    , 1
    , 1
    , 0
    , 0
};

static QScriptValue qtscript_QProcess_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QProcess::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QProcess*)
Q_DECLARE_METATYPE(QtScriptShell_QProcess*)
Q_DECLARE_METATYPE(QProcess::ProcessError)
Q_DECLARE_METATYPE(QProcess::ProcessChannel)
Q_DECLARE_METATYPE(QProcess::ExitStatus)
Q_DECLARE_METATYPE(QProcess::ProcessChannelMode)
Q_DECLARE_METATYPE(QProcessEnvironment)
Q_DECLARE_METATYPE(QFlags<QIODevice::OpenModeFlag>)
Q_DECLARE_METATYPE(QProcess::ProcessState)
Q_DECLARE_METATYPE(qint64*)
Q_DECLARE_METATYPE(QIODevice*)

static QScriptValue qtscript_create_enum_class_helper(
    QScriptEngine *engine,
    QScriptEngine::FunctionSignature construct,
    QScriptEngine::FunctionSignature valueOf,
    QScriptEngine::FunctionSignature toString)
{
    QScriptValue proto = engine->newObject();
    proto.setProperty(QString::fromLatin1("valueOf"),
        engine->newFunction(valueOf), QScriptValue::SkipInEnumeration);
    proto.setProperty(QString::fromLatin1("toString"),
        engine->newFunction(toString), QScriptValue::SkipInEnumeration);
    return engine->newFunction(construct, proto, 1);
}

//
// QProcess::ProcessError
//

static const QProcess::ProcessError qtscript_QProcess_ProcessError_values[] = {
    QProcess::FailedToStart
    , QProcess::Crashed
    , QProcess::Timedout
    , QProcess::ReadError
    , QProcess::WriteError
    , QProcess::UnknownError
};

static const char * const qtscript_QProcess_ProcessError_keys[] = {
    "FailedToStart"
    , "Crashed"
    , "Timedout"
    , "ReadError"
    , "WriteError"
    , "UnknownError"
};

static QString qtscript_QProcess_ProcessError_toStringHelper(QProcess::ProcessError value)
{
    if ((value >= QProcess::FailedToStart) && (value <= QProcess::UnknownError))
        return qtscript_QProcess_ProcessError_keys[static_cast<int>(value)-static_cast<int>(QProcess::FailedToStart)];
    return QString();
}

static QScriptValue qtscript_QProcess_ProcessError_toScriptValue(QScriptEngine *engine, const QProcess::ProcessError &value)
{
    QScriptValue clazz = engine->globalObject().property(QString::fromLatin1("QProcess"));
    return clazz.property(qtscript_QProcess_ProcessError_toStringHelper(value));
}

static void qtscript_QProcess_ProcessError_fromScriptValue(const QScriptValue &value, QProcess::ProcessError &out)
{
    out = qvariant_cast<QProcess::ProcessError>(value.toVariant());
}

static QScriptValue qtscript_construct_QProcess_ProcessError(QScriptContext *context, QScriptEngine *engine)
{
    int arg = context->argument(0).toInt32();
    if ((arg >= QProcess::FailedToStart) && (arg <= QProcess::UnknownError))
        return qScriptValueFromValue(engine,  static_cast<QProcess::ProcessError>(arg));
    return context->throwError(QString::fromLatin1("ProcessError(): invalid enum value (%0)").arg(arg));
}

static QScriptValue qtscript_QProcess_ProcessError_valueOf(QScriptContext *context, QScriptEngine *engine)
{
    QProcess::ProcessError value = qscriptvalue_cast<QProcess::ProcessError>(context->thisObject());
    return QScriptValue(engine, static_cast<int>(value));
}

static QScriptValue qtscript_QProcess_ProcessError_toString(QScriptContext *context, QScriptEngine *engine)
{
    QProcess::ProcessError value = qscriptvalue_cast<QProcess::ProcessError>(context->thisObject());
    return QScriptValue(engine, qtscript_QProcess_ProcessError_toStringHelper(value));
}

static QScriptValue qtscript_create_QProcess_ProcessError_class(QScriptEngine *engine, QScriptValue &clazz)
{
    QScriptValue ctor = qtscript_create_enum_class_helper(
        engine, qtscript_construct_QProcess_ProcessError,
        qtscript_QProcess_ProcessError_valueOf, qtscript_QProcess_ProcessError_toString);
    qScriptRegisterMetaType<QProcess::ProcessError>(engine, qtscript_QProcess_ProcessError_toScriptValue,
        qtscript_QProcess_ProcessError_fromScriptValue, ctor.property(QString::fromLatin1("prototype")));
    for (int i = 0; i < 6; ++i) {
        clazz.setProperty(QString::fromLatin1(qtscript_QProcess_ProcessError_keys[i]),
            engine->newVariant(QVariant::fromValue(qtscript_QProcess_ProcessError_values[i])),
            QScriptValue::ReadOnly | QScriptValue::Undeletable);
    }
    return ctor;
}

//
// QProcess
//

static QScriptValue qtscript_QProcess_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 30;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QProcess* _q_self = qscriptvalue_cast<QProcess*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QProcess.%0(): this object is not a QProcess")
            .arg(qtscript_QProcess_function_names[_id+5]));
    }

    switch (_id) {
    case 0:
    if (context->argumentCount() == 0) {
        QStringList _q_result = _q_self->arguments();
        return qScriptValueFromSequence(context->engine(), _q_result);
    }
    break;

    case 1:
    if (context->argumentCount() == 1) {
        QProcess::ProcessChannel _q_arg0 = qscriptvalue_cast<QProcess::ProcessChannel>(context->argument(0));
        _q_self->closeReadChannel(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 2:
    if (context->argumentCount() == 0) {
        _q_self->closeWriteChannel();
        return context->engine()->undefinedValue();
    }
    break;

    case 3:
    if (context->argumentCount() == 0) {
        QStringList _q_result = _q_self->environment();
        return qScriptValueFromSequence(context->engine(), _q_result);
    }
    break;

    case 4:
    if (context->argumentCount() == 0) {
        QProcess::ProcessError _q_result = _q_self->error();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 5:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->exitCode();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 6:
    if (context->argumentCount() == 0) {
        QProcess::ExitStatus _q_result = _q_self->exitStatus();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 7:
    if (context->argumentCount() == 0) {
        QProcess::ProcessChannelMode _q_result = _q_self->processChannelMode();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 8:
    if (context->argumentCount() == 0) {
        QProcessEnvironment _q_result = _q_self->processEnvironment();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 9:
    if (context->argumentCount() == 0) {
        qint64 _q_result = _q_self->processId();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 10:
    if (context->argumentCount() == 0) {
        QString _q_result = _q_self->program();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 11:
    if (context->argumentCount() == 0) {
        QByteArray _q_result = _q_self->readAllStandardError();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 12:
    if (context->argumentCount() == 0) {
        QByteArray _q_result = _q_self->readAllStandardOutput();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 13:
    if (context->argumentCount() == 0) {
        QProcess::ProcessChannel _q_result = _q_self->readChannel();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 14:
    if (context->argumentCount() == 1) {
        QStringList _q_arg0;
        qScriptValueToSequence(context->argument(0), _q_arg0);
        _q_self->setArguments(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 15:
    if (context->argumentCount() == 1) {
        QStringList _q_arg0;
        qScriptValueToSequence(context->argument(0), _q_arg0);
        _q_self->setEnvironment(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 16:
    if (context->argumentCount() == 1) {
        QProcess::ProcessChannelMode _q_arg0 = qscriptvalue_cast<QProcess::ProcessChannelMode>(context->argument(0));
        _q_self->setProcessChannelMode(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 17:
    if (context->argumentCount() == 1) {
        QProcessEnvironment _q_arg0 = qscriptvalue_cast<QProcessEnvironment>(context->argument(0));
        _q_self->setProcessEnvironment(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 18:
    if (context->argumentCount() == 1) {
        QString _q_arg0 = context->argument(0).toString();
        _q_self->setProgram(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 19:
    if (context->argumentCount() == 1) {
        QProcess::ProcessChannel _q_arg0 = qscriptvalue_cast<QProcess::ProcessChannel>(context->argument(0));
        _q_self->setReadChannel(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 20:
    if (context->argumentCount() == 1) {
        QString _q_arg0 = context->argument(0).toString();
        _q_self->setStandardErrorFile(_q_arg0);
        return context->engine()->undefinedValue();
    }
    if (context->argumentCount() == 2) {
        QString _q_arg0 = context->argument(0).toString();
        QFlags<QIODevice::OpenModeFlag> _q_arg1 = qscriptvalue_cast<QFlags<QIODevice::OpenModeFlag> >(context->argument(1));
        _q_self->setStandardErrorFile(_q_arg0, _q_arg1);
        return context->engine()->undefinedValue();
    }
    break;

    case 21:
    if (context->argumentCount() == 1) {
        QString _q_arg0 = context->argument(0).toString();
        _q_self->setStandardInputFile(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 22:
    if (context->argumentCount() == 1) {
        QString _q_arg0 = context->argument(0).toString();
        _q_self->setStandardOutputFile(_q_arg0);
        return context->engine()->undefinedValue();
    }
    if (context->argumentCount() == 2) {
        QString _q_arg0 = context->argument(0).toString();
        QFlags<QIODevice::OpenModeFlag> _q_arg1 = qscriptvalue_cast<QFlags<QIODevice::OpenModeFlag> >(context->argument(1));
        _q_self->setStandardOutputFile(_q_arg0, _q_arg1);
        return context->engine()->undefinedValue();
    }
    break;

    case 23:
    if (context->argumentCount() == 1) {
        QProcess* _q_arg0 = qscriptvalue_cast<QProcess*>(context->argument(0));
        _q_self->setStandardOutputProcess(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 24:
    if (context->argumentCount() == 1) {
        QString _q_arg0 = context->argument(0).toString();
        _q_self->setWorkingDirectory(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 25:
    if (context->argumentCount() == 0) {
        _q_self->start();
        return context->engine()->undefinedValue();
    }
    if (context->argumentCount() == 1) {
        if ((qMetaTypeId<QFlags<QIODevice::OpenModeFlag> >() == context->argument(0).toVariant().userType())) {
            QFlags<QIODevice::OpenModeFlag> _q_arg0 = qscriptvalue_cast<QFlags<QIODevice::OpenModeFlag> >(context->argument(0));
            _q_self->start(_q_arg0);
            return context->engine()->undefinedValue();
        } else if (context->argument(0).isString()) {
            QString _q_arg0 = context->argument(0).toString();
            _q_self->start(_q_arg0);
            return context->engine()->undefinedValue();
        }
    }
    if (context->argumentCount() == 2) {
        if (context->argument(0).isString()
            && (qMetaTypeId<QFlags<QIODevice::OpenModeFlag> >() == context->argument(1).toVariant().userType())) {
            QString _q_arg0 = context->argument(0).toString();
            QFlags<QIODevice::OpenModeFlag> _q_arg1 = qscriptvalue_cast<QFlags<QIODevice::OpenModeFlag> >(context->argument(1));
            _q_self->start(_q_arg0, _q_arg1);
            return context->engine()->undefinedValue();
        } else if (context->argument(0).isString()
            && context->argument(1).isArray()) {
            QString _q_arg0 = context->argument(0).toString();
            QStringList _q_arg1;
            qScriptValueToSequence(context->argument(1), _q_arg1);
            _q_self->start(_q_arg0, _q_arg1);
            return context->engine()->undefinedValue();
        }
    }
    if (context->argumentCount() == 3) {
        QString _q_arg0 = context->argument(0).toString();
        QStringList _q_arg1;
        qScriptValueToSequence(context->argument(1), _q_arg1);
        QFlags<QIODevice::OpenModeFlag> _q_arg2 = qscriptvalue_cast<QFlags<QIODevice::OpenModeFlag> >(context->argument(2));
        _q_self->start(_q_arg0, _q_arg1, _q_arg2);
        return context->engine()->undefinedValue();
    }
    break;

    case 26:
    if (context->argumentCount() == 0) {
        QProcess::ProcessState _q_result = _q_self->state();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 27:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->waitForFinished();
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        bool _q_result = _q_self->waitForFinished(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 28:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->waitForStarted();
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        bool _q_result = _q_self->waitForStarted(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 29:
    if (context->argumentCount() == 0) {
        QString _q_result = _q_self->workingDirectory();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 30: {
    QString result = QString::fromLatin1("QProcess");
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QProcess_throw_ambiguity_error_helper(context,
        qtscript_QProcess_function_names[_id+5],
        qtscript_QProcess_function_signatures[_id+5]);
}

static QScriptValue qtscript_QProcess_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QProcess(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QtScriptShell_QProcess* _q_cpp_result = new QtScriptShell_QProcess();
        QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QProcess*)_q_cpp_result, QScriptEngine::AutoOwnership);
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    } else if (context->argumentCount() == 1) {
        QObject* _q_arg0 = context->argument(0).toQObject();
        QtScriptShell_QProcess* _q_cpp_result = new QtScriptShell_QProcess(_q_arg0);
        QScriptValue _q_result = context->engine()->newQObject(context->thisObject(), (QProcess*)_q_cpp_result, QScriptEngine::AutoOwnership);
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    }
    break;

    case 1:
    if (context->argumentCount() == 1) {
        QString _q_arg0 = context->argument(0).toString();
        int _q_result = QProcess::execute(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        QString _q_arg0 = context->argument(0).toString();
        QStringList _q_arg1;
        qScriptValueToSequence(context->argument(1), _q_arg1);
        int _q_result = QProcess::execute(_q_arg0, _q_arg1);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 2:
    if (context->argumentCount() == 0) {
        QString _q_result = QProcess::nullDevice();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 3:
    if (context->argumentCount() == 1) {
        QString _q_arg0 = context->argument(0).toString();
        bool _q_result = QProcess::startDetached(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        QString _q_arg0 = context->argument(0).toString();
        QStringList _q_arg1;
        qScriptValueToSequence(context->argument(1), _q_arg1);
        bool _q_result = QProcess::startDetached(_q_arg0, _q_arg1);
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 3) {
        QString _q_arg0 = context->argument(0).toString();
        QStringList _q_arg1;
        qScriptValueToSequence(context->argument(1), _q_arg1);
        QString _q_arg2 = context->argument(2).toString();
        bool _q_result = QProcess::startDetached(_q_arg0, _q_arg1, _q_arg2);
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 4) {
        QString _q_arg0 = context->argument(0).toString();
        QStringList _q_arg1;
        qScriptValueToSequence(context->argument(1), _q_arg1);
        QString _q_arg2 = context->argument(2).toString();
        qint64* _q_arg3 = qscriptvalue_cast<qint64*>(context->argument(3));
        bool _q_result = QProcess::startDetached(_q_arg0, _q_arg1, _q_arg2, _q_arg3);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 4:
    if (context->argumentCount() == 0) {
        QStringList _q_result = QProcess::systemEnvironment();
        return qScriptValueFromSequence(context->engine(), _q_result);
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QProcess_throw_ambiguity_error_helper(context,
        qtscript_QProcess_function_names[_id],
        qtscript_QProcess_function_signatures[_id]);
}

static QScriptValue qtscript_QProcess_toScriptValue(QScriptEngine *engine, QProcess* const &in)
{
    return engine->newQObject(in, QScriptEngine::QtOwnership, QScriptEngine::PreferExistingWrapperObject);
}

static void qtscript_QProcess_fromScriptValue(const QScriptValue &value, QProcess* &out)
{
    out = qobject_cast<QProcess*>(value.toQObject());
}

QScriptValue qtscript_create_QProcess_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QProcess*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QProcess*)0));
    proto.setPrototype(engine->defaultPrototype(qMetaTypeId<QIODevice*>()));
    for (int i = 0; i < 31; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QProcess_prototype_call, qtscript_QProcess_function_lengths[i+5]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i)));
        proto.setProperty(QString::fromLatin1(qtscript_QProcess_function_names[i+5]),
            fun, QScriptValue::SkipInEnumeration);
    }

    qScriptRegisterMetaType<QProcess*>(engine, qtscript_QProcess_toScriptValue, 
        qtscript_QProcess_fromScriptValue, proto);

    QScriptValue ctor = engine->newFunction(qtscript_QProcess_static_call, proto, qtscript_QProcess_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));
    for (int i = 0; i < 4; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QProcess_static_call,
            qtscript_QProcess_function_lengths[i+1]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i+1)));
        ctor.setProperty(QString::fromLatin1(qtscript_QProcess_function_names[i+1]),
            fun, QScriptValue::SkipInEnumeration);
    }

    ctor.setProperty(QString::fromLatin1("ProcessError"),
        qtscript_create_QProcess_ProcessError_class(engine, ctor));
    return ctor;
}
