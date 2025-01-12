#include <QtScript/QScriptEngine>
#include <QtScript/QScriptContext>
#include <QtScript/QScriptValue>
#include <QtCore/QStringList>
#include <QtCore/QDebug>
#include <qmetaobject.h>
#include <__package_shared.h>

#include <qvector4d.h>
#include <QVariant>
#include <qpoint.h>
#include <qvector2d.h>
#include <qvector3d.h>
#include <qvector4d.h>

static const char * const qtscript_QVector4D_function_names[] = {
    "QVector4D"
    // static
    , "dotProduct"
    // prototype
    , "isNull"
    , "length"
    , "lengthSquared"
    , "normalize"
    , "normalized"
    , "operator_add_assign"
    , "operator_divide_assign"
    , "equals"
    , "operator_multiply_assign"
    , "operator_subscript"
    , "operator_subtract_assign"
    , "setW"
    , "setX"
    , "setY"
    , "setZ"
    , "toPoint"
    , "toPointF"
    , "toVector2D"
    , "toVector2DAffine"
    , "toVector3D"
    , "toVector3DAffine"
    , "w"
    , "x"
    , "y"
    , "z"
    , "toString"
};

static const char * const qtscript_QVector4D_function_signatures[] = {
    "\nQPoint point\nQPointF point\nQVector2D vector\nQVector2D vector, float zpos, float wpos\nQVector3D vector\nQVector3D vector, float wpos\nfloat xpos, float ypos, float zpos, float wpos"
    // static
    , "QVector4D v1, QVector4D v2"
    // prototype
    , ""
    , ""
    , ""
    , ""
    , ""
    , "QVector4D vector"
    , "QVector4D vector\nfloat divisor"
    , "QVector4D v2"
    , "QVector4D vector\nfloat factor"
    , "int i\nint i"
    , "QVector4D vector"
    , "float w"
    , "float x"
    , "float y"
    , "float z"
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

static const int qtscript_QVector4D_function_lengths[] = {
    4
    // static
    , 2
    // prototype
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
    , 1
    , 1
    , 1
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
};

static QScriptValue qtscript_QVector4D_throw_ambiguity_error_helper(
    QScriptContext *context, const char *functionName, const char *signatures)
{
    QStringList lines = QString::fromLatin1(signatures).split(QLatin1Char('\n'));
    QStringList fullSignatures;
    for (int i = 0; i < lines.size(); ++i)
        fullSignatures.append(QString::fromLatin1("%0(%1)").arg(functionName).arg(lines.at(i)));
    return context->throwError(QString::fromLatin1("QVector4D::%0(): could not find a function match; candidates are:\n%1")
        .arg(functionName).arg(fullSignatures.join(QLatin1String("\n"))));
}

Q_DECLARE_METATYPE(QVector4D*)

//
// QVector4D
//

static QScriptValue qtscript_QVector4D_prototype_call(QScriptContext *context, QScriptEngine *)
{
#if QT_VERSION > 0x040400
    Q_ASSERT(context->callee().isFunction());
    uint _id = context->callee().data().toUInt32();
#else
    uint _id;
    if (context->callee().isFunction())
        _id = context->callee().data().toUInt32();
    else
        _id = 0xBABE0000 + 25;
#endif
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    QVector4D* _q_self = qscriptvalue_cast<QVector4D*>(context->thisObject());
    if (!_q_self) {
        return context->throwError(QScriptContext::TypeError,
            QString::fromLatin1("QVector4D.%0(): this object is not a QVector4D")
            .arg(qtscript_QVector4D_function_names[_id+2]));
    }

    switch (_id) {
    case 0:
    if (context->argumentCount() == 0) {
        bool _q_result = _q_self->isNull();
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 1:
    if (context->argumentCount() == 0) {
        float _q_result = _q_self->length();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 2:
    if (context->argumentCount() == 0) {
        float _q_result = _q_self->lengthSquared();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 3:
    if (context->argumentCount() == 0) {
        _q_self->normalize();
        return context->engine()->undefinedValue();
    }
    break;

    case 4:
    if (context->argumentCount() == 0) {
        QVector4D _q_result = _q_self->normalized();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 5:
    if (context->argumentCount() == 1) {
        QVector4D _q_arg0 = qscriptvalue_cast<QVector4D>(context->argument(0));
        QVector4D& _q_result = _q_self->operator+=(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 6:
    if (context->argumentCount() == 1) {
        if ((qMetaTypeId<QVector4D>() == context->argument(0).toVariant().userType())) {
            QVector4D _q_arg0 = qscriptvalue_cast<QVector4D>(context->argument(0));
            QVector4D& _q_result = _q_self->operator/=(_q_arg0);
            return qScriptValueFromValue(context->engine(), _q_result);
        } else if (context->argument(0).isNumber()) {
            float _q_arg0 = qscriptvalue_cast<float>(context->argument(0));
            QVector4D& _q_result = _q_self->operator/=(_q_arg0);
            return qScriptValueFromValue(context->engine(), _q_result);
        }
    }
    break;

    case 7:
    if (context->argumentCount() == 1) {
        QVector4D _q_arg0 = qscriptvalue_cast<QVector4D>(context->argument(0));
        bool _q_result = operator==(*_q_self, _q_arg0);
        return QScriptValue(context->engine(), _q_result);
    }
    break;

    case 8:
    if (context->argumentCount() == 1) {
        if ((qMetaTypeId<QVector4D>() == context->argument(0).toVariant().userType())) {
            QVector4D _q_arg0 = qscriptvalue_cast<QVector4D>(context->argument(0));
            QVector4D& _q_result = _q_self->operator*=(_q_arg0);
            return qScriptValueFromValue(context->engine(), _q_result);
        } else if (context->argument(0).isNumber()) {
            float _q_arg0 = qscriptvalue_cast<float>(context->argument(0));
            QVector4D& _q_result = _q_self->operator*=(_q_arg0);
            return qScriptValueFromValue(context->engine(), _q_result);
        }
    }
    break;

    case 9:
    if (context->argumentCount() == 1) {
        if (context->argument(0).isNumber()) {
            int _q_arg0 = context->argument(0).toInt32();
            float& _q_result = _q_self->operator[](_q_arg0);
            return qScriptValueFromValue(context->engine(), _q_result);
        } else if (context->argument(0).isNumber()) {
            int _q_arg0 = context->argument(0).toInt32();
            float _q_result = _q_self->operator[](_q_arg0);
            return qScriptValueFromValue(context->engine(), _q_result);
        }
    }
    break;

    case 10:
    if (context->argumentCount() == 1) {
        QVector4D _q_arg0 = qscriptvalue_cast<QVector4D>(context->argument(0));
        QVector4D& _q_result = _q_self->operator-=(_q_arg0);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 11:
    if (context->argumentCount() == 1) {
        float _q_arg0 = qscriptvalue_cast<float>(context->argument(0));
        _q_self->setW(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 12:
    if (context->argumentCount() == 1) {
        float _q_arg0 = qscriptvalue_cast<float>(context->argument(0));
        _q_self->setX(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 13:
    if (context->argumentCount() == 1) {
        float _q_arg0 = qscriptvalue_cast<float>(context->argument(0));
        _q_self->setY(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 14:
    if (context->argumentCount() == 1) {
        float _q_arg0 = qscriptvalue_cast<float>(context->argument(0));
        _q_self->setZ(_q_arg0);
        return context->engine()->undefinedValue();
    }
    break;

    case 15:
    if (context->argumentCount() == 0) {
        QPoint _q_result = _q_self->toPoint();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 16:
    if (context->argumentCount() == 0) {
        QPointF _q_result = _q_self->toPointF();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 17:
    if (context->argumentCount() == 0) {
        QVector2D _q_result = _q_self->toVector2D();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 18:
    if (context->argumentCount() == 0) {
        QVector2D _q_result = _q_self->toVector2DAffine();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 19:
    if (context->argumentCount() == 0) {
        QVector3D _q_result = _q_self->toVector3D();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 20:
    if (context->argumentCount() == 0) {
        QVector3D _q_result = _q_self->toVector3DAffine();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 21:
    if (context->argumentCount() == 0) {
        float _q_result = _q_self->w();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 22:
    if (context->argumentCount() == 0) {
        float _q_result = _q_self->x();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 23:
    if (context->argumentCount() == 0) {
        float _q_result = _q_self->y();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 24:
    if (context->argumentCount() == 0) {
        float _q_result = _q_self->z();
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    case 25: {
    QString result;
    QDebug d(&result);
    d << *_q_self;
    return QScriptValue(context->engine(), result);
    }

    default:
    Q_ASSERT(false);
    }
    return qtscript_QVector4D_throw_ambiguity_error_helper(context,
        qtscript_QVector4D_function_names[_id+2],
        qtscript_QVector4D_function_signatures[_id+2]);
}

static QScriptValue qtscript_QVector4D_static_call(QScriptContext *context, QScriptEngine *)
{
    uint _id = context->callee().data().toUInt32();
    Q_ASSERT((_id & 0xFFFF0000) == 0xBABE0000);
    _id &= 0x0000FFFF;
    switch (_id) {
    case 0:
    if (context->thisObject().strictlyEquals(context->engine()->globalObject())) {
        return context->throwError(QString::fromLatin1("QVector4D(): Did you forget to construct with 'new'?"));
    }
    if (context->argumentCount() == 0) {
        QVector4D _q_cpp_result;
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
        return _q_result;
    } else if (context->argumentCount() == 1) {
        if ((qMetaTypeId<QPoint>() == context->argument(0).toVariant().userType())) {
            QPoint _q_arg0 = qscriptvalue_cast<QPoint>(context->argument(0));
            QVector4D _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        } else if ((qMetaTypeId<QPointF>() == context->argument(0).toVariant().userType())) {
            QPointF _q_arg0 = qscriptvalue_cast<QPointF>(context->argument(0));
            QVector4D _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        } else if ((qMetaTypeId<QVector2D>() == context->argument(0).toVariant().userType())) {
            QVector2D _q_arg0 = qscriptvalue_cast<QVector2D>(context->argument(0));
            QVector4D _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        } else if ((qMetaTypeId<QVector3D>() == context->argument(0).toVariant().userType())) {
            QVector3D _q_arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
            QVector4D _q_cpp_result(_q_arg0);
            QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
            return _q_result;
        }
    } else if (context->argumentCount() == 2) {
        QVector3D _q_arg0 = qscriptvalue_cast<QVector3D>(context->argument(0));
        float _q_arg1 = qscriptvalue_cast<float>(context->argument(1));
        QVector4D _q_cpp_result(_q_arg0, _q_arg1);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
        return _q_result;
    } else if (context->argumentCount() == 3) {
        QVector2D _q_arg0 = qscriptvalue_cast<QVector2D>(context->argument(0));
        float _q_arg1 = qscriptvalue_cast<float>(context->argument(1));
        float _q_arg2 = qscriptvalue_cast<float>(context->argument(2));
        QVector4D _q_cpp_result(_q_arg0, _q_arg1, _q_arg2);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
        return _q_result;
    } else if (context->argumentCount() == 4) {
        float _q_arg0 = qscriptvalue_cast<float>(context->argument(0));
        float _q_arg1 = qscriptvalue_cast<float>(context->argument(1));
        float _q_arg2 = qscriptvalue_cast<float>(context->argument(2));
        float _q_arg3 = qscriptvalue_cast<float>(context->argument(3));
        QVector4D _q_cpp_result(_q_arg0, _q_arg1, _q_arg2, _q_arg3);
        QScriptValue _q_result = context->engine()->newVariant(context->thisObject(), QVariant::fromValue(_q_cpp_result));
        return _q_result;
    }
    break;

    case 1:
    if (context->argumentCount() == 2) {
        QVector4D _q_arg0 = qscriptvalue_cast<QVector4D>(context->argument(0));
        QVector4D _q_arg1 = qscriptvalue_cast<QVector4D>(context->argument(1));
        float _q_result = QVector4D::dotProduct(_q_arg0, _q_arg1);
        return qScriptValueFromValue(context->engine(), _q_result);
    }
    break;

    default:
    Q_ASSERT(false);
    }
    return qtscript_QVector4D_throw_ambiguity_error_helper(context,
        qtscript_QVector4D_function_names[_id],
        qtscript_QVector4D_function_signatures[_id]);
}

QScriptValue qtscript_create_QVector4D_class(QScriptEngine *engine)
{
    engine->setDefaultPrototype(qMetaTypeId<QVector4D*>(), QScriptValue());
    QScriptValue proto = engine->newVariant(QVariant::fromValue((QVector4D*)0));
    for (int i = 0; i < 26; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QVector4D_prototype_call, qtscript_QVector4D_function_lengths[i+2]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i)));
        proto.setProperty(QString::fromLatin1(qtscript_QVector4D_function_names[i+2]),
            fun, QScriptValue::SkipInEnumeration);
    }

    engine->setDefaultPrototype(qMetaTypeId<QVector4D>(), proto);
    engine->setDefaultPrototype(qMetaTypeId<QVector4D*>(), proto);

    QScriptValue ctor = engine->newFunction(qtscript_QVector4D_static_call, proto, qtscript_QVector4D_function_lengths[0]);
    ctor.setData(QScriptValue(engine, uint(0xBABE0000 + 0)));
    for (int i = 0; i < 1; ++i) {
        QScriptValue fun = engine->newFunction(qtscript_QVector4D_static_call,
            qtscript_QVector4D_function_lengths[i+1]);
        fun.setData(QScriptValue(engine, uint(0xBABE0000 + i+1)));
        ctor.setProperty(QString::fromLatin1(qtscript_QVector4D_function_names[i+1]),
            fun, QScriptValue::SkipInEnumeration);
    }

    return ctor;
}
