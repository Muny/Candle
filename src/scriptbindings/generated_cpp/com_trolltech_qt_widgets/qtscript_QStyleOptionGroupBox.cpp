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

#include "qtscriptshell_QStyleOptionGroupBox.h"

static const char * const qtscript_QStyleOptionGroupBox_function_names[] = {
    "QStyleOptionGroupBox"
    // static
    // prototype
    , "toString"
};

static const char * const qtscript_QStyleOptionGroupBox_function_signatures[] = {
    "\nQStyleOptionGroupBox other"
    // static
    // prototype
""
};

static const int qtscript_QStyleOptionGroupBox_function_lengths[] = {
    1
    // static
    // prototype
    , 0
};

static QScriptValue qtscript_QStyleOptionGroupBox_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QStyleOptionGroupBox::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QStyleOptionGroupBox)
Q_DECLARE_METATYPE(QStyleOptionGroupBox*)
Q_DECLARE_METATYPE(QtScriptShell_QStyleOptionGroupBox)
Q_DECLARE_METATYPE(QtScriptShell_QStyleOptionGroupBox*)
Q_DECLARE_METATYPE(QStyleOptionGroupBox::StyleOptionVersion)
Q_DECLARE_METATYPE(QStyleOptionGroupBox::StyleOptionType)
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
// QStyleOptionGroupBox::StyleOptionVersion
//

static const QStyleOptionGroupBox::StyleOptionVersion qtscript_QStyleOptionGroupBox_StyleOptionVersion_values[] = {
    QStyleOptionGroupBox::Version
};

static const char * const qtscript_QStyleOptionGroupBox_StyleOptionVersion_keys[] = {
    "Version"
};

static QString qtscript_QStyleOptionGroupBox_StyleOptionVersion_toStringHelper(QStyleOptionGroupBox::StyleOptionVersion value)
{
    if ((value >= QStyleOptionGroupBox::Version) && (value <= QStyleOptionGroupBox::Version))
        return qtscript_QStyleOptionGroupBox_StyleOptionVersion_keys[static_cast<int>(value)-static_cast<int>(QStyleOptionGroupBox::Version)];
    return QString();
}

static QScriptValue qtscript_QStyleOptionGroupBox_StyleOptionVersion_toScriptValue(QScriptEngine *engine, const QStyleOptionGroupBox::StyleOptionVersion &value)
{
    QScriptValue clazz = engine->globalObject().property(QString::fromLatin1("QStyleOptionGroupBox"));
    return clazz.property(qtscript_QStyleOptionGroupBox_StyleOptionVersion_toStringHelper(value));
}

static void qtscript_QStyleOptionGroupBox_StyleOptionVersion_fromScriptValue(const QScriptValue &value, QStyleOptionGroupBox::StyleOptionVersion &out)
{
    out = qvariant_cast<QStyleOptionGroupBox::StyleOptionVersion>(value.toVariant());
}

static QScriptValue qtscript_construct_QStyleOptionGroupBox_StyleOptionVersion(QScriptContext *context, QScriptEngine *engine)
{
    int arg = context->argument(0).toInt32();
    if ((arg >= QStyleOptionGroupBox::Version) && (arg <= QStyleOptionGroupBox::Version))
        return qScriptValueFromValue(engine,  static_cast<QStyleOptionGroupBox::StyleOptionVersion>(arg));
    return context->throwError(QString::fromLatin1("StyleOptionVersion(): invalid enum value (%0)").arg(arg));
}

static QScriptValue qtscript_QStyleOptionGroupBox_StyleOptionVersion_valueOf(QScriptContext *context, QScriptEngine *engine)
{
    QStyleOptionGroupBox::StyleOptionVersion value = qscriptvalue_cast<QStyleOptionGroupBox::StyleOptionVersion>(context->thisObject());
    return QScriptValue(engine, static_cast<int>(value));
}

static QScriptValue qtscript_QStyleOptionGroupBox_StyleOptionVersion_toString(QScriptContext *context, QScriptEngine *engine)
{
    QStyleOptionGroupBox::StyleOptionVersion value = qscriptvalue_cast<QStyleOptionGroupBox::StyleOptionVersion>(context->thisObject());
    return QScriptValue(engine, qtscript_QStyleOptionGroupBox_StyleOptionVersion_toStringHelper(value));
}

