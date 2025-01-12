#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>
#include <__package_shared.h>

#include <qpolygon.h>
#include <QVariant>
#include <qlist.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qvector.h>

static const char * const qtscript_QPolygonF_function_names[] = {
    "QPolygonF"
    // static
    , "fromList"
    // prototype
    , "append"
    , "at"
    , "boundingRect"
    , "capacity"
    , "clear"
    , "constFirst"
    , "constLast"
    , "contains"
    , "containsPoint"
    , "count"
    , "empty"
    , "endsWith"
    , "fill"
    , "first"
    , "indexOf"
    , "intersected"
    , "isClosed"
    , "isEmpty"
    , "isSharedWith"
    , "last"
    , "lastIndexOf"
    , "length"
    , "mid"
    , "move"
    , "operator_assign"
    , "equals"
    , "pop_back"
    , "pop_front"
    , "prepend"
    , "push_back"
    , "push_front"
    , "remove"
    , "removeAll"
    , "removeAt"
    , "removeFirst"
    , "removeLast"
    , "removeOne"
    , "replace"
    , "reserve"
    , "resize"
    , "setSharable"
    , "size"
    , "squeeze"
    , "startsWith"
    , "subtracted"
    , "swap"
    , "takeAt"
    , "takeFirst"
    , "takeLast"
    , "toList"
    , "toPolygon"
    , "translate"
    , "translated"
    , "united"
    , "value"
    , "toString"
};

static const char * const qtscript_QPolygonF_function_signatures[] = {
    "\nQPolygon a\nQPolygonF a\nQRectF r\nList v\nint size"
    // static
    , "List list"
    // prototype
    , "QPointF t\nList l"
    , "int i"
    , ""
    , ""
    , ""
    , ""
    , ""
    , "QPointF t"
    , "QPointF pt, FillRule fillRule"
    , "\nQPointF t"
    , ""
    , "QPointF t"
    , "QPointF t, int size"
    , ""
    , "QPointF t, int from"
    , "QPolygonF r"
    , ""
    , ""
    , "List other"
    , ""
    , "QPointF t, int from"
    , ""
    , "int pos, int len"
    , "int from, int to"
    , "QPolygonF other"
    , "List v"
    , ""
    , ""
    , "QPointF t"
    , "QPointF t"
    , "QPointF t"
    , "int i\nint i, int n"
    , "QPointF t"
    , "int i"
    , ""
    , ""
    , "QPointF t"
    , "int i, QPointF t"
    , "int size"
    , "int size"
    , "bool sharable"
    , ""
    , ""
    , "QPointF t"
    , "QPolygonF r"
    , "QPolygonF other"
    , "int i"
    , ""
    , ""
    , ""
    , ""
    , "QPointF offset\nqreal dx, qreal dy"
    , "QPointF offset\nqreal dx, qreal dy"
    , "QPolygonF r"
    , "int i\nint i, QPointF defaultValue"
""
};

static const int qtscript_QPolygonF_function_lengths[] = {
    1
    // static
    , 1
    // prototype
    , 1
    , 1
    , 0
    , 0
    , 0
    , 0
    , 0
    , 1
    , 2
    , 1
    , 0
    , 1
    , 2
    , 0
    , 2
    , 1
    , 0
    , 0
    , 1
    , 0
    , 2
    , 0
    , 2
    , 2
    , 1
    , 1
    , 0
    , 0
    , 1
    , 1
    , 1
    , 2
    , 1
    , 1
    , 0
    , 0
    , 1
    , 2
    , 1
    , 1
    , 1
    , 0
    , 0
    , 1
    , 1
    , 1
    , 1
    , 0
    , 0
    , 0
    , 0
    , 2
    , 2
    , 1
    , 2
    , 0
};

static QScriptValue qtscript_QPolygonF_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QPolygonF::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QPolygonF*)
Q_DECLARE_METATYPE(QVector<QPointF >)
Q_DECLARE_METATYPE(Qt::FillRule)
Q_DECLARE_METATYPE(QList<QPointF >)

