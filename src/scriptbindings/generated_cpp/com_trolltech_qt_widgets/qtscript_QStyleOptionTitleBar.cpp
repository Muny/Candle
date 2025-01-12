#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>
#include <__package_shared.h>

#include <qstyleoption.h>
#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

#include "qtscriptshell_QStyleOptionTitleBar.h"

static const char * const qtscript_QStyleOptionTitleBar_function_names[] = {
    "QStyleOptionTitleBar"
    // static
    // prototype
    , "toString"
};

static const char * const qtscript_QStyleOptionTitleBar_function_signatures[] = {
    "\nQStyleOptionTitleBar other"
    // static
    // prototype
""
};

static const int qtscript_QStyleOptionTitleBar_function_lengths[] = {
    1
    // static
    // prototype
    , 0
};

static QScriptValue qtscript_QStyleOptionTitleBar_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QStyleOptionTitleBar::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QStyleOptionTitleBar)
Q_DECLARE_METATYPE(QStyleOptionTitleBar*)
Q_DECLARE_METATYPE(QtScriptShell_QStyleOptionTitleBar)
Q_DECLARE_METATYPE(QtScriptShell_QStyleOptionTitleBar*)
Q_DECLARE_METATYPE(QStyleOptionTitleBar::StyleOptionVersion)
Q_DECLARE_METATYPE(QStyleOptionTitleBar::StyleOptionType)
Q_DECLARE_METATYPE(QStyleOptionComplex*)

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
// QStyleOptionTitleBar::StyleOptionVersion
//

static const QStyleOptionTitleBar::StyleOptionVersion qtscript_QStyleOptionTitleBar_StyleOptionVersion_values[] = {
    QStyleOptionTitleBar::Version
};

static const char * const qtscript_QStyleOptionTitleBar_StyleOptionVersion_keys[] = {
    "Version"
};

static QString qtscript_QStyleOptionTitleBar_StyleOptionVersion_toStringHelper(QStyleOptionTitleBar::StyleOptionVersion value)
{
    if ((value >= QStyleOptionTitleBar::Version) && (value <= QStyleOptionTitleBar::Version))
        return qtscript_QStyleOptionTitleBar_StyleOptionVersion_keys[static_cast<int>(value)-static_cast<int>(QStyleOptionTitleBar::Version)];
    return QString();
}

static QScriptValue qtscript_QStyleOptionTitleBar_StyleOptionVersion_toScriptValue(QScriptEngine *engine, const QStyleOptionTitleBar::StyleOptionVersion &value)
{
    QScriptValue clazz = engine->globalObject().property(QString::fromLatin1("QStyleOptionTitleBar"));
    return clazz.property(qtscript_QStyleOptionTitleBar_StyleOptionVersion_toStringHelper(value));
}

static void qtscript_QStyleOptionTitleBar_StyleOptionVersion_fromScriptValue(const QScriptValue &value, QStyleOptionTitleBar::StyleOptionVersion &out)
{
    out = qvariant_cast<QStyleOptionTitleBar::StyleOptionVersion>(value.toVariant());
}

static QScriptValue qtscript_construct_QStyleOptionTitleBar_StyleOptionVersion(QScriptContext *context, QScriptEngine *engine)
{
    int arg = context->argument(0).toInt32();
    if ((arg >= QStyleOptionTitleBar::Version) && (arg <= QStyleOptionTitleBar::Version))
        return qScriptValueFromValue(engine,  static_cast<QStyleOptionTitleBar::StyleOptionVersion>(arg));
    return context->throwError(QString::fromLatin1("StyleOptionVersion(): invalid enum value (%0)").arg(arg));
}

static QScriptValue qtscript_QStyleOptionTitleBar_StyleOptionVersion_valueOf(QScriptContext *context, QScriptEngine *engine)
{
    QStyleOptionTitleBar::StyleOptionVersion value = qscriptvalue_cast<QStyleOptionTitleBar::StyleOptionVersion>(context->thisObject());
    return QScriptValue(engine, static_cast<int>(value));
}