static QScriptValue qtscript_create_QStyleOptionGroupBox_StyleOptionVersion_class(QScriptEngine *engine, QScriptValue &clazz)
{
    QScriptValue ctor = qtscript_create_enum_class_helper(
        engine, qtscript_construct_QStyleOptionGroupBox_StyleOptionVersion,
        qtscript_QStyleOptionGroupBox_StyleOptionVersion_valueOf, qtscript_QStyleOptionGroupBox_StyleOptionVersion_toString);
    qScriptRegisterMetaType<QStyleOptionGroupBox::StyleOptionVersion>(engine, qtscript_QStyleOptionGroupBox_StyleOptionVersion_toScriptValue,
        qtscript_QStyleOptionGroupBox_StyleOptionVersion_fromScriptValue, ctor.property(QString::fromLatin1("prototype")));
    for (int i = 0; i < 1; ++i) {
        clazz.setProperty(QString::fromLatin1(qtscript_QStyleOptionGroupBox_StyleOptionVersion_keys[i]),
            engine->newVariant(QVariant::fromValue(qtscript_QStyleOptionGroupBox_StyleOptionVersion_values[i])),
            QScriptValue::ReadOnly | QScriptValue::Undeletable);
    }
    return ctor;
}

//
// QStyleOptionGroupBox::StyleOptionType
//

static const QStyleOptionGroupBox::StyleOptionType qtscript_QStyleOptionGroupBox_StyleOptionType_values[] = {
    QStyleOptionGroupBox::Type
};

static const char * const qtscript_QStyleOptionGroupBox_StyleOptionType_keys[] = {
    "Type"
};

static QString qtscript_QStyleOptionGroupBox_StyleOptionType_toStringHelper(QStyleOptionGroupBox::StyleOptionType value)
{
    if ((value >= QStyleOptionGroupBox::Type) && (value <= QStyleOptionGroupBox::Type))
        return qtscript_QStyleOptionGroupBox_StyleOptionType_keys[static_cast<int>(value)-static_cast<int>(QStyleOptionGroupBox::Type)];
    return QString();
}

static QScriptValue qtscript_QStyleOptionGroupBox_StyleOptionType_toScriptValue(QScriptEngine *engine, const QStyleOptionGroupBox::StyleOptionType &value)
{
    QScriptValue clazz = engine->globalObject().property(QString::fromLatin1("QStyleOptionGroupBox"));
    return clazz.property(qtscript_QStyleOptionGroupBox_StyleOptionType_toStringHelper(value));
}

static void qtscript_QStyleOptionGroupBox_StyleOptionType_fromScriptValue(const QScriptValue &value, QStyleOptionGroupBox::StyleOptionType &out)
{
    out = qvariant_cast<QStyleOptionGroupBox::StyleOptionType>(value.toVariant());
}

static QScriptValue qtscript_construct_QStyleOptionGroupBox_StyleOptionType(QScriptContext *context, QScriptEngine *engine)
{
    int arg = context->argument(0).toInt32();
    if ((arg >= QStyleOptionGroupBox::Type) && (arg <= QStyleOptionGroupBox::Type))
        return qScriptValueFromValue(engine,  static_cast<QStyleOptionGroupBox::StyleOptionType>(arg));
    return context->throwError(QString::fromLatin1("StyleOptionType(): invalid enum value (%0)").arg(arg));
}

static QScriptValue qtscript_QStyleOptionGroupBox_StyleOptionType_valueOf(QScriptContext *context, QScriptEngine *engine)
{
    QStyleOptionGroupBox::StyleOptionType value = qscriptvalue_cast<QStyleOptionGroupBox::StyleOptionType>(context->thisObject());
    return QScriptValue(engine, static_cast<int>(value));
}

static QScriptValue qtscript_QStyleOptionGroupBox_StyleOptionType_toString(QScriptContext *context, QScriptEngine *engine)
{
    QStyleOptionGroupBox::StyleOptionType value = qscriptvalue_cast<QStyleOptionGroupBox::StyleOptionType>(context->thisObject());
    return QScriptValue(engine, qtscript_QStyleOptionGroupBox_StyleOptionType_toStringHelper(value));
}

