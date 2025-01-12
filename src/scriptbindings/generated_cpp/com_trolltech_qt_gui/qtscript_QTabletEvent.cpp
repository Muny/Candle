#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>
#include <__package_shared.h>

#include <qevent.h>
#include <QVariant>
#include <qcoreevent.h>
#include <qpoint.h>

#include "qtscriptshell_QTabletEvent.h"

static const char * const qtscript_QTabletEvent_function_names[] = {
    "QTabletEvent"
    // static
    // prototype
    , "button"
    , "buttons"
    , "device"
    , "globalPos"
    , "globalPosF"
    , "globalX"
    , "globalY"
    , "hiResGlobalX"
    , "hiResGlobalY"
    , "pointerType"
    , "pos"
    , "posF"
    , "pressure"
    , "rotation"
    , "tangentialPressure"
    , "uniqueId"
    , "x"
    , "xTilt"
    , "y"
    , "yTilt"
    , "z"
    , "toString"
};

static const char * const qtscript_QTabletEvent_function_signatures[] = {
    "Type t, QPointF pos, QPointF globalPos, int device, int pointerType, qreal pressure, int xTilt, int yTilt, qreal tangentialPressure, qreal rotation, int z, KeyboardModifiers keyState, qint64 uniqueID\nType t, QPointF pos, QPointF globalPos, int device, int pointerType, qreal pressure, int xTilt, int yTilt, qreal tangentialPressure, qreal rotation, int z, KeyboardModifiers keyState, qint64 uniqueID, MouseButton button, MouseButtons buttons"
    // static
    // prototype
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
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
    , ""
""
};

static const int qtscript_QTabletEvent_function_lengths[] = {
    15
    // static
    // prototype
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
};

static QScriptValue qtscript_QTabletEvent_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QTabletEvent::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QTabletEvent*)
Q_DECLARE_METATYPE(QtScriptShell_QTabletEvent*)
Q_DECLARE_METATYPE(QTabletEvent::TabletDevice)
Q_DECLARE_METATYPE(Qt::MouseButton)
Q_DECLARE_METATYPE(QFlags<Qt::MouseButton>)
Q_DECLARE_METATYPE(QTabletEvent::PointerType)
Q_DECLARE_METATYPE(QEvent::Type)
Q_DECLARE_METATYPE(QFlags<Qt::KeyboardModifier>)
Q_DECLARE_METATYPE(QInputEvent*)

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
// QTabletEvent::TabletDevice
//

static const QTabletEvent::TabletDevice qtscript_QTabletEvent_TabletDevice_values[] = {
    QTabletEvent::NoDevice
    , QTabletEvent::Puck
    , QTabletEvent::Stylus
    , QTabletEvent::Airbrush
    , QTabletEvent::FourDMouse
    , QTabletEvent::XFreeEraser
    , QTabletEvent::RotationStylus
};

static const char * const qtscript_QTabletEvent_TabletDevice_keys[] = {
    "NoDevice"
    , "Puck"
    , "Stylus"
    , "Airbrush"
    , "FourDMouse"
    , "XFreeEraser"
    , "RotationStylus"
};

static QString qtscript_QTabletEvent_TabletDevice_toStringHelper(QTabletEvent::TabletDevice value)
{
    if ((value >= QTabletEvent::NoDevice) && (value <= QTabletEvent::RotationStylus))
        return qtscript_QTabletEvent_TabletDevice_keys[static_cast<int>(value)-static_cast<int>(QTabletEvent::NoDevice)];
    return QString();
}

static QScriptValue qtscript_QTabletEvent_TabletDevice_toScriptValue(QScriptEngine *engine, const QTabletEvent::TabletDevice &value)
{
    QScriptValue clazz = engine->globalObject().property(QString::fromLatin1("QTabletEvent"));
    return clazz.property(qtscript_QTabletEvent_TabletDevice_toStringHelper(value));
}

static void qtscript_QTabletEvent_TabletDevice_fromScriptValue(const QScriptValue &value, QTabletEvent::TabletDevice &out)
{
    out = qvariant_cast<QTabletEvent::TabletDevice>(value.toVariant());
}

static QScriptValue qtscript_construct_QTabletEvent_TabletDevice(QScriptContext *context, QScriptEngine *engine)
{
    int arg = context->argument(0).toInt32();
    if ((arg >= QTabletEvent::NoDevice) && (arg <= QTabletEvent::RotationStylus))
        return qScriptValueFromValue(engine,  static_cast<QTabletEvent::TabletDevice>(arg));
    return context->throwError(QString::fromLatin1("TabletDevice(): invalid enum value (%0)").arg(arg));
}