static QScriptValue qtscript_QStyleOptionTitleBar_StyleOptionVersion_toString(QScriptContext *context, QScriptEngine *engine)
{
    QStyleOptionTitleBar::StyleOptionVersion value = qscriptvalue_cast<QStyleOptionTitleBar::StyleOptionVersion>(context->thisObject());
    return QScriptValue(engine, qtscript_QStyleOptionTitleBar_StyleOptionVersion_toStringHelper(value));
}

static QScriptValue qtscript_create_QStyleOptionTitleBar_StyleOptionVersion_class(QScriptEngine *engine, QScriptValue &clazz)
{
    QScriptValue ctor = qtscript_create_enum_class_helper(
        engine, qtscript_construct_QStyleOptionTitleBar_StyleOptionVersion,
        qtscript_QStyleOptionTitleBar_StyleOptionVersion_valueOf, qtscript_QStyleOptionTitleBar_StyleOptionVersion_toString);
    qScriptRegisterMetaType<QStyleOptionTitleBar::StyleOptionVersion>(engine, qtscript_QStyleOptionTitleBar_StyleOptionVersion_toScriptValue,
        qtscript_QStyleOptionTitleBar_StyleOptionVersion_fromScriptValue, ctor.property(QString::fromLatin1("prototype")));
    for (int i = 0; i < 1; ++i) {
        clazz.setProperty(QString::fromLatin1(qtscript_QStyleOptionTitleBar_StyleOptionVersion_keys[i]),
            engine->newVariant(QVariant::fromValue(qtscript_QStyleOptionTitleBar_StyleOptionVersion_values[i])),
            QScriptValue::ReadOnly | QScriptValue::Undeletable);
    }
    return ctor;
}

//
// QStyleOptionTitleBar::StyleOptionType
//

static const QStyleOptionTitleBar::StyleOptionType qtscript_QStyleOptionTitleBar_StyleOptionType_values[] = {
    QStyleOptionTitleBar::Type
};

static const char * const qtscript_QStyleOptionTitleBar_StyleOptionType_keys[] = {
    "Type"
};

static QString qtscript_QStyleOptionTitleBar_StyleOptionType_toStringHelper(QStyleOptionTitleBar::StyleOptionType value)
{
    if ((value >= QStyleOptionTitleBar::Type) && (value <= QStyleOptionTitleBar::Type))
        return qtscript_QStyleOptionTitleBar_StyleOptionType_keys[static_cast<int>(value)-static_cast<int>(QStyleOptionTitleBar::Type)];
    return QString();
}

static QScriptValue qtscript_QStyleOptionTitleBar_StyleOptionType_toScriptValue(QScriptEngine *engine, const QStyleOptionTitleBar::StyleOptionType &value)
{
    QScriptValue clazz = engine->globalObject().property(QString::fromLatin1("QStyleOptionTitleBar"));
    return clazz.property(qtscript_QStyleOptionTitleBar_StyleOptionType_toStringHelper(value));
}

static void qtscript_QStyleOptionTitleBar_StyleOptionType_fromScriptValue(const QScriptValue &value, QStyleOptionTitleBar::StyleOptionType &out)
{
    out = qvariant_cast<QStyleOptionTitleBar::StyleOptionType>(value.toVariant());
}

static QScriptValue qtscript_construct_QStyleOptionTitleBar_StyleOptionType(QScriptContext *context, QScriptEngine *engine)
{
    int arg = context->argument(0).toInt32();
    if ((arg >= QStyleOptionTitleBar::Type) && (arg <= QStyleOptionTitleBar::Type))
        return qScriptValueFromValue(engine,  static_cast<QStyleOptionTitleBar::StyleOptionType>(arg));
    return context->throwError(QString::fromLatin1("StyleOptionType(): invalid enum value (%0)").arg(arg));
}

static QScriptValue qtscript_QStyleOptionTitleBar_StyleOptionType_valueOf(QScriptContext *context, QScriptEngine *engine)
{
    QStyleOptionTitleBar::StyleOptionType value = qscriptvalue_cast<QStyleOptionTitleBar::StyleOptionType>(context->thisObject());
    return QScriptValue(engine, static_cast<int>(value));
}

