#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>
#include <__package_shared.h>

#include <qdatetime.h>
#include <QVariant>
#include <qdatetime.h>

static const char * const qtscript_QDateTime_function_names[] = {
    "QDateTime"
    // static
    , "currentDateTime"
    , "currentDateTimeUtc"
    , "currentMSecsSinceEpoch"
    , "fromMSecsSinceEpoch"
    , "fromString"
    , "fromTime_t"
    // prototype
    , "addDays"
    , "addMSecs"
    , "addMonths"
    , "addSecs"
    , "addYears"
    , "date"
    , "daysTo"
    , "isDaylightTime"
    , "isNull"
    , "isValid"
    , "msecsTo"
    , "offsetFromUtc"
    , "equals"
    , "operator_less"
    , "secsTo"
    , "setDate"
    , "setMSecsSinceEpoch"
    , "setOffsetFromUtc"
    , "setTime"
    , "setTimeSpec"
    , "setTime_t"
    , "setUtcOffset"
    , "swap"
    , "time"
    , "timeSpec"
    , "timeZoneAbbreviation"
    , "toLocalTime"
    , "toMSecsSinceEpoch"
    , "toOffsetFromUtc"
    , "toString"
    , "toTimeSpec"
    , "toTime_t"
    , "toUTC"
    , "utcOffset"
};

static const char * const qtscript_QDateTime_function_signatures[] = {
    "\nQDate arg__1\nQDate arg__1, QTime arg__2, TimeSpec spec\nQDate date, QTime time, TimeSpec spec, int offsetSeconds\nQDateTime other"
    // static
    , ""
    , ""
    , ""
    , "qint64 msecs\nqint64 msecs, TimeSpec spec, int offsetFromUtc"
    , "String s, DateFormat f\nString s, String format"
    , "uint secsSince1Jan1970UTC\nuint secsSince1Jan1970UTC, TimeSpec spec, int offsetFromUtc"
    // prototype
    , "qint64 days"
    , "qint64 msecs"
    , "int months"
    , "qint64 secs"
    , "int years"
    , ""
    , "QDateTime arg__1"
    , ""
    , ""
    , ""
    , "QDateTime arg__1"
    , ""
    , "QDateTime other"
    , "QDateTime other"
    , "QDateTime arg__1"
    , "QDate date"
    , "qint64 msecs"
    , "int offsetSeconds"
    , "QTime time"
    , "TimeSpec spec"
    , "uint secsSince1Jan1970UTC"
    , "int seconds"
    , "QDateTime other"
    , ""
    , ""
    , ""
    , ""
    , ""
    , "int offsetSeconds"
    , "DateFormat f\nString format"
    , "TimeSpec spec"
    , ""
    , ""
    , ""
};

static const int qtscript_QDateTime_function_lengths[] = {
    4
    // static
    , 0
    , 0
    , 0
    , 3
    , 2
    , 3
    // prototype
    , 1
    , 1
    , 1
    , 1
    , 1
    , 0
    , 1
    , 0
    , 0
    , 0
    , 1
    , 0
    , 1
    , 1
    , 1
    , 1
    , 1
    , 1
    , 1
    , 1
    , 1
    , 1
    , 1
    , 0
    , 0
    , 0
    , 0
    , 0
    , 1
    , 1
    , 1
    , 0
    , 0
    , 0
};

static QScriptValue qtscript_QDateTime_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QDateTime::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QDateTime*)
Q_DECLARE_METATYPE(Qt::TimeSpec)
Q_DECLARE_METATYPE(Qt::DateFormat)

//
// QDateTime
//