static QScriptValue qtscript_QTabletEvent_TabletDevice_valueOf(QScriptContext *context, QScriptEngine *engine)
{
    QTabletEvent::TabletDevice value = qscriptvalue_cast<QTabletEvent::TabletDevice>(context->thisObject());
    return QScriptValue(engine, static_cast<int>(value));
}

static QScriptValue qtscript_QTabletEvent_TabletDevice_toString(QScriptContext *context, QScriptEngine *engine)
{
    QTabletEvent::TabletDevice value = qscriptvalue_cast<QTabletEvent::TabletDevice>(context->thisObject());
    return QScriptValue(engine, qtscript_QTabletEvent_TabletDevice_toStringHelper(value));
}

static QScriptValue qtscript_create_QTabletEvent_TabletDevice_class(QScriptEngine *engine, QScriptValue &clazz)
{
    QScriptValue ctor = qtscript_create_enum_class_helper(
        engine, qtscript_construct_QTabletEvent_TabletDevice,
        qtscript_QTabletEvent_TabletDevice_valueOf, qtscript_QTabletEvent_TabletDevice_toString);
    qScriptRegisterMetaType<QTabletEvent::TabletDevice>(engine, qtscript_QTabletEvent_TabletDevice_toScriptValue,
        qtscript_QTabletEvent_TabletDevice_fromScriptValue, ctor.property(QString::fromLatin1("prototype")));
    for (int i = 0; i < 7; ++i) {
        clazz.setProperty(QString::fromLatin1(qtscript_QTabletEvent_TabletDevice_keys[i]),
            engine->newVariant(QVariant::fromValue(qtscript_QTabletEvent_TabletDevice_values[i])),
            QScriptValue::ReadOnly | QScriptValue::Undeletable);
    }
    return ctor;
}

//
// QTabletEvent
//