static QScriptValue qtscript_create_QStyleOptionGroupBox_StyleOptionType_class(QScriptEngine *engine, QScriptValue &clazz)
{
    QScriptValue ctor = qtscript_create_enum_class_helper(
        engine, qtscript_construct_QStyleOptionGroupBox_StyleOptionType,
        qtscript_QStyleOptionGroupBox_StyleOptionType_valueOf, qtscript_QStyleOptionGroupBox_StyleOptionType_toString);
    qScriptRegisterMetaType<QStyleOptionGroupBox::StyleOptionType>(engine, qtscript_QStyleOptionGroupBox_StyleOptionType_toScriptValue,
        qtscript_QStyleOptionGroupBox_StyleOptionType_fromScriptValue, ctor.property(QString::fromLatin1("prototype")));
    for (int i = 0; i < 1; ++i) {
        clazz.setProperty(QString::fromLatin1(qtscript_QStyleOptionGroupBox_StyleOptionType_keys[i]),
            engine->newVariant(QVariant::fromValue(qtscript_QStyleOptionGroupBox_StyleOptionType_values[i])),
            QScriptValue::ReadOnly | QScriptValue::Undeletable);
    }
    return ctor;
}

//
// QStyleOptionGroupBox
//

static QScriptValue qtscript_QStyleOptionGroupBox_prototype_call(QScriptContext *context, QScriptEngine *)
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
    QStyleOptionGroupBox* _q_self = qscriptvalue_cast<QStyleOptionGroupBox*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QStyleOptionGroupBox.%0(): this object is not a QStyleOptionGroupBox")
            .arg(qtscript_QStyleOptionGroupBox_function_names[_id+1]));
    }

    switch (_id) {
    case 0: {
    QString result = QString::fromLatin1("QStyleOptionGroupBox");
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QStyleOptionGroupBox_throw_ambiguity_error_helper(context,
        qtscript_QStyleOptionGroupBox_function_names[_id+1],
        qtscript_QStyleOptionGroupBox_function_signatures[_id+1]);
}

static QScriptValue qtscript_QStyleOptionGroupBox_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QStyleOptionGroupBox(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QtScriptShell_QStyleOptionGroupBox _q_cpp_result;
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue((QStyleOptionGroupBox)_q_cpp_result));
        _q_cpp_result.__qtscript_self = _q_result;
        return _q_result;
    } else if (context->argumentCount() == 1) {
        QStyleOptionGroupBox _q_arg0 = qscriptvalue_cast<QStyleOptionGroupBox>(context->argument(0));
        QtScriptShell_QStyleOptionGroupBox _q_cpp_result(_q_arg0);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue((QStyleOptionGroupBox)_q_cpp_result));
        _q_cpp_result.__qtscript_self = _q_result;
        return _q_result;
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QStyleOptionGroupBox_throw_ambiguity_error_helper(context,
        qtscript_QStyleOptionGroupBox_function_names[_id],
        qtscript_QStyleOptionGroupBox_function_signatures[_id]);
}

QScriptValue qtscript_create_QStyleOptionGroupBox_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QStyleOptionGroupBox*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QStyleOptionGroupBox*)0));
    proto.setPrototype(engine->defaultPrototype(qMetaTypeId<QStyleOptionComplex*>()));

    engine->setDefaultPrototype(qMetaTypeId<QStyleOptionGroupBox>(), proto);
    engine->setDefaultPrototype(qMetaTypeId<QStyleOptionGroupBox*>(), proto);

    QScriptValue ctor = engine->newFunction(qtscript_QStyleOptionGroupBox_static_call, proto, qtscript_QStyleOptionGroupBox_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));

    ctor.setProperty(QString::fromLatin1("StyleOptionVersion"),
        qtscript_create_QStyleOptionGroupBox_StyleOptionVersion_class(engine, ctor));
    ctor.setProperty(QString::fromLatin1("StyleOptionType"),
        qtscript_create_QStyleOptionGroupBox_StyleOptionType_class(engine, ctor));
    return ctor;
}