//
// QPolygonF
//

static QScriptValue qtscript_QPolygonF_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 55;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QPolygonF* _q_self = qscriptvalue_cast<QPolygonF*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QPolygonF.%0(): this object is not a QPolygonF")
            .arg(qtscript_QPolygonF_function_names[_id+2]));
    }

    switch (_id) {
    case 0:
    if (context->argumentCount() == 1) {
        if ((qMetaTypeId<QPointF>() == context->argument(0).toVariant().userType())) {
            QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
            _q_self->append(_q_arg0);
            return context->engine()->undefinedValue();
        } else if (context->argument(0).isArray()) {
            QVector<QPointF> _q_arg0;
            qScriptValueToSequence(context->argument(0), _q_arg0);
            _q_self->append(_q_arg0);
            return context->engine()->undefinedValue();
        }
    }
    break;

    case 1:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        const QPointF& _q_result = _q_self->at(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 2:
    if (context->argumentCount() == 0) {
        QRectF _q_result = _q_self->boundingRect();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 3:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->capacity();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 4:
    if (context->argumentCount() == 0) {
        _q_self->clear();
        return context->engine()->undefinedValue();
    }
    break;

    case 5:
    if (context->argumentCount() == 0) {
        const QPointF& _q_result = _q_self->constFirst();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 6:
    if (context->argumentCount() == 0) {
        const QPointF& _q_result = _q_self->constLast();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 7:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        bool _q_result = _q_self->contains(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 8:
    if (context->argumentCount() == 2) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        Qt::FillRule _q_arg1 = qscriptvalue_cast<Qt::FillRule>(context->argument(1));
        bool _q_result = _q_self->containsPoint(_q_arg0, _q_arg1);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 9:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->count();
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        int _q_result = _q_self->count(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 10:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->empty();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 11:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        bool _q_result = _q_self->endsWith(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 12:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        QVector<QPointF >& _q_result = _q_self->fill(_q_arg0);
        return qScriptValueFromSequence(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        int _q_arg1 = context->argument(1).toInt32();
        QVector<QPointF >& _q_result = _q_self->fill(_q_arg0, _q_arg1);
        return qScriptValueFromSequence(context->engine(), _q_result);
    }
    break;

    case 13:
    if (context->argumentCount() == 0) {
        const QPointF& _q_result = _q_self->first();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 14:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        int _q_result = _q_self->indexOf(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        int _q_arg1 = context->argument(1).toInt32();
        int _q_result = _q_self->indexOf(_q_arg0, _q_arg1);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 15:
    if (context->argumentCount() == 1) {
        QPolygonF _q_arg0 = qscriptvalue_cast<QPolygonF>(context->argument(0));
        QPolygonF _q_result = _q_self->intersected(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 16:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->isClosed();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 17:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->isEmpty();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 18:
    if (context->argumentCount() == 1) {
        QVector<QPointF> _q_arg0;
        qScriptValueToSequence(context->argument(0), _q_arg0);
        bool _q_result = _q_self->isSharedWith(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 19:
    if (context->argumentCount() == 0) {
        const QPointF& _q_result = _q_self->last();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 20:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        int _q_result = _q_self->lastIndexOf(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        int _q_arg1 = context->argument(1).toInt32();
        int _q_result = _q_self->lastIndexOf(_q_arg0, _q_arg1);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 21:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->length();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 22:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        QVector<QPointF > _q_result = _q_self->mid(_q_arg0);
        return qScriptValueFromSequence(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        int _q_arg0 = context->argument(0).toInt32();
        int _q_arg1 = context->argument(1).toInt32();
        QVector<QPointF > _q_result = _q_self->mid(_q_arg0, _q_arg1);
        return qScriptValueFromSequence(context->engine(), _q_result);
    }
    break;

    case 23:
    if (context->argumentCount() == 2) {
        int _q_arg0 = context->argument(0).toInt32();
        int _q_arg1 = context->argument(1).toInt32();
        _q_self->move(_q_arg0, _q_arg1);
        return context->engine()->undefinedValue();
    }
    break;

    case 24:
    if (context->argumentCount() == 1) {
        QPolygonF _q_arg0 = qscriptvalue_cast<QPolygonF>(context->argument(0));
        QPolygonF& _q_result = _q_self->operator=(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 25:
    if (context->argumentCount() == 1) {
        QVector<QPointF> _q_arg0;
        qScriptValueToSequence(context->argument(0), _q_arg0);
        bool _q_result = _q_self->operator==(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 26:
    if (context->argumentCount() == 0) {
        _q_self->pop_back();
        return context->engine()->undefinedValue();
    }
    break;

    case 27:
    if (context->argumentCount() == 0) {
        _q_self->pop_front();
        return context->engine()->undefinedValue();
    }
    break;

    case 28:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        _q_self->prepend(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 29:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        _q_self->push_back(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 30:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        _q_self->push_front(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 31:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        _q_self->remove(_q_arg0);
        return context->engine()->undefinedValue();
    }
    if (context->argumentCount() == 2) {
        int _q_arg0 = context->argument(0).toInt32();
        int _q_arg1 = context->argument(1).toInt32();
        _q_self->remove(_q_arg0, _q_arg1);
        return context->engine()->undefinedValue();
    }
    break;

    case 32:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        int _q_result = _q_self->removeAll(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 33:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        _q_self->removeAt(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 34:
    if (context->argumentCount() == 0) {
        _q_self->removeFirst();
        return context->engine()->undefinedValue();
    }
    break;

    case 35:
    if (context->argumentCount() == 0) {
        _q_self->removeLast();
        return context->engine()->undefinedValue();
    }
    break;

    case 36:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        bool _q_result = _q_self->removeOne(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 37:
    if (context->argumentCount() == 2) {
        int _q_arg0 = context->argument(0).toInt32();
        QPointF _q_arg1 = qscriptvalue_cast<QPointF>(context->argument(1));
        _q_self->replace(_q_arg0, _q_arg1);
        return context->engine()->undefinedValue();
    }
    break;

    case 38:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        _q_self->reserve(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 39:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        _q_self->resize(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 40:
    if (context->argumentCount() == 1) {
        bool _q_arg0 = context->argument(0).toBoolean();
        _q_self->setSharable(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 41:
    if (context->argumentCount() == 0) {
        int _q_result = _q_self->size();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 42:
    if (context->argumentCount() == 0) {
        _q_self->squeeze();
        return context->engine()->undefinedValue();
    }
    break;

    case 43:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        bool _q_result = _q_self->startsWith(_q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 44:
    if (context->argumentCount() == 1) {
        QPolygonF _q_arg0 = qscriptvalue_cast<QPolygonF>(context->argument(0));
        QPolygonF _q_result = _q_self->subtracted(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 45:
    if (context->argumentCount() == 1) {
        QPolygonF _q_arg0 = qscriptvalue_cast<QPolygonF>(context->argument(0));
        _q_self->swap(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 46:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        QPointF _q_result = _q_self->takeAt(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 47:
    if (context->argumentCount() == 0) {
        QPointF _q_result = _q_self->takeFirst();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 48:
    if (context->argumentCount() == 0) {
        QPointF _q_result = _q_self->takeLast();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 49:
    if (context->argumentCount() == 0) {
        QList<QPointF > _q_result = _q_self->toList();
        return qScriptValueFromSequence(context->engine(), _q_result);
    }
    break;

    case 50:
    if (context->argumentCount() == 0) {
        QPolygon _q_result = _q_self->toPolygon();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 51:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        _q_self->translate(_q_arg0);
        return context->engine()->undefinedValue();
    }
    if (context->argumentCount() == 2) {
        qreal _q_arg0 = qscriptvalue_cast<qreal>(context->argument(0));
        qreal _q_arg1 = qscriptvalue_cast<qreal>(context->argument(1));
        _q_self->translate(_q_arg0, _q_arg1);
        return context->engine()->undefinedValue();
    }
    break;

    case 52:
    if (context->argumentCount() == 1) {
        QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
        QPolygonF _q_result = _q_self->translated(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        qreal _q_arg0 = qscriptvalue_cast<qreal>(context->argument(0));
        qreal _q_arg1 = qscriptvalue_cast<qreal>(context->argument(1));
        QPolygonF _q_result = _q_self->translated(_q_arg0, _q_arg1);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 53:
    if (context->argumentCount() == 1) {
        QPolygonF _q_arg0 = qscriptvalue_cast<QPolygonF>(context->argument(0));
        QPolygonF _q_result = _q_self->united(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 54:
    if (context->argumentCount() == 1) {
        int _q_arg0 = context->argument(0).toInt32();
        QPointF _q_result = _q_self->value(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    if (context->argumentCount() == 2) {
        int _q_arg0 = context->argument(0).toInt32();
        QPointF _q_arg1 = qscriptvalue_cast<QPointF>(context->argument(1));
        QPointF _q_result = _q_self->value(_q_arg0, _q_arg1);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 55: {
    QString result;
    QDebug d(&result);
    d << *_q_self;
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QPolygonF_throw_ambiguity_error_helper(context,
        qtscript_QPolygonF_function_names[_id+2],
        qtscript_QPolygonF_function_signatures[_id+2]);
}

static QScriptValue qtscript_QPolygonF_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QPolygonF(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QPolygonF _q_cpp_result;
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
        return _q_result;
    } else if (context->argumentCount() == 1) {
        if ((qMetaTypeId<QPolygon>() == context->argument(0).toVariant().userType())) {
            QPolygon _q_arg0 = qscriptvalue_cast<QPolygon>(context->argument(0));
            QPolygonF _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        } else if ((qMetaTypeId<QPolygonF>() == context->argument(0).toVariant().userType())) {
            QPolygonF _q_arg0 = qscriptvalue_cast<QPolygonF>(context->argument(0));
            QPolygonF _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        } else if ((qMetaTypeId<QRectF>() == context->argument(0).toVariant().userType())) {
            QRectF _q_arg0 = qscriptvalue_cast<QRectF>(context->argument(0));
            QPolygonF _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        } else if (context->argument(0).isArray()) {
            QVector<QPointF> _q_arg0;
            qScriptValueToSequence(context->argument(0), _q_arg0);
            QPolygonF _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        } else if (context->argument(0).isNumber()) {
            int _q_arg0 = context->argument(0).toInt32();
            QPolygonF _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        }
    }
    break;

    case 1:
    if (context->argumentCount() == 1) {
        QList<QPointF> _q_arg0;
        qScriptValueToSequence(context->argument(0), _q_arg0);
        QVector<QPointF > _q_result = QPolygonF::fromList(_q_arg0);
        return qScriptValueFromSequence(context->engine(), _q_result);
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QPolygonF_throw_ambiguity_error_helper(context,
        qtscript_QPolygonF_function_names[_id],
        qtscript_QPolygonF_function_signatures[_id]);
}

QScriptValue qtscript_create_QPolygonF_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QPolygonF*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QPolygonF*)0));
    for (int i = 0; i < 56; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QPolygonF_prototype_call, qtscript_QPolygonF_function_lengths[i+2]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i)));
        proto.setProperty(QString::fromLatin1(qtscript_QPolygonF_function_names[i+2]),
            fun, QScriptValue::SkipInEnumeration);
    }

    engine->setDefaultPrototype(qMetaTypeId<QPolygonF>(), proto);
    engine->setDefaultPrototype(qMetaTypeId<QPolygonF*>(), proto);

    QScriptValue ctor = engine->newFunction(qtscript_QPolygonF_static_call, proto, qtscript_QPolygonF_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));
    for (int i = 0; i < 1; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QPolygonF_static_call,
            qtscript_QPolygonF_function_lengths[i+1]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i+1)));
        ctor.setProperty(QString::fromLatin1(qtscript_QPolygonF_function_names[i+1]),
            fun, QScriptValue::SkipInEnumeration);
    }

    return ctor;
}