static QScriptValue qtscript_QTabletEvent_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 21;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QTabletEvent* _q_self = qscriptvalue_cast<QTabletEvent*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QTabletEvent.%0(): this object is not a QTabletEvent")
            .arg(qtscript_QTabletEvent_function_names[_id+1]));
    }

    switch (_id) {
    case 0:
    if (context->argumentCount() == 0) {
        Qt::MouseButton _q_result = _q_self->button();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 1:
    if (context->argumentCount() == 0) {
        QFlags<Qt::MouseButton> _q_result = _q_self->buttons();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 2:
    if (context->argumentCount() == 0) {
        QTabletEvent::TabletDevice _q_result = _q_self->device();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 3:
    if (context->argumentCount() == 0) {
        QPoint _q_result = _q_self->globalPos();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 4:
    if (context->argumentCount() == 0) {
        const QPointF& _q_result = _q_self->globalPosF();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 5:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->globalX();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 6:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->globalY();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 7:
    if (context->argumentCount() == 0) {
        qreal _q_result = _q_self->hiResGlobalX();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 8:
    if (context->argumentCount() == 0) {
        qreal _q_result = _q_self->hiResGlobalY();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 9:
    if (context->argumentCount() == 0) {
        QTabletEvent::PointerType _q_result = _q_self->pointerType();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 10:
    if (context->argumentCount() == 0) {
        QPoint _q_result = _q_self->pos();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 11:
    if (context->argumentCount() == 0) {
        const QPointF& _q_result = _q_self->posF();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 12:
    if (context->argumentCount() == 0) {
        qreal _q_result = _q_self->pressure();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 13:
    if (context->argumentCount() == 0) {
        qreal _q_result = _q_self->rotation();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 14:
    if (context->argumentCount() == 0) {
        qreal _q_result = _q_self->tangentialPressure();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 15:
    if (context->argumentCount() == 0) {
        qint64 _q_result = _q_self->uniqueId();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 16:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->x();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 17:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->xTilt();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 18:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->y();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 19:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->yTilt();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 20:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->z();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 21: {
    QString result = QString::fromLatin1("QTabletEvent");
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QTabletEvent_throw_ambiguity_error_helper(context,
        qtscript_QTabletEvent_function_names[_id+1],
        qtscript_QTabletEvent_function_signatures[_id+1]);
}

static QScriptValue qtscript_QTabletEvent_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QTabletEvent(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 13) {
        QEvent::Type _q_arg0 = qscriptvalue_cast<QEvent::Type>(context->argument(0));
        QPointF _q_arg1 = qscriptvalue_cast<QPointF>(context->argument(1));
        QPointF _q_arg2 = qscriptvalue_cast<QPointF>(context->argument(2));
        int _q_arg3 = context->argument(3).toInt32();
        int _q_arg4 = context->argument(4).toInt32();
        qreal _q_arg5 = qscriptvalue_cast<qreal>(context->argument(5));
        int _q_arg6 = context->argument(6).toInt32();
        int _q_arg7 = context->argument(7).toInt32();
        qreal _q_arg8 = qscriptvalue_cast<qreal>(context->argument(8));
        qreal _q_arg9 = qscriptvalue_cast<qreal>(context->argument(9));
        int _q_arg10 = context->argument(10).toInt32();
        QFlags<Qt::KeyboardModifier> _q_arg11 = qscriptvalue_cast<QFlags<Qt::KeyboardModifier> >(context->argument(11));
        qint64 _q_arg12 = qscriptvalue_cast<qint64>(context->argument(12));
        QtScriptShell_QTabletEvent* _q_cpp_result = new QtScriptShell_QTabletEvent(_q_arg0, _q_arg1, _q_arg2, _q_arg3, _q_arg4, _q_arg5, _q_arg6, _q_arg7, _q_arg8, _q_arg9, _q_arg10, _q_arg11, _q_arg12);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue((QTabletEvent*)_q_cpp_result));
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    } else if (context->argumentCount() == 15) {
        QEvent::Type _q_arg0 = qscriptvalue_cast<QEvent::Type>(context->argument(0));
        QPointF _q_arg1 = qscriptvalue_cast<QPointF>(context->argument(1));
        QPointF _q_arg2 = qscriptvalue_cast<QPointF>(context->argument(2));
        int _q_arg3 = context->argument(3).toInt32();
        int _q_arg4 = context->argument(4).toInt32();
        qreal _q_arg5 = qscriptvalue_cast<qreal>(context->argument(5));
        int _q_arg6 = context->argument(6).toInt32();
        int _q_arg7 = context->argument(7).toInt32();
        qreal _q_arg8 = qscriptvalue_cast<qreal>(context->argument(8));
        qreal _q_arg9 = qscriptvalue_cast<qreal>(context->argument(9));
        int _q_arg10 = context->argument(10).toInt32();
        QFlags<Qt::KeyboardModifier> _q_arg11 = qscriptvalue_cast<QFlags<Qt::KeyboardModifier> >(context->argument(11));
        qint64 _q_arg12 = qscriptvalue_cast<qint64>(context->argument(12));
        Qt::MouseButton _q_arg13 = qscriptvalue_cast<Qt::MouseButton>(context->argument(13));
        QFlags<Qt::MouseButton> _q_arg14 = qscriptvalue_cast<QFlags<Qt::MouseButton> >(context->argument(14));
        QtScriptShell_QTabletEvent* _q_cpp_result = new QtScriptShell_QTabletEvent(_q_arg0, _q_arg1, _q_arg2, _q_arg3, _q_arg4, _q_arg5, _q_arg6, _q_arg7, _q_arg8, _q_arg9, _q_arg10, _q_arg11, _q_arg12, _q_arg13, _q_arg14);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue((QTabletEvent*)_q_cpp_result));
        _q_cpp_result->__qtscript_self = _q_result;
        return _q_result;
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QTabletEvent_throw_ambiguity_error_helper(context,
        qtscript_QTabletEvent_function_names[_id],
        qtscript_QTabletEvent_function_signatures[_id]);
}

QScriptValue qtscript_create_QTabletEvent_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QTabletEvent*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QTabletEvent*)0));
    proto.setPrototype(engine->defaultPrototype(qMetaTypeId<QInputEvent*>()));
    for (int i = 0; i < 22; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QTabletEvent_prototype_call, qtscript_QTabletEvent_function_lengths[i+1]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i)));
        proto.setProperty(QString::fromLatin1(qtscript_QTabletEvent_function_names[i+1]),
            fun, QScriptValue::SkipInEnumeration);
    }

    engine->setDefaultPrototype(qMetaTypeId<QTabletEvent*>(), proto);

    QScriptValue ctor = engine->newFunction(qtscript_QTabletEvent_static_call, proto, qtscript_QTabletEvent_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));

    ctor.setProperty(QString::fromLatin1("TabletDevice"),
        qtscript_create_QTabletEvent_TabletDevice_class(engine, ctor));
    return ctor;
}