static QScriptValue qtscript_QStyleOptionTitleBar_StyleOptionType_toString(QScriptContext *context, QScriptEngine *engine)
{
    QStyleOptionTitleBar::StyleOptionType value = qscriptvalue_cast<QStyleOptionTitleBar::StyleOptionType>(context->thisObject());
    return QScriptValue(engine, qtscript_QStyleOptionTitleBar_StyleOptionType_toStringHelper(value));
}

static QScriptValue qtscript_create_QStyleOptionTitleBar_StyleOptionType_class(QScriptEngine *engine, QScriptValue &clazz)
{
    QScriptValue ctor = qtscript_create_enum_class_helper(
        engine, qtscript_construct_QStyleOptionTitleBar_StyleOptionType,
        qtscript_QStyleOptionTitleBar_StyleOptionType_valueOf, qtscript_QStyleOptionTitleBar_StyleOptionType_toString);
    qScriptRegisterMetaType<QStyleOptionTitleBar::StyleOptionType>(engine, qtscript_QStyleOptionTitleBar_StyleOptionType_toScriptValue,
        qtscript_QStyleOptionTitleBar_StyleOptionType_fromScriptValue, ctor.property(QString::fromLatin1("prototype")));
    for (int i = 0; i < 1; ++i) {
        clazz.setProperty(QString::fromLatin1(qtscript_QStyleOptionTitleBar_StyleOptionType_keys[i]),
            engine->newVariant(QVariant::fromValue(qtscript_QStyleOptionTitleBar_StyleOptionType_values[i])),
            QScriptValue::ReadOnly | QScriptValue::Undeletable);
    }
    return ctor;
}

//
// QStyleOptionTitleBar
//

static QScriptValue qtscript_QStyleOptionTitleBar_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 0;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QStyleOptionTitleBar* _q_self = qscriptvalue_cast<QStyleOptionTitleBar*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QStyleOptionTitleBar.%0(): this object is not a QStyleOptionTitleBar")
            .arg(qtscript_QStyleOptionTitleBar_function_names[_id+1]));
    }

    switch (_id) {
    case 0: {
    QString result = QString::fromLatin1("QStyleOptionTitleBar");
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QStyleOptionTitleBar_throw_ambiguity_error_helper(context,
        qtscript_QStyleOptionTitleBar_function_names[_id+1],
        qtscript_QStyleOptionTitleBar_function_signatures[_id+1]);
}

static QScriptValue qtscript_QStyleOptionTitleBar_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QStyleOptionTitleBar(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QtScriptShell_QStyleOptionTitleBar _q_cpp_result;
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue((QStyleOptionTitleBar)_q_cpp_result));
        _q_cpp_result.__qtscript_self = _q_result;
        return _q_result;
    } else if (context->argumentCount() == 1) {
        QStyleOptionTitleBar _q_arg0 = qscriptvalue_cast<QStyleOptionTitleBar>(context->argument(0));
        QtScriptShell_QStyleOptionTitleBar _q_cpp_result(_q_arg0);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue((QStyleOptionTitleBar)_q_cpp_result));
        _q_cpp_result.__qtscript_self = _q_result;
        return _q_result;
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QStyleOptionTitleBar_throw_ambiguity_error_helper(context,
        qtscript_QStyleOptionTitleBar_function_names[_id],
        qtscript_QStyleOptionTitleBar_function_signatures[_id]);
}

QScriptValue qtscript_create_QStyleOptionTitleBar_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QStyleOptionTitleBar*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QStyleOptionTitleBar*)0));
    proto.setPrototype(engine->defaultPrototype(qMetaTypeId<QStyleOptionComplex*>()));

    engine->setDefaultPrototype(qMetaTypeId<QStyleOptionTitleBar>(), proto);
    engine->setDefaultPrototype(qMetaTypeId<QStyleOptionTitleBar*>(), proto);

    QScriptValue ctor = engine->newFunction(qtscript_QStyleOptionTitleBar_static_call, proto, qtscript_QStyleOptionTitleBar_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));

    ctor.setProperty(QString::fromLatin1("StyleOptionVersion"),
        qtscript_create_QStyleOptionTitleBar_StyleOptionVersion_class(engine, ctor));
    ctor.setProperty(QString::fromLatin1("StyleOptionType"),
        qtscript_create_QStyleOptionTitleBar_StyleOptionType_class(engine, ctor));
    return ctor;
}