static QScriptValue qtscript_QDateTime_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 34;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QDateTime* _q_self = qscriptvalue_cast<QDateTime*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QDateTime.%0(): this object is not a QDateTime")
            .arg(qtscript_QDateTime_function_names[_id+7]));
    }

    switch (_id) {
    case 0:
    if (context->argumentCount() == 1) {
        qint64 _q_arg0 = qscriptvalue_cast<qint64>(context->argument(0));
        QDateTime _q_result = _q_self->addDays(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 1:
    if (context->argumentCount() == 1) {
        qint64 _q_arg0 = qscriptvalue_cast<qint64>(context->argument(0));
        QDateTime _q_result = _q_self->addMSecs(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 2:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        QDateTime _q_result = _q_self->addMonths(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 3:
    if (context->argumentCount() == 1) {
        qint64 _q_arg0 = qscriptvalue_cast<qint64>(context->argument(0));
        QDateTime _q_result = _q_self->addSecs(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 4:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        QDateTime _q_result = _q_self->addYears(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 5:
    if (context->argumentCount() == 0) {
        QDate _q_result = _q_self->date();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 6:
    if (context->argumentCount() == 1) {
        QDateTime _q_arg0 = context->argument(0).toDateTime();
        qint64 _q_result = _q_self->daysTo(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 7:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->isDaylightTime();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 8:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->isNull();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 9:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->isValid();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 10:
    if (context->argumentCount() == 1) {
        QDateTime _q_arg0 = context->argument(0).toDateTime();
        qint64 _q_result = _q_self->msecsTo(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 11:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->offsetFromUtc();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 12:
    if (context->argumentCount() == 1) {
        QDateTime _q_arg0 = context->argument(0).toDateTime();
        bool _q_result = _q_self->operator==(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 13:
    if (context->argumentCount() == 1) {
        QDateTime _q_arg0 = context->argument(0).toDateTime();
        bool _q_result = _q_self->operator<(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 14:
    if (context->argumentCount() == 1) {
        QDateTime _q_arg0 = context->argument(0).toDateTime();
        qint64 _q_result = _q_self->secsTo(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 15:
    if (context->argumentCount() == 1) {
        QDate _q_arg0 = qscriptvalue_cast<QDate>(context->argument(0));
        _q_self->setDate(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 16:
    if (context->argumentCount() == 1) {
        qint64 _q_arg0 = qscriptvalue_cast<qint64>(context->argument(0));
        _q_self->setMSecsSinceEpoch(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 17:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        _q_self->setOffsetFromUtc(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 18:
    if (context->argumentCount() == 1) {
        QTime _q_arg0 = qscriptvalue_cast<QTime>(context->argument(0));
        _q_self->setTime(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 19:
    if (context->argumentCount() == 1) {
        Qt::TimeSpec _q_arg0 = qscriptvalue_cast<Qt::TimeSpec>(context->argument(0));
        _q_self->setTimeSpec(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 20:
    if (context->argumentCount() == 1) {
        uint _q_arg0 = context->argument(0).toUInt32();
        _q_self->setTime_t(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 21:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        _q_self->setUtcOffset(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 22:
    if (context->argumentCount() == 1) {
        QDateTime _q_arg0 = context->argument(0).toDateTime();
        _q_self->swap(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 23:
    if (context->argumentCount() == 0) {
        QTime _q_result = _q_self->time();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 24:
    if (context->argumentCount() == 0) {
        Qt::TimeSpec _q_result = _q_self->timeSpec();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 25:
    if (context->argumentCount() == 0) {
        QString _q_result = _q_self->timeZoneAbbreviation();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 26:
    if (context->argumentCount() == 0) {
        QDateTime _q_result = _q_self->toLocalTime();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 27:
    if (context->argumentCount() == 0) {
        qint64 _q_result = _q_self->toMSecsSinceEpoch();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 28:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        QDateTime _q_result = _q_self->toOffsetFromUtc(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 29:
    if (context->argumentCount() == 0) {
        QString _q_result = _q_self->toString();
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 1) {
        if ((qMetaTypeId<Qt::DateFormat>() == context->argument(0).toVariant().userType())) {
            Qt::DateFormat _q_arg0 = qscriptvalue_cast<Qt::DateFormat>(context->argument(0));
            QString _q_result = _q_self->toString(_q_arg0);
            return QScriptValue(context->engine(), _q_result);
        } else if (context->argument(0).isString()) {
            QString _q_arg0 = context->argument(0).toString();
            QString _q_result = _q_self->toString(_q_arg0);
            return QScriptValue(context->engine(), _q_result);
        }
    }
    break;

    case 30:
    if (context->argumentCount() == 1) {
        Qt::TimeSpec _q_arg0 = qscriptvalue_cast<Qt::TimeSpec>(context->argument(0));
        QDateTime _q_result = _q_self->toTimeSpec(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 31:
    if (context->argumentCount() == 0) {
        uint _q_result = _q_self->toTime_t();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 32:
    if (context->argumentCount() == 0) {
        QDateTime _q_result = _q_self->toUTC();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 33:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->utcOffset();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QDateTime_throw_ambiguity_error_helper(context,
        qtscript_QDateTime_function_names[_id+7],
        qtscript_QDateTime_function_signatures[_id+7]);
}

static QScriptValue qtscript_QDateTime_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QDateTime(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QDateTime _q_cpp_result;
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
        return _q_result;
    } else if (context->argumentCount() == 1) {
        if ((qMetaTypeId<QDate>() == context->argument(0).toVariant().userType())) {
            QDate _q_arg0 = qscriptvalue_cast<QDate>(context->argument(0));
            QDateTime _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        } else if ((qMetaTypeId<QDateTime>() == context->argument(0).toVariant().userType())) {
            QDateTime _q_arg0 = context->argument(0).toDateTime();
            QDateTime _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        }
    } else if (context->argumentCount() == 2) {
        QDate _q_arg0 = qscriptvalue_cast<QDate>(context->argument(0));
        QTime _q_arg1 = qscriptvalue_cast<QTime>(context->argument(1));
        QDateTime _q_cpp_result(_q_arg0, _q_arg1);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
        return _q_result;
    } else if (context->argumentCount() == 3) {
        QDate _q_arg0 = qscriptvalue_cast<QDate>(context->argument(0));
        QTime _q_arg1 = qscriptvalue_cast<QTime>(context->argument(1));
        Qt::TimeSpec _q_arg2 = qscriptvalue_cast<Qt::TimeSpec>(context->argument(2));
        QDateTime _q_cpp_result(_q_arg0, _q_arg1, _q_arg2);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
        return _q_result;
    } else if (context->argumentCount() == 4) {
        QDate _q_arg0 = qscriptvalue_cast<QDate>(context->argument(0));
        QTime _q_arg1 = qscriptvalue_cast<QTime>(context->argument(1));
        Qt::TimeSpec _q_arg2 = qscriptvalue_cast<Qt::TimeSpec>(context->argument(2));
        int _q_arg3 = context->argument(3).toInt32();
        QDateTime _q_cpp_result(_q_arg0, _q_arg1, _q_arg2, _q_arg3);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
        return _q_result;
    }
    break;

    case 1:
    if (context->argumentCount() == 0) {
        QDateTime _q_result = QDateTime::currentDateTime();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 2:
    if (context->argumentCount() == 0) {
        QDateTime _q_result = QDateTime::currentDateTimeUtc();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 3:
    if (context->argumentCount() == 0) {
        qint64 _q_result = QDateTime::currentMSecsSinceEpoch();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 4:
    if (context->argumentCount() == 1) {
        qint64 _q_arg0 = qscriptvalue_cast<qint64>(context->argument(0));
        QDateTime _q_result = QDateTime::fromMSecsSinceEpoch(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        qint64 _q_arg0 = qscriptvalue_cast<qint64>(context->argument(0));
        Qt::TimeSpec _q_arg1 = qscriptvalue_cast<Qt::TimeSpec>(context->argument(1));
        QDateTime _q_result = QDateTime::fromMSecsSinceEpoch(_q_arg0, _q_arg1);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 3) {
        qint64 _q_arg0 = qscriptvalue_cast<qint64>(context->argument(0));
        Qt::TimeSpec _q_arg1 = qscriptvalue_cast<Qt::TimeSpec>(context->argument(1));
        int _q_arg2 = context->argument(2).toInt32();
        QDateTime _q_result = QDateTime::fromMSecsSinceEpoch(_q_arg0, _q_arg1, _q_arg2);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 5:
    if (context->argumentCount() == 1) {
        QString _q_arg0 = context->argument(0).toString();
        QDateTime _q_result = QDateTime::fromString(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        if (context->argument(0).isString()
            && (qMetaTypeId<Qt::DateFormat>() == context->argument(1).toVariant().userType())) {
            QString _q_arg0 = context->argument(0).toString();
            Qt::DateFormat _q_arg1 = qscriptvalue_cast<Qt::DateFormat>(context->argument(1));
            QDateTime _q_result = QDateTime::fromString(_q_arg0, _q_arg1);
            return qScriptValueFromValue(context->engine(), _q_result);
        } else if (context->argument(0).isString()
            && context->argument(1).isString()) {
            QString _q_arg0 = context->argument(0).toString();
            QString _q_arg1 = context->argument(1).toString();
            QDateTime _q_result = QDateTime::fromString(_q_arg0, _q_arg1);
            return qScriptValueFromValue(context->engine(), _q_result);
        }
    }
    break;

    case 6:
    if (context->argumentCount() == 1) {
        uint _q_arg0 = context->argument(0).toUInt32();
        QDateTime _q_result = QDateTime::fromTime_t(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        uint _q_arg0 = context->argument(0).toUInt32();
        Qt::TimeSpec _q_arg1 = qscriptvalue_cast<Qt::TimeSpec>(context->argument(1));
        QDateTime _q_result = QDateTime::fromTime_t(_q_arg0, _q_arg1);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 3) {
        uint _q_arg0 = context->argument(0).toUInt32();
        Qt::TimeSpec _q_arg1 = qscriptvalue_cast<Qt::TimeSpec>(context->argument(1));
        int _q_arg2 = context->argument(2).toInt32();
        QDateTime _q_result = QDateTime::fromTime_t(_q_arg0, _q_arg1, _q_arg2);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QDateTime_throw_ambiguity_error_helper(context,
        qtscript_QDateTime_function_names[_id],
        qtscript_QDateTime_function_signatures[_id]);
}

QScriptValue qtscript_create_QDateTime_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QDateTime*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QDateTime*)0));
    for (int i = 0; i < 34; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QDateTime_prototype_call, qtscript_QDateTime_function_lengths[i+7]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i)));
        proto.setProperty(QString::fromLatin1(qtscript_QDateTime_function_names[i+7]),
            fun, QScriptValue::SkipInEnumeration);
    }

    engine->setDefaultPrototype(qMetaTypeId<QDateTime>(), proto);
    engine->setDefaultPrototype(qMetaTypeId<QDateTime*>(), proto);

    QScriptValue ctor = engine->newFunction(qtscript_QDateTime_static_call, proto, qtscript_QDateTime_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));
    for (int i = 0; i < 6; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QDateTime_static_call,
            qtscript_QDateTime_function_lengths[i+1]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i+1)));
        ctor.setProperty(QString::fromLatin1(qtscript_QDateTime_function_names[i+1]),
            fun, QScriptValue::SkipInEnumeration);
    }

    return ctor;
}
